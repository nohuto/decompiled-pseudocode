/*
 * XREFs of MiUnlinkStandbyPfn @ 0x140028268
 * Callers:
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1400CB1E0 (MiIsPfnFileOnly.c)
 *     MiDiscardTransitionPte @ 0x14013B9CC (MiDiscardTransitionPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnlinkStandbyPfn(__int64 *a1, char a2)
{
  __int64 v4; // r14
  ULONG_PTR v5; // rbx
  char v7; // al
  int v8; // eax
  unsigned __int8 v9; // di
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 ValidPte; // [rsp+50h] [rbp+18h] BYREF

  ValidPte = MI_READ_PTE_LOCK_FREE(a1);
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
    v9 = *(_BYTE *)(v5 + 34);
    v10 = v8 & 0xFFFFFFE7;
    v11 = v9 >> 6;
    if ( v11 )
    {
      if ( v11 == 2 )
        v10 |= 0x18u;
    }
    else
    {
      v10 |= 8u;
    }
    ValidPte = MiMakeValidPte(0LL, v4, v10);
    v12 = ValidPte;
    if ( (a2 & 4) == 0 || !(unsigned int)MiIsPfnFileOnly(v5) )
    {
      v12 |= 0x42uLL;
      *(_BYTE *)(v5 + 34) = v9 | 0x10;
      ValidPte = v12;
    }
    *a1 = v12;
    if ( (unsigned int)MiPteInShadowRange(a1) )
      MiWritePteShadow(v13);
    return 0LL;
  }
  else
  {
    MiDiscardTransitionPte(v5);
    return 1LL;
  }
}
