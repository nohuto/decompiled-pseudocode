/*
 * XREFs of ?vVecSquareCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C02A75B8
 * Callers:
 *     ?vAddStartCap@WIDENER@@IEAAXXZ @ 0x1C013F814 (-vAddStartCap@WIDENER@@IEAAXXZ.c)
 *     ?vAddEndCap@WIDENER@@IEAAXXZ @ 0x1C013F8A0 (-vAddEndCap@WIDENER@@IEAAXXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ?efWorldLength@STYLER@@IEAA?AVEFLOAT@@VEVECTORFX@@@Z @ 0x1C02A6E0C (-efWorldLength@STYLER@@IEAA-AVEFLOAT@@VEVECTORFX@@@Z.c)
 */

void __fastcall WIDENER::vVecSquareCompute(WIDENER *this, struct LINEDATA *a2)
{
  float v3; // xmm6_4
  float v4; // xmm1_4
  float v5; // xmm6_4
  int v6; // ebx
  char v7; // r8
  float v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((float *)this + 331);
  v4 = *(float *)STYLER::efWorldLength((__int64)this, (EFLOAT *)&v8, *((_QWORD *)a2 + 6));
  v8 = v4;
  if ( EFLOAT::bIsZero((EFLOAT *)&v8) )
    v5 = FP_0_0;
  else
    v5 = v3 / v4;
  v6 = *((_DWORD *)a2 + 13);
  bFToL((float)*((int *)a2 + 12) * v5, (int *)a2 + 14, 6);
  bFToL((float)v6 * v5, (int *)a2 + 15, v7);
  *(_DWORD *)a2 |= 2u;
}
