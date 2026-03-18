/*
 * XREFs of MiUnlinkStandbyPfn @ 0x1400BBD84
 * Callers:
 *     MmCopyToCachedPage @ 0x1401130D0 (MmCopyToCachedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiUnlinkPageFromList @ 0x14011AAD0 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x140121930 (MiIsPfnFileOnly.c)
 *     MiDiscardTransitionPte @ 0x140154D68 (MiDiscardTransitionPte.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401A649C (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(unsigned __int64 *a1, char a2)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rbx
  char v7; // al
  int v8; // eax
  __int64 v9; // r9
  unsigned __int8 v10; // di
  unsigned int v11; // eax
  int v12; // ecx
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 ValidPte; // [rsp+50h] [rbp+18h] BYREF

  ValidPte = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  v4 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&ValidPte);
  v5 = 48 * v4 - 0x58000000000LL;
  if ( (*(_BYTE *)(v5 + 34) & 0x20) != 0 )
    return 2LL;
  if ( (unsigned int)MiUnlinkPageFromList(v5) )
  {
    v7 = *(_BYTE *)(v5 + 34);
    ++*(_WORD *)(v5 + 32);
    *(_BYTE *)(v5 + 34) = v7 & 0xF8 | 6;
    *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 24) & 0xC000000000000000uLL | 1;
    if ( (a2 & 2) != 0 && (unsigned int)MiGetPfnPriority(v5) > 2 )
      *(_BYTE *)(v5 + 35) = *(_BYTE *)(v5 + 35) & 0xF8 | 2;
    v8 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v5 + 16);
    v10 = *(_BYTE *)(v5 + 34);
    v11 = v8 & 0xFFFFFFE7;
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
    ValidPte = MiMakeValidPte(0LL, v4, v11, v9);
    v13 = ValidPte;
    if ( (a2 & 4) == 0 || !(unsigned int)MiIsPfnFileOnly(v5) )
    {
      v13 |= 0x42uLL;
      *(_BYTE *)(v5 + 34) = v10 | 0x10;
      ValidPte = v13;
    }
    *a1 = v13;
    if ( MiPteInShadowRange((unsigned __int64)a1) )
      MiWritePteShadow(v15, v14, v16);
    return 0LL;
  }
  else
  {
    MiDiscardTransitionPte(v5);
    return 1LL;
  }
}
