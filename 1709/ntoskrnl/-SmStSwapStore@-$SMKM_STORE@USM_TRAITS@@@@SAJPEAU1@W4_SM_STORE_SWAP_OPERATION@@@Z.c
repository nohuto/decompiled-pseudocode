/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140003D64
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140003D04 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     KiStackAttachProcess @ 0x1400A0410 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     KiUnstackDetachProcess @ 0x1400BF430 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268CE8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140268DA4 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x140275E70 (SmPerformStoreSwapOperation.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v9; // rdi
  unsigned int v10; // eax
  _BYTE v11[48]; // [rsp+28h] [rbp-50h] BYREF

  KiStackAttachProcess(*(_QWORD *)(a1 + 6568));
  if ( !a2 )
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStOutSwapPrepareStore(a1);
    goto LABEL_18;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v10 = SMKM_STORE<SM_TRAITS>::SmStOutSwapStore(a1);
LABEL_18:
    v6 = v10;
    goto LABEL_6;
  }
  if ( v4 == 1 )
  {
    v5 = *(_QWORD **)(a1 + 6552);
    if ( (unsigned __int64)v5 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v5 == (_QWORD *)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 6552),
                             -1LL,
                             (signed __int64)v5) )
      {
        if ( *v5 )
          v6 = SmPerformStoreSwapOperation(2LL);
        else
          v6 = -1073741661;
        _InterlockedExchange64((volatile __int64 *)(a1 + 6552), 0LL);
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->SpecialApcDisable;
        v9 = (volatile signed __int64 *)(a1 + 6024);
        ExAcquirePushLockSharedEx((ULONG_PTR)v9, 0LL);
        if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v9);
        KeAbPostRelease((ULONG_PTR)v9);
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
