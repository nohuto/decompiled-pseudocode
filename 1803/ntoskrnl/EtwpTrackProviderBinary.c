/*
 * XREFs of EtwpTrackProviderBinary @ 0x140581C38
 * Callers:
 *     NtTraceControl @ 0x14058F8F0 (NtTraceControl.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     EtwpProviderArrivalCallback @ 0x14058C90C (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x140590D4C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140590D94 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall EtwpTrackProviderBinary(__int64 a1, HANDLE *a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r14
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
      v9 = 0LL;
      v10 = 8LL;
      do
      {
        v11 = v6[4];
        if ( *(_DWORD *)(v9 + v11 + 112) )
        {
          v12 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v9 + v11 + 118), 0LL);
          v14 = v12;
          if ( v12 )
          {
            LOBYTE(v13) = 1;
            EtwpProviderArrivalCallback(v12, v13, Object);
            EtwpReleaseLoggerContext(v14, 0LL);
          }
        }
        v9 += 32LL;
        --v10;
      }
      while ( v10 );
    }
    *(_QWORD *)(v6[4] + 392LL) = 0LL;
    ExReleasePushLockEx(v6[4] + 384LL, 0LL, v7, v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
