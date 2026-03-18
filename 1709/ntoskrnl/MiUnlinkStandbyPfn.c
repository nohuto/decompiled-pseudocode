/*
 * XREFs of MiUnlinkStandbyPfn @ 0x14001E98C
 * Callers:
 *     MmCopyToCachedPage @ 0x14001CF90 (MmCopyToCachedPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiUnlinkPageFromList @ 0x14004B0F0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x14004BD90 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140078F10 (MiIsPfnFileOnly.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017C5DC (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MiDiscardTransitionPte @ 0x14022AE0C (MiDiscardTransitionPte.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(__int64 *a1, char a2)
{
  __int64 PteShadow; // rax
  __int64 v5; // r14
  ULONG_PTR v6; // rbx
  char v8; // al
  int v9; // eax
  unsigned __int8 v10; // si
  unsigned int v11; // eax
  int v12; // ecx
  __int64 v13; // rdx
  __int64 ValidPte; // [rsp+50h] [rbp+8h] BYREF

  PteShadow = *a1;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    PteShadow = MiReadPteShadow(a1, *a1);
  ValidPte = PteShadow;
  v5 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ValidPte);
  v6 = 48 * v5 - 0x58000000000LL;
  if ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
    return 2LL;
  if ( (unsigned int)MiUnlinkPageFromList(v6) )
  {
    v8 = *(_BYTE *)(v6 + 34);
    ++*(_WORD *)(v6 + 32);
    *(_BYTE *)(v6 + 34) = v8 & 0xF8 | 6;
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(v6 + 24) & 0xC000000000000000uLL | 1;
    if ( (a2 & 2) != 0 && (unsigned int)MiGetPfnPriority(v6, 0xC000000000000001uLL) > 2 )
      *(_BYTE *)(v6 + 35) = *(_BYTE *)(v6 + 35) & 0xF8 | 2;
    v9 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v6 + 16);
    v10 = *(_BYTE *)(v6 + 34);
    v11 = v9 & 0xFFFFFFE7;
    v12 = v10 >> 6;
    if ( v12 )
    {
      if ( v12 == 2 )
        v11 |= 0x18u;
    }
    else
    {
      v11 |= 8u;
    }
    ValidPte = MiMakeValidPte(0LL, v5, v11);
    v13 = ValidPte;
    if ( (a2 & 4) == 0 || !(unsigned int)MiIsPfnFileOnly(v6) )
    {
      v13 |= 0x42uLL;
      *(_BYTE *)(v6 + 34) = v10 | 0x10;
      ValidPte = v13;
    }
    *a1 = v13;
    if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
      MiWritePteShadow(a1, v13);
    return 0LL;
  }
  else
  {
    MiDiscardTransitionPte(v6);
    return 1LL;
  }
}
