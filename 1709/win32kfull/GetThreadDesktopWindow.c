/*
 * XREFs of GetThreadDesktopWindow @ 0x1C00FB0A0
 * Callers:
 *     GetLastTopMostWindow @ 0x1C0058904 (GetLastTopMostWindow.c)
 *     NtUserBuildHwndList @ 0x1C006D090 (NtUserBuildHwndList.c)
 *     _FindWindowEx @ 0x1C006E920 (_FindWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0094260 (xxxRealDefWindowProc.c)
 *     ?xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z @ 0x1C00C6C40 (-xxxActivateOnMinimize@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     _SelectPalette @ 0x1C00F8348 (_SelectPalette.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C00FC994 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxSysCommand @ 0x1C011D2FC (xxxSysCommand.c)
 *     ?PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z @ 0x1C0204518 (-PixieHack@@YAXPEAUtagWND@@PEAUtagRECT@@@Z.c)
 *     xxxDrawAnimatedRects @ 0x1C020E920 (xxxDrawAnimatedRects.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall GetThreadDesktopWindow(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax

  v2 = 0LL;
  v3 = a1;
  if ( a1 )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(0LL, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v3 = *ThreadWin32Thread;
  }
  if ( v3 )
  {
LABEL_6:
    v6 = *(_QWORD *)(v3 + 440);
    if ( v6 )
      return *(_QWORD *)(v6 + 16);
  }
  return v2;
}
