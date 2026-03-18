/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0061478 (IsToplevelWindowDesktopComposed.c)
 *     xxxGetSysMenu @ 0x1C00C1A64 (xxxGetSysMenu.c)
 *     xxxDCETrackCaptionButton @ 0x1C00C61FC (xxxDCETrackCaptionButton.c)
 *     _GetMenuState @ 0x1C01128F0 (_GetMenuState.c)
 *     xxxHandleNCMouseGuys @ 0x1C01394E4 (xxxHandleNCMouseGuys.c)
 *     xxxTrackCaptionButton @ 0x1C02110AC (xxxTrackCaptionButton.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, unsigned int a2, __int64 a3, struct _LARGE_STRING *a4)
{
  unsigned int v5; // ebx
  unsigned __int16 v7; // ax
  unsigned int v8; // esi
  __int64 SysMenu; // rax

  v5 = a3;
  if ( a2 != 161 )
  {
    if ( a2 <= 0xA1 || a2 > 0xA3 )
      return;
    goto LABEL_17;
  }
  if ( (unsigned int)a3 < 8 || (unsigned int)a3 > 9 && (unsigned int)(a3 - 20) > 1 )
  {
    if ( (unsigned int)(a3 - 10) > 7 )
      goto LABEL_17;
    v8 = a3 + 61431;
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) && (*((_BYTE *)a1 + 66) & 8) != 0 )
      v7 = xxxDCETrackCaptionButton((__int64)a1, v5);
    else
      v7 = xxxTrackCaptionButton(a1, v5);
    v8 = v7;
  }
  if ( !v8 )
  {
LABEL_17:
    xxxHandleNCMouseGuys((int)a1);
    return;
  }
  if ( v8 == 61824
    || (*((_BYTE *)a1 + 70) & 8) == 0
    || (*((_BYTE *)a1 + 71) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu((__int64)a1, 1LL, a3, (__int64)a4),
        (GetMenuState(SysMenu, (unsigned __int16)v8 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0x112u, v8, a4, 0, 0, 0LL, 1, 1);
  }
}
