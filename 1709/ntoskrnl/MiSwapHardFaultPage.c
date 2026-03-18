/*
 * XREFs of MiSwapHardFaultPage @ 0x140235F34
 * Callers:
 *     MiFinishHardFault @ 0x14002FC50 (MiFinishHardFault.c)
 *     MiIdealClusterPage @ 0x14022F348 (MiIdealClusterPage.c)
 * Callees:
 *     MiRemoveLockedPageCharge @ 0x140030B80 (MiRemoveLockedPageCharge.c)
 *     MiPfnReferenceCountIsZero @ 0x14004D4F0 (MiPfnReferenceCountIsZero.c)
 *     MiCopyPfnEntry @ 0x1400CA320 (MiCopyPfnEntry.c)
 *     MiLockNestedPageAtDpcInline @ 0x14011C690 (MiLockNestedPageAtDpcInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiUpdateTransitionPteFrame @ 0x14017CA00 (MiUpdateTransitionPteFrame.c)
 */

__int64 __fastcall MiSwapHardFaultPage(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 PteShadow; // rcx
  __int64 updated; // rax
  __int64 *v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  __int64 result; // rax

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow();
  updated = MiUpdateTransitionPteFrame(PteShadow);
  *v8 = updated;
  if ( (unsigned __int64)v8 >= v10 && (unsigned __int64)v8 <= v9 )
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
