/*
 * XREFs of IsWheelTargetDesktopApp @ 0x1C01A08C4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z @ 0x1C019F1B4 (-xxxMouseWheelEvent@@YAXPEAUtagMOUSEEVENT@@UtagUIPI_INFO@@HUtagINPUT_MESSAGE_SOURCE@@IH@Z.c)
 * Callees:
 *     IsShellProcess @ 0x1C001BECC (IsShellProcess.c)
 *     ?MouseWheelRoutingFocus@@YAHXZ @ 0x1C019CAF8 (-MouseWheelRoutingFocus@@YAHXZ.c)
 */

__int64 __fastcall IsWheelTargetDesktopApp(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)MouseWheelRoutingFocus() || !a1 )
    return 1LL;
  if ( *(_DWORD *)UPDWORDPointer(8220LL) != 1 )
    return 0LL;
  if ( (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 376)) || (unsigned int)IsShellProcess(*(_QWORD *)(a1 + 376)) )
    return 1;
  return v2;
}
