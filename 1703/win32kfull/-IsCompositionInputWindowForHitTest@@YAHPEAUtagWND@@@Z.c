/*
 * XREFs of ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0062420
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0061EF0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     IsWindowHolographicForHitTest @ 0x1C0062580 (IsWindowHolographicForHitTest.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062854 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall IsCompositionInputWindowForHitTest(struct tagWND *a1)
{
  __int64 result; // rax

  if ( (unsigned int)IsCompositionInputWindow(a1)
    && ((*((_BYTE *)a1 + 307) & 2) == 0 || (unsigned int)CoreWindowProp::IsComponent(a1)) )
  {
    return 1LL;
  }
  result = IsWindowHolographicForHitTest(a1);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
