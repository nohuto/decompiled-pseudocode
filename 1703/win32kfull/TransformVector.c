/*
 * XREFs of TransformVector @ 0x1C01D1D30
 * Callers:
 *     DetermineMouseInputTarget @ 0x1C005F7F4 (DetermineMouseInputTarget.c)
 *     GetNewMonitor @ 0x1C0060BF0 (GetNewMonitor.c)
 *     EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C01064C0 (EditionGetLogicalPointForMouseCaptureButtonEvent.c)
 *     EditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x1C0106540 (EditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     ?UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z @ 0x1C019DB68 (-UpdateMouseButtonTarget@@YAXPEAUtagWND@@0UtagPOINT@@PEAU2@PEA_J@Z.c)
 *     DetectNewMonitor @ 0x1C01BFD64 (DetectNewMonitor.c)
 *     ?ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z @ 0x1C01CEB3C (-ApplyWindowTransform@@YAXPEBU_D3DMATRIX@@PEAUtagPOINT@@PEAUtagTOUCHTARGETINGCONTACT@@H@Z.c)
 *     ?TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z @ 0x1C01CFB54 (-TransformRect@@YAXPEBU_D3DMATRIX@@PEAUtagRECT@@H@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01F33EC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C01C01C0 (FixedPointSubPixel.c)
 */

__int64 __fastcall TransformVector(float *a1, int *a2, int *a3, int *a4, int a5)
{
  float *v5; // r10
  float v6; // xmm1_4
  float v7; // xmm2_4
  __int64 result; // rax

  v5 = a1;
  if ( a5 )
  {
    v6 = 0.0;
    if ( a4 )
      v7 = FixedPointSubPixel(*a4);
    else
      v7 = 0.0;
    *a2 = (int)(float)((float)((float)((float)*a2 + v7) - v5[12]) / *v5);
    if ( a4 )
      v6 = FixedPointSubPixel(a4[1]);
    result = (unsigned int)(int)(float)((float)((float)((float)*a3 + v6) - v5[13]) / v5[5]);
  }
  else
  {
    *a2 = (int)(float)((float)((float)*a2 * *a1) + a1[12]);
    result = (unsigned int)(int)(float)((float)((float)*a3 * a1[5]) + a1[13]);
  }
  *a3 = result;
  return result;
}
