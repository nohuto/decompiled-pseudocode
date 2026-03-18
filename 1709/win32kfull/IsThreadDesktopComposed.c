/*
 * XREFs of IsThreadDesktopComposed @ 0x1C0065D74
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C004AB9C (xxxMinMaximizeEx.c)
 *     EditionMouseSpeedHitTest @ 0x1C005DBF0 (EditionMouseSpeedHitTest.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0067354 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSetDeskWallpaper @ 0x1C011EB54 (xxxSetDeskWallpaper.c)
 *     ?PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z @ 0x1C01C0328 (-PostMoveToPwnd@@YAXPEAUtagQ@@PEAUtagWND@@K@Z.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01D5B50 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     xxxPointerWindowHitTest @ 0x1C01D6B30 (xxxPointerWindowHitTest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsThreadDesktopComposed(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 432);
  result = 0LL;
  if ( v1 )
    return *(_DWORD *)(**(_QWORD **)(v1 + 8) + 52LL) & 1;
  return result;
}
