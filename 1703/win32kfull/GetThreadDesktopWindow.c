/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00F2804
 * Callers:
 *     GetLastTopMostWindow @ 0x1C001CA48 (GetLastTopMostWindow.c)
 *     xxxRealDefWindowProc @ 0x1C003EA18 (xxxRealDefWindowProc.c)
 *     NtUserBuildHwndList @ 0x1C0068D00 (NtUserBuildHwndList.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00B9844 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SelectPalette @ 0x1C00E6528 (_SelectPalette.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00F0378 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxSysCommand @ 0x1C0112C2C (xxxSysCommand.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0202A04 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C020CA90 (xxxDrawAnimatedRects.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rcx

  v1 = 0LL;
  ThreadWin32Thread = a1;
  if ( a1 || (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread())) != 0 )
  {
    v3 = *(_QWORD *)(ThreadWin32Thread + 416);
    if ( v3 )
      return *(_QWORD *)(v3 + 16);
  }
  return v1;
}
