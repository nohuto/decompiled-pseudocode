/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0115384
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C01122A0 (EditionHandleAltTabCancel.c)
 *     EditionCancelCoolSwitch @ 0x1C0115360 (EditionCancelCoolSwitch.c)
 *     ?EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z @ 0x1C0121060 (-EditionHandleAltTab@@YAXEGFK_KPEAUtagINPUT_MESSAGE_SOURCE@@PEAXG@Z.c)
 *     xxxNextWindow @ 0x1C01D04FC (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01D0BF8 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01D1410 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  volatile signed __int32 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, (volatile signed __int32 *)gspwndAltTab, 4294967292LL, 0LL, 1);
  v2 = (volatile signed __int32 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v2 )
    return 0LL;
  xxxDestroyWindow(v2, v3, v4);
  return 1LL;
}
