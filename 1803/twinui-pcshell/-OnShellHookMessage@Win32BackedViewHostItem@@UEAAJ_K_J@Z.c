/*
 * XREFs of ?OnShellHookMessage@Win32BackedViewHostItem@@UEAAJ_K_J@Z @ 0x1801B85D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ @ 0x1801B692C (-CheckWindowTextChanged@Win32BackedViewHostItem@@AEAA_NXZ.c)
 *     ?_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ @ 0x1801B9B10 (-_RaiseTitleBarChangedEvent@Win32BackedViewHostItem@@AEAAJXZ.c)
 */

__int64 __fastcall Win32BackedViewHostItem::OnShellHookMessage(HWND *this, __int64 a2, HWND a3)
{
  Win32BackedViewHostItem *v3; // rbx

  if ( a3 == this[8] && a2 == 6 )
  {
    v3 = (Win32BackedViewHostItem *)(this - 6);
    if ( Win32BackedViewHostItem::CheckWindowTextChanged(this - 6) )
      Win32BackedViewHostItem::_RaiseTitleBarChangedEvent(v3);
  }
  return 0LL;
}
