/*
 * XREFs of MiTrimThisWsle @ 0x1400FF1A0
 * Callers:
 *     MiTrimPte @ 0x1400FF080 (MiTrimPte.c)
 * Callees:
 *     MiLocateCloneAddress @ 0x14007C278 (MiLocateCloneAddress.c)
 *     MiGetPfnPriority @ 0x1400C3D60 (MiGetPfnPriority.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiGetWsleContents @ 0x1400FBED0 (MiGetWsleContents.c)
 *     MiSetVaAge @ 0x1400FDA60 (MiSetVaAge.c)
 *     MiGetVaAge @ 0x140100990 (MiGetVaAge.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiTrimThisWsle(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // ebx
  _BYTE *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int8 VaAge; // al
  unsigned int v12; // r10d
  __int64 v13; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r9d
  unsigned __int8 v17; // r8

  v5 = **(_DWORD **)(a1 + 136);
  v6 = (_BYTE *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v6) - 0x58000000000LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( v9 >= 0 )
    MiDemoteCombinedPte(a2, (unsigned __int64)v6, v9 | 0x8000000000000000uLL);
  if ( a3 < 0xFFFFF68000000000uLL || a3 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( (unsigned __int8)((MiGetWsleContents(v7, a3) & 0xF) - 8) <= 1u )
      return 0LL;
  }
  else
  {
    v10 = 0x3FFFFFFFFFFFFFFFLL;
    if ( (*(_QWORD *)(v8 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (*(_BYTE *)(a2 + 192) & 7) != 0 )
      return 0LL;
  }
  if ( (*(_BYTE *)(a2 + 192) & 7) == 2 )
  {
    v10 = qword_14036C8F8;
    if ( *(_QWORD *)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(a2 + 172)) != *(_QWORD *)(qword_14036C8F8
                                                                                           + 8
                                                                                           * ((*(_QWORD *)(v8 + 40) >> 40) & 0x3FFLL)) )
      return 0LL;
  }
  if ( (v5 & 0xF) == 0 )
    return 1LL;
  if ( (v5 & 0x60) != 0 )
  {
    v13 = 0x200000000000000LL;
    if ( (*(_QWORD *)(v8 + 40) & 0x200000000000000LL) != 0 )
    {
      if ( (v5 & 0x20) != 0 && (*(_DWORD *)(v8 + 16) & 0x400LL) == 0 )
      {
        v15 = *(_QWORD *)(v8 + 8);
        if ( v15 >= 0 || MiLocateCloneAddress(a2 - 1280, v15 | 0x8000000000000000uLL) )
          return 1LL;
      }
      if ( (v5 & 0x40) != 0 && (*(_DWORD *)(v8 + 16) & 0x400LL) != 0 )
        return 1LL;
    }
  }
  else
  {
    if ( (*v6 & 0x20) == 0 )
    {
      VaAge = MiGetVaAge(v10, a3);
      if ( VaAge >= v12 )
        return 1LL;
    }
    if ( (unsigned int)MiGetPfnPriority(v8) < 5 )
      return 1LL;
  }
  v16 = (unsigned __int8)MiGetVaAge(v13, a3);
  if ( (*v6 & 0x20) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 192) & 7) != 0 && *(_WORD *)(v8 + 32) != 1
      || v16 >= 6
      || (unsigned int)MiGetPfnPriority(v8) >= 5 )
    {
      return 0LL;
    }
    v17 = 6;
    goto LABEL_32;
  }
  if ( v16 - 1 <= 5 )
  {
    v17 = 0;
LABEL_32:
    MiSetVaAge(a2, a3, v17);
  }
  return 0LL;
}
