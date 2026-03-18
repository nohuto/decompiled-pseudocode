/*
 * XREFs of ?MouseWheelRoutingFocus@@YAHXZ @ 0x1C019CAF8
 * Callers:
 *     ?xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z @ 0x1C019EE08 (-xxxDoButtonEvent@@YAXPEAUtagMOUSEEVENT@@@Z.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 *     IsWheelTargetDesktopApp @ 0x1C01A08C4 (IsWheelTargetDesktopApp.c)
 * Callees:
 *     ?RawInputMouseRequestedByForeground@@YAHXZ @ 0x1C019D2CC (-RawInputMouseRequestedByForeground@@YAHXZ.c)
 */

__int64 MouseWheelRoutingFocus(void)
{
  unsigned int v1; // ebx

  if ( *(_DWORD *)UPDWORDPointer(8220LL) == 2 )
    return 0LL;
  v1 = 0;
  if ( (unsigned int)RawInputMouseRequestedByForeground() || !*(_DWORD *)UPDWORDPointer(8220LL) )
    return 1;
  return v1;
}
