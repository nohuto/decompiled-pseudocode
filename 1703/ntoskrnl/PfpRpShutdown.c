/*
 * XREFs of PfpRpShutdown @ 0x1406C4984
 * Callers:
 *     PfpParametersPropagate @ 0x1406C4E1C (PfpParametersPropagate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rcx
  _QWORD *v4; // rdi
  _DWORD *i; // rdi
  void *v6; // r10
  __int64 v7; // rdx
  _DWORD *j; // rdi
  void *v9; // rcx
  __int64 v11; // [rsp+70h] [rbp+8h]

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v3 = *(_QWORD ***)(a1 + 8);
  if ( !v3 || (v4 = *v3, ((unsigned __int8)*v3 & 1) != 0) )
  {
    for ( i = v3 + 1; ; i += 2 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
      {
        v4 = 0LL;
        goto LABEL_18;
      }
      if ( (*i & 1) == 0 )
        break;
    }
    v4 = *(_QWORD **)i;
  }
LABEL_18:
  while ( v4 )
  {
    v6 = v4;
    v11 = v4[1] & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v7 = *(_QWORD *)(a1 + 8)
       + 8LL
       * ((37
         * (BYTE6(v11)
          + 37
          * (BYTE5(v11)
           + 37
           * (BYTE4(v11)
            + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
         + HIBYTE(v11)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
    if ( (*v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = *(_QWORD *)(a1 + 8)
         + 8LL
         * ((37
           * (BYTE6(v11)
            + 37
            * (BYTE5(v11)
             + 37
             * (BYTE4(v11)
              + 37 * (BYTE3(v11) + 37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * ((unsigned __int8)v11 + 11623883)))))))
           + HIBYTE(v11)) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1));
    v4 = (_QWORD *)*v4;
    if ( ((unsigned __int8)v4 & 1) != 0 )
    {
      for ( j = (_DWORD *)(v7 + 8); ; j += 2 )
      {
        if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
        {
          v4 = 0LL;
          goto LABEL_17;
        }
        if ( (*j & 1) == 0 )
          break;
      }
      v4 = *(_QWORD **)j;
    }
LABEL_17:
    ExFreePoolWithTag(v6, 0);
  }
  v9 = *(void **)(a1 + 8);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  KeLeaveCriticalRegion();
  return PfpRpControlRequestReset(a1);
}
