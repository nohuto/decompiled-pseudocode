/*
 * XREFs of ApiSetEditionPointerWindowHitTest @ 0x1C013BCA4
 * Callers:
 *     ?DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEAUtagQ@@HPEAHPEAUtagPOINT@@PEAVCInputDest@@@Z @ 0x1C011D738 (-DeterminePointerTargetWindow@CTouchProcessor@@AEAAXPEAUtagTHREADINFO@@PEAUCPointerInfoNode@@PEA.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00A2500 (memset.c)
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
  int v17; // edx
  int v18; // edx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm0
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  _BYTE v31[192]; // [rsp+70h] [rbp-D8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v17) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      14,
      100,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionPointerWindowHitTestSupported() >= 0 )
  {
    v19 = (_OWORD *)EditionPointerWindowHitTest(v31, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    v18 = 128;
    v20 = v19[1];
    *a1 = *v19;
    v21 = v19[2];
    a1[1] = v20;
    v22 = v19[3];
    a1[2] = v21;
    v23 = v19[4];
    a1[3] = v22;
    v24 = v19[5];
    a1[4] = v23;
    v25 = v19[6];
    a1[5] = v24;
    a1[6] = v25;
    v26 = v19[7];
    v19 += 8;
    a1[7] = v26;
    v27 = v19[1];
    a1[8] = *v19;
    v28 = v19[2];
    a1[9] = v27;
    v29 = v19[3];
    a1[10] = v28;
    a1[11] = v29;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v18) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      14,
      101,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return a1;
}
