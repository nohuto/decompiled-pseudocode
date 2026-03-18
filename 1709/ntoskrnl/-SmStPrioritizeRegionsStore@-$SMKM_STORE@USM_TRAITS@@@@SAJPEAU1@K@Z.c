/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140009098
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140009270 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140572010 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402689F0 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x140269804 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     MmSetPriorityVaRanges @ 0x1406E25C4 (MmSetPriorityVaRanges.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(__int64 a1, int a2)
{
  bool v2; // zf
  BOOL v5; // r14d
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v7; // rdi
  int v8; // r9d
  unsigned int v9; // esi
  unsigned int i; // ebp
  __int64 v12; // rcx
  struct _KTHREAD *v13; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // [rsp+20h] [rbp-78h]
  _QWORD v17[2]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v18[48]; // [rsp+48h] [rbp-50h] BYREF

  v2 = (*(_BYTE *)(a1 + 6021) & 4) == 0;
  v17[1] = *(unsigned int *)(a1 + 6208);
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = a2 != 0;
    KiStackAttachProcess(*(_QWORD *)(a1 + 6568));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 6024);
    ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
    v9 = 0;
    *(_BYTE *)(a1 + 6023) = a2 != 0;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6580));
    for ( i = 0; i < *(_DWORD *)(a1 + 6212); ++i )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * i) & 0x7FFFFFFFFFFF0000LL) != 0 )
      {
        v17[0] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, i, 0, v8, 0);
        if ( v17[0] > 3uLL )
        {
          if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(a1 + 6024);
          KeAbPostRelease(a1 + 6024);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          MmSetPriorityVaRanges(v12, v17, (unsigned int)(v5 + 5));
          v13 = KeGetCurrentThread();
          --v13->SpecialApcDisable;
          ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, i, v14, v15, v16, 0);
        }
      }
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 6024);
    KeAbPostRelease(a1 + 6024);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    _InterlockedAdd((volatile signed __int32 *)(a1 + 6580), 0xFFFFFFFF);
    KiUnstackDetachProcess(v18, 0LL);
  }
  return v9;
}
