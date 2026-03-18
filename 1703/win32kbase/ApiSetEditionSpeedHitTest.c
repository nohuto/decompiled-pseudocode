/*
 * XREFs of ApiSetEditionSpeedHitTest @ 0x1C013C7E8
 * Callers:
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012C0A0 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v10; // edx
  int v11; // edx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _BYTE v24[192]; // [rsp+40h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      14,
      94,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionSpeedHitTestSupported() >= 0 )
  {
    v12 = (_OWORD *)EditionSpeedHitTest(v24, 5LL, 0LL, a4, a5, 0LL, a7, a8);
    v11 = 128;
    v13 = v12[1];
    *a1 = *v12;
    v14 = v12[2];
    a1[1] = v13;
    v15 = v12[3];
    a1[2] = v14;
    v16 = v12[4];
    a1[3] = v15;
    v17 = v12[5];
    a1[4] = v16;
    v18 = v12[6];
    a1[5] = v17;
    a1[6] = v18;
    v19 = v12[7];
    v12 += 8;
    a1[7] = v19;
    v20 = v12[1];
    a1[8] = *v12;
    v21 = v12[2];
    a1[9] = v20;
    v22 = v12[3];
    a1[10] = v21;
    a1[11] = v22;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      14,
      95,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return a1;
}
