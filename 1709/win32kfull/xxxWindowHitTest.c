/*
 * XREFs of xxxWindowHitTest @ 0x1C01092D8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01D5B50 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxHelpLoop @ 0x1C0219F1C (xxxHelpLoop.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00CF31C (ThreadLockExchangeAlways.c)
 *     xxxWindowHitTest2 @ 0x1C0109384 (xxxWindowHitTest2.c)
 */

__int64 __fastcall xxxWindowHitTest(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rdi
  __int64 v3; // rdx
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0LL;
  v2 = BugCheckParameter2;
  v3 = gptiCurrent;
  v5[0] = *(_QWORD *)(gptiCurrent + 392LL);
  *(_QWORD *)(gptiCurrent + 392LL) = v5;
  for ( v5[1] = 0LL; v2; v2 = *(_QWORD *)(v2 + 88) )
  {
    ThreadLockExchangeAlways(v2, (__int64)v5);
    v1 = xxxWindowHitTest2(v2);
    if ( v1 )
      break;
  }
  ThreadUnlock1(BugCheckParameter2, v3);
  return v1;
}
