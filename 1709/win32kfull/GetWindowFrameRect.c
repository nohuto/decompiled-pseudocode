/*
 * XREFs of GetWindowFrameRect @ 0x1C01D5DE8
 * Callers:
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C005E39C (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00638A0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C01113C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     GetDPITransformationMonitor @ 0x1C01C3AC0 (GetDPITransformationMonitor.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     <none>
 */

void __fastcall GetWindowFrameRect(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rcx

  v4 = *(_QWORD *)(a1 + 224);
  if ( !v4 || !(unsigned int)GreGetRgnBox(v4, a2) )
    *a2 = *(_OWORD *)(a1 + 128);
}
