/*
 * XREFs of MiSwapHardFaultPage @ 0x14026D914
 * Callers:
 *     MiFinishHardFault @ 0x140058B10 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 * Callees:
 *     MiCopyPfnEntry @ 0x1400037E0 (MiCopyPfnEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiPfnReferenceCountIsZero @ 0x1400309A0 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageCharge @ 0x140031840 (MiRemoveLockedPageCharge.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400BABE0 (MiLockNestedPageAtDpcInline.c)
 *     MiUpdateTransitionPteFrame @ 0x1401A6828 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiSwapHardFaultPage(unsigned __int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 updated; // rax
  __int64 *v7; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 result; // rax

  v5 = MI_READ_PTE_LOCK_FREE(a1);
  updated = MiUpdateTransitionPteFrame(v5);
  *v7 = updated;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
    MiWritePteShadow(v9, v8, v10);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntry(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a3 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  v11 = *(_QWORD *)(a2 + 16);
  if ( (v11 & 4) != 0 )
  {
    v11 &= ~4uLL;
    *(_QWORD *)(a2 + 16) = v11;
  }
  if ( (v11 & 2) != 0 )
    *(_QWORD *)(a2 + 16) = v11 & 0xFFFFFFFFFFFFFFFDuLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2) )
    MiPfnReferenceCountIsZero(a2, (__int64)(a2 + 0x58000000000LL) / 48);
  else
    *(_WORD *)(a3 + 32) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
