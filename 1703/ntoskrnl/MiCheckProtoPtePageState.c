/*
 * XREFs of MiCheckProtoPtePageState @ 0x14010B1D8
 * Callers:
 *     MiFlushSectionInternal @ 0x140094CA0 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x14010B4A0 (MmPurgeSection.c)
 *     MiIsSubsectionClean @ 0x14020A668 (MiIsSubsectionClean.c)
 *     MiPurgeSubsection @ 0x14020A93C (MiPurgeSubsection.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 *     MiAreChargesNeededToLockPage @ 0x1400CB220 (MiAreChargesNeededToLockPage.c)
 *     MiChargeForLockedPage @ 0x1400CCDF0 (MiChargeForLockedPage.c)
 *     MiLockOwnedProtoPage @ 0x14010B370 (MiLockOwnedProtoPage.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiCheckProtoPtePageState(unsigned __int64 a1, _BYTE *a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned __int8 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        while ( 1 )
        {
          v5 = MI_READ_PTE_LOCK_FREE(v4);
          v15 = v5;
          v6 = v5;
          if ( (v5 & 1) != 0 )
            break;
          if ( (v5 & 0x400) != 0 || (v5 & 0x800) == 0 )
            goto LABEL_21;
          if ( (unsigned int)MiInvalidPteConforms(v5) )
          {
            v7 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v15);
            goto LABEL_9;
          }
        }
        if ( (v5 & 0x200) != 0 )
          goto LABEL_21;
        v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
LABEL_9:
        ;
      }
      while ( !MiIsPfnInline(v7) );
      v9 = 48 * v8 - 0x58000000000LL;
      *a2 = MiLockPageInline(v9);
      v10 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v10 == v6 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v11);
    }
    if ( (v10 & 1) != 0 )
      break;
    if ( (*(_BYTE *)(v9 + 34) & 7u) < 6 )
      goto LABEL_20;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
    MmAccessFault(2uLL, a1, 0, 0LL);
  }
  if ( (*(_QWORD *)(v9 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
  {
LABEL_20:
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v11);
LABEL_21:
    *a2 = 17;
    return 0LL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v9) || (unsigned int)MiChargeForLockedPage(v13, 1) )
    ++*(_WORD *)(v9 + 32);
  LOBYTE(v12) = *a2;
  MiLockOwnedProtoPage(v9, v12);
  return v9;
}
