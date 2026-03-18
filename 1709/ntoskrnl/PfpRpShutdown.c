/*
 * XREFs of PfpRpShutdown @ 0x1406F4308
 * Callers:
 *     PfpParametersPropagate @ 0x1406F493C (PfpParametersPropagate.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestReset @ 0x14043D754 (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rsi
  _DWORD *i; // rsi
  void *v6; // r10
  _DWORD *j; // rsi
  void *v8; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v3 = *(_QWORD **)(a1 + 8);
  if ( !v3 || (v4 = (_QWORD *)*v3, (*v3 & 1) != 0) )
  {
    for ( i = v3 + 1; ; i += 2 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
      {
        v4 = 0LL;
        goto LABEL_17;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v4 = *(_QWORD **)i;
  }
LABEL_17:
  while ( v4 )
  {
    v6 = v4;
    v10 = v4[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v4 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      for ( j = (_DWORD *)(*(_QWORD *)(a1 + 8)
                         + 8LL
                         * ((37
                           * (BYTE6(v10)
                            + 37
                            * (BYTE5(v10)
                             + 37
                             * (BYTE4(v10)
                              + 37
                              * (BYTE3(v10)
                               + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                           + HIBYTE(v10)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1))
                         + 8); ; j += 2 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_16;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v4 = *(_QWORD **)j;
    }
LABEL_16:
    ExFreePoolWithTag(v6, 0);
  }
  v8 = *(void **)(a1 + 8);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveCriticalRegion();
  return PfpRpControlRequestReset(a1);
}
