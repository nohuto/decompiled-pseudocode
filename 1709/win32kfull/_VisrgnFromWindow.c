/*
 * XREFs of _VisrgnFromWindow @ 0x1C000BFF4
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C000BFB0 (UserVisrgnFromHwnd.c)
 * Callees:
 *     _GhostWindowFromHungWindow @ 0x1C005D3B8 (_GhostWindowFromHungWindow.c)
 *     CalcVisRgn @ 0x1C006A5C0 (CalcVisRgn.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 */

__int64 __fastcall VisrgnFromWindow(__int64 a1, __int64 a2, HRGN *a3)
{
  unsigned __int8 Prop; // al
  unsigned __int8 v7; // r8

  if ( (*(_DWORD *)(a1 + 304) & 0x20) != 0 && !GhostWindowFromHungWindow() )
  {
    Prop = GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL);
    if ( (Prop & v7) == 0 )
    {
LABEL_7:
      SetRectRgnIndirect(*a3, a1 + 128);
      return 1LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 66) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x10) == 0 )
      return 0LL;
    goto LABEL_7;
  }
  return CalcVisRgn(a3);
}
