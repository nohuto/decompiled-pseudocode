/*
 * XREFs of EtwpGetNextGuidEntry @ 0x140552724
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140552644 (EtwpDisableTraceProviders.c)
 *     EtwpEnumerateTraceGuids @ 0x14056B218 (EtwpEnumerateTraceGuids.c)
 *     EtwpTracingProvEnableCallback @ 0x1405D65E0 (EtwpTracingProvEnableCallback.c)
 *     EtwpGetTraceGroupList @ 0x14070A32C (EtwpGetTraceGroupList.c)
 *     EtwpGetTraceGuidList @ 0x14070A3CC (EtwpGetTraceGuidList.c)
 *     EtwpEventTracingCounterSetCallback @ 0x140749D60 (EtwpEventTracingCounterSetCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     EtwpUnreferenceGuidEntry @ 0x140480BE4 (EtwpUnreferenceGuidEntry.c)
 *     EtwpReferenceGuidEntry @ 0x140480DC8 (EtwpReferenceGuidEntry.c)
 */

signed __int64 *__fastcall EtwpGetNextGuidEntry(__int64 a1, signed __int64 *a2, int a3)
{
  __int64 v3; // rbp
  signed __int64 *v4; // rdi
  char v5; // r12
  signed __int64 *v6; // r15
  __int64 v7; // rbx
  signed __int64 *v8; // rsi
  signed __int64 *v9; // rbx
  __int64 i; // r13
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v12; // rax
  signed __int64 *j; // r14

  v3 = a1 + 1432;
  v4 = a2;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
    v7 = v3
       + 56LL
       * (((unsigned __int8)*((_DWORD *)a2 + 6) ^ (unsigned __int8)(*((_DWORD *)a2 + 7) ^ *((_DWORD *)a2 + 8) ^ *((_DWORD *)a2 + 9))) & 0x3F);
  else
    v7 = a1 + 1432;
  v8 = (signed __int64 *)(v7 + 16LL * a3);
  v9 = (signed __int64 *)(v7 + 48);
  for ( i = 2 * (a3 - 3LL); ; v8 = &v9[i] )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)v9, 0LL);
    v12 = v4;
    if ( !v4 )
      v12 = v8;
    for ( j = (signed __int64 *)*v12; j != v8; j = (signed __int64 *)*j )
    {
      v6 = j;
      if ( EtwpReferenceGuidEntry((ULONG_PTR)j) )
      {
        v5 = 1;
        break;
      }
    }
    if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegion();
    if ( v4 )
      EtwpUnreferenceGuidEntry(v4);
    if ( v5 )
      return v6;
    v9 += 7;
    if ( v9 - 6 == (signed __int64 *)(v3 + 3584) )
      break;
    v4 = 0LL;
  }
  return 0LL;
}
