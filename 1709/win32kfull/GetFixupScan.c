/*
 * XREFs of GetFixupScan @ 0x1C007A57C
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1C007A370 (BltDIB_CY.c)
 *     FastExpAA_CY @ 0x1C01272F0 (FastExpAA_CY.c)
 *     ExpandDIB_CY @ 0x1C0244EA0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0245860 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0246470 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0246C30 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C02478E0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0248370 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C0248B70 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C0248DE0 (TileDIB_CY.c)
 * Callees:
 *     FixupGrayScan @ 0x1C00077C0 (FixupGrayScan.c)
 *     FixupColorScan @ 0x1C013311C (FixupColorScan.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     MappingBGR @ 0x1C0247F2C (MappingBGR.c)
 */

void *__fastcall GetFixupScan(__int64 a1, void *a2)
{
  int v2; // r8d
  int v6; // edx
  int v7; // ecx
  char v8; // cl
  int v9; // eax
  int v10; // eax

  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x40) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
      FixupGrayScan(a1, a2);
    else
      FixupColorScan();
  }
  else
  {
    if ( (v2 & 0x20) != 0 )
    {
      ++*(_DWORD *)(a1 + 60);
      v6 = *(_DWORD *)(a1 + 40);
      v7 = *(_DWORD *)(a1 + 60);
      if ( v7 > v6 )
        v7 = v6;
      *(_BYTE *)(a1 + 8) |= 2u;
      *(_DWORD *)(a1 + 60) = v7;
      *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32) + *(_DWORD *)(a1 + 68) * (v6 - v7);
      *(_DWORD *)a1 = v2 & 0xFFFFFFDF;
    }
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64, void *))(a1 + 24))(a1 + 8, a2);
    }
    else
    {
      v8 = *(_BYTE *)(a1 + 8);
      if ( (v8 & 2) != 0 )
      {
        v9 = *(_DWORD *)(a1 + 60);
        if ( v9 && (v10 = v9 - 1, (*(_DWORD *)(a1 + 60) = v10) != 0) )
        {
          *(_QWORD *)(a1 + 48) += *(int *)(a1 + 68);
        }
        else if ( (v8 & 1) != 0 )
        {
          *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 40);
        }
        else
        {
          *(_BYTE *)(a1 + 8) = v8 & 0xFD;
        }
      }
    }
  }
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    if ( a2 )
    {
      MappingBGR(a2, *(unsigned int *)(a1 + 56), *(_QWORD *)(a1 + 392), *(_QWORD *)(a1 + 448));
      *(_QWORD *)(a1 + 448) += *(int *)(a1 + 472);
      if ( *(_QWORD *)(a1 + 448) == *(_QWORD *)(a1 + 456) )
        *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 464);
    }
  }
  return a2;
}
