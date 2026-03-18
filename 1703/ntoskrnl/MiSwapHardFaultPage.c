/*
 * XREFs of MiSwapHardFaultPage @ 0x140225E74
 * Callers:
 *     MiFinishHardFault @ 0x1400CBC40 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x14002126C (MiLockNestedPageAtDpcInline.c)
 *     MiRemoveLockedPageCharge @ 0x1400A2B50 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x1400C9020 (MiPfnReferenceCountIsZero.c)
 *     MiCopyPfnEntry @ 0x14010C150 (MiCopyPfnEntry.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017D158 (MiUpdateTransitionPteFrame.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiSwapHardFaultPage(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 updated; // rax
  __int64 *v7; // r10
  __int64 result; // rax

  v5 = MI_READ_PTE_LOCK_FREE(a1);
  updated = MiUpdateTransitionPteFrame(v5);
  *v7 = updated;
  if ( MiPteInShadowRange((unsigned __int64)v7) )
    MiWritePteShadow();
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntry(a3, a2);
  if ( ((*(_QWORD *)(a2 + 40) >> 54) & 7) == 3 )
    *(_QWORD *)(a3 + 40) = *(_QWORD *)(a3 + 40) & 0xFE3FFFFFFFFFFFFFuLL | 0xC0000000000000LL;
  *(_QWORD *)(a3 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(a2 + 24) |= 0x4000000000000000uLL;
  if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
    *(_QWORD *)(a2 + 16) &= ~4uLL;
  if ( (*(_DWORD *)(a2 + 16) & 2) != 0 )
    *(_QWORD *)(a2 + 16) &= ~2uLL;
  if ( (unsigned int)MiRemoveLockedPageCharge(a2) )
    MiPfnReferenceCountIsZero(a2, (a2 + 0x58000000000LL) / 48);
  else
    *(_WORD *)(a3 + 32) = 1;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
