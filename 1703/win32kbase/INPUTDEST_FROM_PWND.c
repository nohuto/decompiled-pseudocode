/*
 * XREFs of INPUTDEST_FROM_PWND @ 0x1C004C08C
 * Callers:
 *     ?MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0045C28 (-MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE.c)
 *     HandleFullWindowDestruction @ 0x1C004BFF0 (HandleFullWindowDestruction.c)
 *     ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C008C9E0 (-GetInputDestFromForegroundCapture@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C00A12D0 (-GetInputDestFromForegroundFocus@QHelper@@YA-AUtagINPUTDEST@@XZ.c)
 *     ??0CInputDest@@QEAA@QEAUtagWND@@@Z @ 0x1C0118184 (--0CInputDest@@QEAA@QEAUtagWND@@@Z.c)
 *     ?GetPrevMTNodeTarget@CTouchProcessor@@AEAA?AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@@Z @ 0x1C0121FA4 (-GetPrevMTNodeTarget@CTouchProcessor@@AEAA-AUtagINPUTDEST@@PEAUCPointerInfoNode@@PEAUCPointerInp.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C01251AC (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 *     _anonymous_namespace_::GetRawMouseInputDestination @ 0x1C01317DC (_anonymous_namespace_--GetRawMouseInputDestination.c)
 * Callees:
 *     memset @ 0x1C00A2500 (memset.c)
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
