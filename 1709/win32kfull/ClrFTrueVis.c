/*
 * XREFs of ClrFTrueVis @ 0x1C0080CAC
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     ClrFTrueVis @ 0x1C0080CAC (ClrFTrueVis.c)
 *     SetVisible @ 0x1C0092DB0 (SetVisible.c)
 * Callees:
 *     ClrFTrueVis @ 0x1C0080CAC (ClrFTrueVis.c)
 *     DecPaintCount @ 0x1C0080D20 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 */

__int64 __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 v2; // rcx
  __int64 i; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 176);
  if ( v2 || (*(_BYTE *)(a1 + 57) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn(v2);
    SetOrClrWF(0LL, a1, 272LL, 1LL);
    *(_QWORD *)(a1 + 176) = 0LL;
    result = DecPaintCount(a1);
  }
  for ( i = *(_QWORD *)(a1 + 112); i; i = *(_QWORD *)(i + 88) )
  {
    if ( (*(_BYTE *)(i + 71) & 0x10) != 0 )
      result = ClrFTrueVis(i);
  }
  return result;
}
