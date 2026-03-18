/*
 * XREFs of EtwpTrackProviderBinary @ 0x14059C9B8
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     EtwpProviderArrivalCallback @ 0x1404F0FC4 (EtwpProviderArrivalCallback.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(__int64 a1, HANDLE *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int *v11; // r14
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  result = ObReferenceObjectByHandle(*a2, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v6 = Object;
    ExAcquirePushLockExclusiveEx(*((_QWORD *)Object + 4) + 384LL, 0LL);
    *(_QWORD *)(v6[4] + 392LL) = KeGetCurrentThread();
    if ( (*((_BYTE *)Object + 98) & 0x20) != 0 )
    {
      v4 = 0;
    }
    else
    {
      _InterlockedOr16((volatile signed __int16 *)Object + 49, 0x20u);
      v7 = 0LL;
      v8 = 8LL;
      do
      {
        v9 = v6[4];
        if ( *(_DWORD *)(v7 + v9 + 112) )
        {
          v10 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v7 + v9 + 118), 0);
          v11 = (unsigned int *)v10;
          if ( v10 )
          {
            EtwpProviderArrivalCallback(v10, 1, (__int64)Object);
            EtwpReleaseLoggerContext(v11, 0);
          }
        }
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(v6[4] + 392LL) = 0LL;
    ExReleasePushLockEx(v6[4] + 384LL, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
