/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020AD00
 * Callers:
 *     xxxSetClassIcon @ 0x1C020AD74 (xxxSetClassIcon.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C001D7AC (SendDwmIconChange.c)
 *     xxxRedrawTitle @ 0x1C003D3F0 (xxxRedrawTitle.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     DestroyWindowSmIcon @ 0x1C00C1AA4 (DestroyWindowSmIcon.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 21) == a2 )
  {
    if ( (*((_BYTE *)a1 + 63) & 0x20) != 0 )
      DestroyWindowSmIcon(a1);
    if ( !GetProp((__int64)a1, *(_WORD *)(gpsi + 1356LL), 1) )
      xxxRedrawTitle(a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64)a1);
  }
  return 1LL;
}
