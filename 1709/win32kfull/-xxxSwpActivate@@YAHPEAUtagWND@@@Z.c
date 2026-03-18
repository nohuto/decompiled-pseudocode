/*
 * XREFs of ?xxxSwpActivate@@YAHPEAUtagWND@@@Z @ 0x1C00C9224
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     SetOrClrWF @ 0x1C008B874 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C00A6110 (xxxSendMessage.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 */

__int64 __fastcall xxxSwpActivate(struct tagWND *a1)
{
  _DWORD *v2; // rdx
  _DWORD *v3; // rdx

  if ( !a1 )
    return 0LL;
  if ( (*((_BYTE *)a1 + 71) & 0xC0) == 0x40 )
  {
    xxxSendMessage((ULONG_PTR)a1);
    return 0LL;
  }
  if ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL) == a1 || !(unsigned int)xxxActivateWindow(a1) )
    return 0LL;
  v2 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 408LL) + 120LL);
  if ( v2 )
    SetOrClrWF(1, v2, 0x101u, 1);
  v3 = *(_DWORD **)(*(_QWORD *)(gptiCurrent + 408LL) + 128LL);
  if ( v3 )
    SetOrClrWF(1, v3, 0x101u, 1);
  return 1LL;
}
