/*
 * XREFs of ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140081D8C
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140081D08 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14008372C (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14009A524 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     SmPerformStoreSwapOperation @ 0x14009C150 (SmPerformStoreSwapOperation.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStSwapStore(__int64 a1, int a2)
{
  int v4; // ebx
  _QWORD *v5; // rsi
  unsigned int v6; // ebx
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // rcx
  signed __int64 *v10; // rdi
  _BYTE v11[48]; // [rsp+28h] [rbp-50h] BYREF

  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v11);
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
        v10 = (signed __int64 *)(a1 + 6024);
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
  KiUnstackDetachProcess((__int64)v11, 0LL);
  return v6;
}
