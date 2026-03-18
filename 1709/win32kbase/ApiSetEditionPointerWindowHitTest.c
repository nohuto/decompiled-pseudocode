/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x1C013AE14
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011C588 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerWindowHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  _BYTE v29[192]; // [rsp+70h] [rbp-D8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x68u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionPointerWindowHitTestSupported() >= 0 )
  {
    v17 = (_OWORD *)EditionPointerWindowHitTest(v29, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v18 = v17[1];
    *a1 = *v17;
    v19 = v17[2];
    a1[1] = v18;
    v20 = v17[3];
    a1[2] = v19;
    v21 = v17[4];
    a1[3] = v20;
    v22 = v17[5];
    a1[4] = v21;
    v23 = v17[6];
    a1[5] = v22;
    a1[6] = v23;
    v24 = v17[7];
    v17 += 8;
    a1[7] = v24;
    v25 = v17[1];
    a1[8] = *v17;
    v26 = v17[2];
    a1[9] = v25;
    v27 = v17[3];
    a1[10] = v26;
    a1[11] = v27;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x69u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return a1;
}
