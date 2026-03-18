/*
 * XREFs of EtwpTrackProviderBinary @ 0x14045A320
 * Callers:
 *     NtTraceControl @ 0x14047FD70 (NtTraceControl.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     EtwpProviderArrivalCallback @ 0x140448030 (EtwpProviderArrivalCallback.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
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
  __int64 v11; // r14
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
        if ( *(_DWORD *)(v9 + v7 + 112) )
        {
          v10 = EtwpAcquireLoggerContextByLoggerId(a1, *(unsigned __int16 *)(v9 + v7 + 118), 0LL);
          v11 = v10;
          if ( v10 )
          {
            EtwpProviderArrivalCallback(v10, 1, (__int64)Object);
            EtwpReleaseLoggerContext(v11, 0LL);
          }
        }
        v7 += 32LL;
        --v8;
      }
      while ( v8 );
    }
    *(_QWORD *)(v6[4] + 392LL) = 0LL;
    ExReleasePushLockEx(v6[4] + 384LL, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
