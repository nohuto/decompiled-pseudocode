/*
 * XREFs of PfpRpShutdown @ 0x14075C858
 * Callers:
 *     PfpParametersPropagate @ 0x14075CCAC (PfpParametersPropagate.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PfpRpControlRequestReset @ 0x14064A3D0 (PfpRpControlRequestReset.c)
 */

__int64 __fastcall PfpRpShutdown(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 *v5; // rdx
  unsigned __int64 v6; // rdi
  void *v7; // r11
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned __int64 *i; // rdx
  void *v12; // rcx

  *(_DWORD *)(a1 + 152) &= ~1u;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 136));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 48, 0LL);
  v5 = *(unsigned __int64 **)(a1 + 8);
  if ( !v5 )
    goto LABEL_5;
  v6 = *v5;
  if ( (*v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v6 = *v5;
  if ( (v6 & 1) != 0 )
  {
LABEL_5:
    ++v5;
    v3 = *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    while ( (unsigned __int64)v5 < v3 )
    {
      v6 = *v5;
      if ( (*v5 & 1) == 0 )
        goto LABEL_20;
      ++v5;
    }
    v6 = 0LL;
  }
LABEL_20:
  while ( v6 )
  {
    v7 = (void *)v6;
    v8 = *(_QWORD *)(v6 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    v9 = *(_QWORD *)(a1 + 8)
       + 8
       * ((HIBYTE(v8)
         + 37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8)
            + 37
            * (((*(_DWORD *)(v6 + 8) & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v6 + 8) & (unsigned int)(-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 16)
              + 37
              * (37 * ((unsigned __int8)v8 + 11623883)
               + (unsigned __int8)((unsigned __int16)(*(_WORD *)(v6 + 8) & (-1 << (*(_DWORD *)(a1 + 4) & 0x1F))) >> 8)))))))) & ((*(_DWORD *)(a1 + 4) >> 5) - 1));
    v10 = (unsigned __int64 *)v6;
    v6 = *(_QWORD *)v6;
    if ( (v6 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v6 = *v10;
    if ( (v6 & 1) != 0 )
    {
      for ( i = (unsigned __int64 *)(v9 + 8);
            (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
            ++i )
      {
        v6 = *i;
        if ( (*i & 1) == 0 )
          goto LABEL_19;
      }
      v6 = 0LL;
    }
LABEL_19:
    ExFreePoolWithTag(v7, 0);
  }
  v12 = *(void **)(a1 + 8);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  *(_QWORD *)(a1 + 16) = a1 + 24;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 48), (__int64)v5, v3, v4);
  KeAbPostRelease(a1 + 48);
  KeLeaveCriticalRegion();
  return PfpRpControlRequestReset(a1);
}
