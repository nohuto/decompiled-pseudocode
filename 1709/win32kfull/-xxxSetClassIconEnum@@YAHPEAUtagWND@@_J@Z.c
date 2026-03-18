/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C020C0A0
 * Callers:
 *     xxxSetClassIcon @ 0x1C020C114 (xxxSetClassIcon.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0053FC0 (xxxRedrawTitle.c)
 *     DestroyWindowSmIcon @ 0x1C005D7C8 (DestroyWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     SendDwmIconChange @ 0x1C008B294 (SendDwmIconChange.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  if ( *((_QWORD *)a1 + 21) == a2 )
  {
    if ( (*((_BYTE *)a1 + 63) & 0x20) != 0 )
      DestroyWindowSmIcon((__int64)a1);
    if ( !GetProp((__int64)a1, *(_WORD *)(gpsi + 1356LL), 1) )
      xxxRedrawTitle(a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((ULONG_PTR)a1);
  }
  return 1LL;
}
