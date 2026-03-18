/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01C0854
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0083EC0 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x1C00CE354 (xxxTrackMouseMove.c)
 *     xxxActiveWindowTracking @ 0x1C01C11D8 (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01C1368 (zzzActiveCursorTracking.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0008F1C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C007B608 (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C020F330 (DWP_GetEnabledPopup.c)
 */

__int64 __fastcall GetActiveTrackPwnd(struct tagWND *a1, _QWORD *a2)
{
  __int64 EnabledPopup; // rbx
  __int64 v5; // r9

  EnabledPopup = (__int64)a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  while ( (*(_BYTE *)(EnabledPopup + 71) & 0xC0) == 0x40 )
    EnabledPopup = *(_QWORD *)(EnabledPopup + 104);
  if ( (*(_BYTE *)(EnabledPopup + 71) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(EnabledPopup + 71) & 0x10) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(*(_QWORD *)(EnabledPopup + 16) + 408LL);
  if ( v5 == gpqForeground
    && (EnabledPopup == *(_QWORD *)(v5 + 120) || (unsigned int)IsModelessMenuNotificationWindow(EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(EnabledPopup + 24) + 8LL) + 160LL) )
    return 0LL;
  if ( a2 )
    *a2 = v5;
  return EnabledPopup;
}
