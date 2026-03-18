/*
 * XREFs of MiUnlinkStandbyBatch @ 0x1400B60C0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14001D68C (MiUserPdeOrAbove.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiUnlinkPageFromList @ 0x1400C3100 (MiUnlinkPageFromList.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUnlinkStandbyBatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        ULONG_PTR *a6)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  ULONG_PTR v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // r11
  int v15; // r10d
  unsigned __int64 v16; // r11
  char v17; // al
  char v18; // cl
  int v19; // eax
  __int64 v20; // r15
  char v21; // al
  _QWORD *v22; // r15
  int v23; // ebp
  unsigned __int64 v24; // r9
  int v25; // eax
  unsigned int v26; // ebp
  int v27; // ebp
  __int64 v28; // r14
  unsigned __int64 v29; // rbx
  unsigned __int8 v30; // r12
  unsigned __int64 v31; // rsi
  int v32; // eax
  int v33; // eax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rbx
  __int64 v37; // rcx
  _QWORD v39[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v40; // [rsp+70h] [rbp+8h]

  v6 = a5;
  v7 = a5;
  v40 = a5;
  if ( !a5 )
    return v7 - v6;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = MI_READ_PTE_LOCK_FREE(a2);
        v39[0] = v9;
        if ( (v9 & 1) != 0 )
        {
          v10 = MI_GET_PAGE_FRAME_FROM_PTE(v39);
          goto LABEL_8;
        }
        if ( (v9 & 0x400) != 0 || (v9 & 0x800) == 0 )
          goto LABEL_65;
        if ( (unsigned int)MiInvalidPteConforms(v9) )
        {
          v10 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v39);
LABEL_8:
          if ( MiIsPfnInline(v10) )
            break;
        }
      }
      v12 = 48 * v11 - 0x58000000000LL;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        goto LABEL_65;
      v13 = MI_READ_PTE_LOCK_FREE(a2);
      if ( v13 == v39[0] )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v14);
    }
    if ( !v12 )
      goto LABEL_65;
    if ( (MI_READ_PTE_LOCK_FREE(a2) & 1) != 0 )
      break;
    v17 = *(_BYTE *)(v12 + 34);
    if ( (v17 & 0x20) != 0 )
      break;
    v18 = *(_BYTE *)(v12 + 35);
    if ( (v18 & 0x40) != 0 || (v17 & 7) != 2 )
      break;
    v19 = (v18 & 8) != 0 ? 5 : v18 & 7;
    if ( v19 != v15 )
      break;
    if ( !(unsigned int)MiUnlinkPageFromList(v12) )
    {
      *a6 = v12;
      goto LABEL_65;
    }
    v20 = *(_QWORD *)(v12 + 8);
    v21 = *(_BYTE *)(v12 + 34) & 0xF8 | 6;
    ++*(_WORD *)(v12 + 32);
    *(_BYTE *)(v12 + 34) = v21;
    a2 += 8LL;
    a4 += 8LL;
    v22 = (_QWORD *)(v20 | 0x8000000000000000uLL);
    v23 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(v12 + 16);
    v25 = *(unsigned __int8 *)(v12 + 34) >> 6;
    v26 = v23 & 0xFFFFFFE7;
    if ( v25 != 1 )
    {
      if ( v25 )
      {
        if ( v25 == 2 )
          v26 |= 0x18u;
      }
      else
      {
        v26 |= 8u;
      }
    }
    v27 = v26 | 0x20000000;
    v28 = v27 & 0x1F;
    v29 = MmProtectToPteMask[v28] & 0xFFFF000000000E7FuLL | ((((__int64)(v12 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | 0x21;
    v30 = word_14036C2A8;
    if ( v24 < 0xFFFFF68000000000uLL || v24 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_48;
    v31 = (__int64)(v24 << 25) >> 16;
    if ( v24 >= 0xFFFFF6FB40000000uLL && v24 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v24 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v29 = MmProtectToPteMask[v28] & 0xFFFF000000000E7FuLL | ((((__int64)(v12 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) | 0x8000000000000021uLL;
      }
      else if ( (v27 & 0x4000000) == 0 )
      {
        v29 = MmProtectToPteMask[v28] & 0x7FFF000000000E7FLL | ((((__int64)(v12 + 0x58000000000LL) / 48) & 0xFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | 0x21;
      }
      v32 = MiUserPdeOrAbove(v24);
      v24 = a4;
      if ( v32 )
        v29 |= 4uLL;
    }
    if ( v24 <= 0xFFFFF6BFFFFFFF78uLL )
      v29 |= 4uLL;
    if ( v31 < 0xFFFF800000000000uLL )
    {
      v33 = HIBYTE(word_14036C2A8);
      goto LABEL_47;
    }
    if ( (unsigned int)MiGetSystemRegionType(v31) != 1 && (v31 < v34 || v31 > v35) )
    {
      if ( v31 < qword_14036D870 || (v33 = HIBYTE(word_14036C2A8), v31 > qword_14036C5D0) )
        v33 = v30;
LABEL_47:
      v6 = a5;
      if ( !v33 )
        goto LABEL_50;
LABEL_48:
      v29 |= 0x100uLL;
      goto LABEL_50;
    }
    v6 = a5;
LABEL_50:
    if ( v27 < 0 && (v27 & 5) == 4 )
      v29 |= 0x42uLL;
    if ( (v27 & 0x40000000) != 0 )
      v29 &= ~4uLL;
    v36 = ((unsigned __int16)v29 ^ (unsigned __int16)(v30 << 8)) & 0x100 ^ v29;
    if ( (v27 & 0x8000000) != 0 )
      v36 &= ~0x100uLL;
    if ( (v27 & 0x4000000) != 0 )
      v36 |= 0x80uLL;
    *v22 = v36 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( (unsigned int)MiPteInShadowRange(v22) )
      MiWritePteShadow(v37);
    *(_QWORD *)(v12 + 24) = *(_QWORD *)(v12 + 24) & 0xC000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    a5 = --v6;
    if ( !v6 )
      goto LABEL_65;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), v16);
LABEL_65:
  v7 = v40;
  return v7 - v6;
}
