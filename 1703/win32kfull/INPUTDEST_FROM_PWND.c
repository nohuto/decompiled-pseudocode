/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C0133004
 * Callers:
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     GetPTPShellTarget @ 0x1C01B0BB0 (GetPTPShellTarget.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01BB47C (PrepareSentPointerMessageForClient.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C6E90 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01C7014 (-PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01C7650 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     EditionIsPointerInputRedirected @ 0x1C01C9E00 (EditionIsPointerInputRedirected.c)
 *     xxxDoDeferredPointerActivate @ 0x1C01CA6DC (xxxDoDeferredPointerActivate.c)
 *     ?_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z @ 0x1C01CDB30 (-_AdjustFrameHwnd@Edgy@@YAXQEAXPEAUHWND__@@@Z.c)
 *     EditionPointerSpeedHitTest @ 0x1C01D1540 (EditionPointerSpeedHitTest.c)
 *     EditionPointerWindowHitTest @ 0x1C01D15F0 (EditionPointerWindowHitTest.c)
 *     EditionSpeedHitTest @ 0x1C01D1770 (EditionSpeedHitTest.c)
 *     ?DelegateCapture@PointerList@@YAPEAUtagWND@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9BF8 (-DelegateCapture@PointerList@@YAPEAUtagWND@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01EDB90 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

_DWORD *__fastcall INPUTDEST_FROM_PWND(_DWORD *a1, __int64 a2)
{
  memset(a1, 0, 0xC0uLL);
  if ( a2 )
  {
    *a1 = 4;
    *((_QWORD *)a1 + 10) = a2;
    a1[23] = 2;
  }
  return a1;
}
