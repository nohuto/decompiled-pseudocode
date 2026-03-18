/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00B3344
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006407C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C001C5B4 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00509B0 (xxxSendMessage.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  _DWORD *v2; // rdx
  _DWORD *v3; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
  {
    xxxSendMessage((int)a1, 34, 0, 0);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) == a1 || !(unsigned int)xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
  if ( v2 )
    SetOrClrWF(1, v2, 0x101u, 1);
  v3 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 384LL) + 96LL);
  if ( v3 )
    SetOrClrWF(1, v3, 0x101u, 1);
  return 1LL;
}
