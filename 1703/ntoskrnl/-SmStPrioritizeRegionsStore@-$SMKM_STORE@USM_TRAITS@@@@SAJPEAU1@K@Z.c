/*
 * XREFs of ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340
 * Callers:
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140053800 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140447BB0 (SmProcessStoreMemoryPriorityRequest.c)
 * Callees:
 *     ?SmStUnmapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z @ 0x14005D878 (-SmStUnmapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@KKKPEAXK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MmSetPriorityVaRanges @ 0x1406B62E4 (MmSetPriorityVaRanges.c)
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
  _QWORD v16[2]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v17[48]; // [rsp+48h] [rbp-50h] BYREF

  v2 = (*(_BYTE *)(a1 + 5989) & 4) == 0;
  v16[1] = *(unsigned int *)(a1 + 6176);
  if ( v2 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v5 = a2 != 0;
    KiStackAttachProcess(*(_QWORD *)(a1 + 6536));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 5992);
    ExAcquirePushLockSharedEx(a1 + 5992, 0LL);
    v9 = 0;
    *(_BYTE *)(a1 + 5991) = a2 != 0;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 6548));
    for ( i = 0; i < *(_DWORD *)(a1 + 6180); ++i )
    {
      if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6184) + 8LL * i) & 0x7FFFFFFFFFFF0000LL) != 0 )
      {
        v16[0] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, i, 0, v8, 0);
        if ( v16[0] > 3uLL )
        {
          if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(a1 + 5992);
          KeAbPostRelease(a1 + 5992);
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          MmSetPriorityVaRanges(v12, v16, (unsigned int)(v5 + 5));
          v13 = KeGetCurrentThread();
          --v13->SpecialApcDisable;
          ExAcquirePushLockSharedEx(a1 + 5992, 0LL);
          SMKM_STORE<SM_TRAITS>::SmStUnmapVirtualRegion(a1, i, v14, v15);
        }
      }
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 5992);
    KeAbPostRelease(a1 + 5992);
    KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    _InterlockedAdd((volatile signed __int32 *)(a1 + 6548), 0xFFFFFFFF);
    KiUnstackDetachProcess(v17, 0LL);
  }
  return v9;
}
