/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E5E0
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14007E55C (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140003DE8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x1400040B8 (SmPerformStoreSwapOperation.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140004BEC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  int v4; // ebx
  void **v5; // rsi
  unsigned int v6; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v10; // rdi
  _BYTE v11[48]; // [rsp+28h] [rbp-50h] BYREF

  KiStackAttachProcess(*(_QWORD *)(a1 + 6536));
  if ( !a2 )
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
    goto LABEL_8;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v8 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
LABEL_8:
    v6 = v8;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v5 = *(void ***)(a1 + 6520);
    if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v5 == (void **)_InterlockedCompareExchange64(
                            (volatile signed __int64 *)(a1 + 6520),
                            -1LL,
                            (signed __int64)v5) )
      {
        if ( *v5 )
          v6 = SmPerformStoreSwapOperation(2, *v5);
        else
          v6 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 6520), 0LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v10 = (volatile signed __int64 *)(a1 + 5992);
        ExAcquirePushLockSharedEx((ULONG_PTR)v10, 0LL);
        if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v10);
        KeAbPostRelease((ULONG_PTR)v10);
        KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        ExFreePoolWithTag(v5, 0);
      }
      else
      {
        v6 = -1073740682;
      }
    }
    else
    {
      v6 = -1073741661;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_6:
  KiUnstackDetachProcess(v11, 0LL);
  return v6;
}
