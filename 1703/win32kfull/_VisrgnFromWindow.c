/*
 * XREFs of _VisrgnFromWindow @ 0x1C01C23C8
 * Callers:
 *     UserVisrgnFromHwnd @ 0x1C01C2388 (UserVisrgnFromHwnd.c)
 * Callees:
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     CalcVisRgn @ 0x1C0066160 (CalcVisRgn.c)
 *     _GhostWindowFromHungWindow @ 0x1C00B4280 (_GhostWindowFromHungWindow.c)
 */

__int64 __fastcall VisrgnFromWindow(__int64 a1, int a2, HRGN *a3)
{
  unsigned __int8 Prop; // al
  unsigned __int8 v7; // r8
  unsigned int v9; // r9d

  if ( (*(_DWORD *)(a1 + 304) & 0x20) != 0 && !GhostWindowFromHungWindow(a1) )
  {
    Prop = GetProp(a1, atomDispAffinity, 1);
    if ( (Prop & v7) == 0 )
      goto LABEL_4;
  }
  if ( (*(_BYTE *)(a1 + 66) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
    {
LABEL_4:
      SetRectRgnIndirect(*a3, a1 + 128);
      return 1LL;
    }
    return 0LL;
  }
  else
  {
    v9 = (a2 != 0 ? 17409 : 134218753) | 0x10;
    if ( (*(_BYTE *)(a1 + 71) & 4) == 0 )
      v9 = a2 != 0 ? 17409 : 134218753;
    return CalcVisRgn(a3, a1, (struct tagWND *)a1, v9);
  }
}
