/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetMenuState @ 0x1C0046708 (_GetMenuState.c)
 *     xxxGetSysMenu @ 0x1C0046740 (xxxGetSysMenu.c)
 *     xxxDCETrackCaptionButton @ 0x1C00475C4 (xxxDCETrackCaptionButton.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0064AC8 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     xxxHandleNCMouseGuys @ 0x1C0140028 (xxxHandleNCMouseGuys.c)
 *     xxxTrackCaptionButton @ 0x1C02125C4 (xxxTrackCaptionButton.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // esi
  __int64 SysMenu; // rax

  if ( a2 != 161 )
  {
    if ( a2 <= 0xA1 || a2 > 0xA3 )
      return;
    goto LABEL_17;
  }
  if ( a3 < 8 || a3 > 9 && a3 - 20 > 1 )
  {
    if ( a3 - 10 > 7 )
      goto LABEL_17;
    v6 = a3 + 61431;
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed() && (*((_BYTE *)a1 + 66) & 8) != 0 )
      v5 = xxxDCETrackCaptionButton(a1, a3);
    else
      v5 = xxxTrackCaptionButton(a1, a3);
    v6 = v5;
  }
  if ( !v6 )
  {
LABEL_17:
    xxxHandleNCMouseGuys((ULONG_PTR)a1);
    return;
  }
  if ( v6 == 61824
    || (*((_BYTE *)a1 + 70) & 8) == 0
    || (*((_BYTE *)a1 + 71) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(a1, 1LL), (GetMenuState(SysMenu, (unsigned __int16)v6 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 1);
  }
}
