/*
 * XREFs of MiCheckProtoPtePageState @ 0x140032610
 * Callers:
 *     MmPurgeSection @ 0x140031240 (MmPurgeSection.c)
 *     MiFlushSectionInternal @ 0x140038530 (MiFlushSectionInternal.c)
 *     MiIsSubsectionClean @ 0x140211280 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x1402115B4 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1402238B4 (MiPurgeFileOnlyPfn.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x140031780 (MiLockPageAtDpcInline.c)
 *     MiLockOwnedProtoPage @ 0x140031B00 (MiLockOwnedProtoPage.c)
 *     MiChargeForLockedPage @ 0x140032500 (MiChargeForLockedPage.c)
 *     MmAccessFault @ 0x140040CF0 (MmAccessFault.c)
 *     MiAreChargesNeededToLockPage @ 0x1400780A0 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x14017C70C (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(ULONG_PTR BugCheckParameter1, unsigned __int8 *a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rsi
  __int64 PteShadow; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // rdi
  unsigned __int8 CurrentIrql; // bp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = (__int64 *)(((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          PteShadow = *v6;
          if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
            PteShadow = MiReadPteShadow(v6, *v6);
          v16 = PteShadow;
          if ( (PteShadow & 1) != 0 )
            break;
          if ( (PteShadow & 0x400) != 0 || (PteShadow & 0x800) == 0 )
            goto LABEL_27;
          if ( (unsigned int)MiInvalidPteConforms(PteShadow, a2, a3, a4) )
          {
            v8 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v16);
            goto LABEL_12;
          }
        }
        if ( (PteShadow & 0x200) != 0 )
          goto LABEL_27;
        v8 = MI_GET_PAGE_FRAME_FROM_PTE(&v16);
LABEL_12:
        ;
      }
      while ( !(unsigned int)MiIsPfnInline(v8) );
      v11 = v10 + 48 * a4;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v9);
      MiLockPageAtDpcInline(v11);
      *a2 = CurrentIrql;
      v13 = *v6;
      if ( (unsigned __int64)v6 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v6 <= 0xFFFFF6FB7DBED7F8uLL )
        v13 = MiReadPteShadow(v6, *v6);
      if ( v13 == PteShadow )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
    }
    if ( (v13 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v11 + 34) & 7u) < 6 )
      goto LABEL_26;
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
    MmAccessFault(2uLL, BugCheckParameter1);
  }
  if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_26:
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(CurrentIrql);
LABEL_27:
    *a2 = 17;
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v11, a2, a3, a4) || (unsigned int)MiChargeForLockedPage(v14, 1) )
    ++*(_WORD *)(v11 + 32);
  MiLockOwnedProtoPage(v11, *a2);
  return v11;
}
