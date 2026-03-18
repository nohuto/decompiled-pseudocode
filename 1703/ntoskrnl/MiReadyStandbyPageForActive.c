/*
 * XREFs of MiReadyStandbyPageForActive @ 0x14009BFE0
 * Callers:
 *     MmCheckCachedPageStates @ 0x14009E320 (MmCheckCachedPageStates.c)
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x14017CDA4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 */

unsigned __int64 __fastcall MiReadyStandbyPageForActive(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v2; // rdi
  int v4; // r8d
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  ++*(_WORD *)(a1 + 32);
  v2 = (_QWORD *)(v1 | 0x8000000000000000uLL);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 6;
  v4 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(a1 + 16);
  v6 = *(unsigned __int8 *)(a1 + 34) >> 6;
  v7 = v4 & 0xFFFFFFE7;
  if ( v6 != 1 )
  {
    if ( v6 )
    {
      if ( v6 == 2 )
        v7 = (unsigned int)v7 | 0x18;
    }
    else
    {
      v7 = (unsigned int)v7 | 8;
    }
  }
  LODWORD(v7) = v7 | 0x20000000;
  *v2 = MiMakeValidPte(v5, (a1 + 0x58000000000LL) / 48, v7);
  if ( (unsigned int)MiPteInShadowRange(v2) )
    MiWritePteShadow(v8);
  result = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  *(_QWORD *)(a1 + 24) = result;
  return result;
}
