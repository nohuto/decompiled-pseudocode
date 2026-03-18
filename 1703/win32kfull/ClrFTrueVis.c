/*
 * XREFs of ClrFTrueVis @ 0x1C001EBD4
 * Callers:
 *     ClrFTrueVis @ 0x1C001EBD4 (ClrFTrueVis.c)
 *     SetVisible @ 0x1C0021E80 (SetVisible.c)
 *     xxxMinMaximizeEx @ 0x1C00E8144 (xxxMinMaximizeEx.c)
 * Callees:
 *     DecPaintCount @ 0x1C001C338 (DecPaintCount.c)
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     ClrFTrueVis @ 0x1C001EBD4 (ClrFTrueVis.c)
 */

__int64 __fastcall ClrFTrueVis(__int64 a1)
{
  __int64 i; // rbx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 176) || (*(_BYTE *)(a1 + 57) & 0x10) != 0 )
  {
    DeleteMaybeSpecialRgn();
    SetOrClrWF(0, (_DWORD *)a1, 0x110u, 1);
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
