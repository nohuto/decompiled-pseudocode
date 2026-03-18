/*
 * XREFs of MappingBGRF @ 0x1C02465A0
 * Callers:
 *     ShrinkDIB_CY_SrkCX @ 0x1C0001010 (ShrinkDIB_CY_SrkCX.c)
 *     BltDIB_CY @ 0x1C00A2C50 (BltDIB_CY.c)
 *     RepDIB_CY @ 0x1C00A2F00 (RepDIB_CY.c)
 *     FastExpAA_CY @ 0x1C011DA50 (FastExpAA_CY.c)
 *     ExpandDIB_CY @ 0x1C02434D0 (ExpandDIB_CY.c)
 *     ExpandDIB_CY_ExpCX @ 0x1C0243E60 (ExpandDIB_CY_ExpCX.c)
 *     GrayExpandDIB_CY @ 0x1C0244A60 (GrayExpandDIB_CY.c)
 *     GrayExpandDIB_CY_ExpCX @ 0x1C0245210 (GrayExpandDIB_CY_ExpCX.c)
 *     GrayShrinkDIB_CY @ 0x1C0245EB0 (GrayShrinkDIB_CY.c)
 *     ShrinkDIB_CY @ 0x1C0246940 (ShrinkDIB_CY.c)
 *     SkipDIB_CY @ 0x1C0247140 (SkipDIB_CY.c)
 *     TileDIB_CY @ 0x1C02473B0 (TileDIB_CY.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall MappingBGRF(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, unsigned __int8 *a4)
{
  int v4; // ebx
  unsigned __int8 *v5; // r10
  unsigned __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int8 result; // al

  v4 = *a4;
  v5 = a4 + 1;
  do
  {
    v7 = (4 * (BGR555Idx[*a1] - (_WORD)v4)) & 0x7C00 | (unsigned __int64)((((__int64)(BGR555Idx[a1[2]] - v4) >> 5) | (BGR555Idx[a1[1]] - (_WORD)v4) & 0x1F00) >> 3);
    v8 = a3 + 2 * v7;
    *(_WORD *)a1 = *(_WORD *)(v7 + v8);
    result = *(_BYTE *)(v7 + v8 + 2);
    a1[2] = result;
    v4 = *v5++;
    if ( !v4 )
    {
      v5 -= 66;
      v4 = *v5;
    }
    a1 += 4;
  }
  while ( (unsigned __int64)a1 < a2 );
  return result;
}
