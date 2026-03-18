/*
 * XREFs of ApiSetEditionSpeedHitTest @ 0x1C013BAA0
 * Callers:
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012B71C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
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
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _BYTE v22[192]; // [rsp+40h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x64u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionSpeedHitTestSupported() >= 0 )
  {
    v10 = (_OWORD *)EditionSpeedHitTest(v22, 5LL, 0LL, a4, a5, 0LL, a7, a8);
    v11 = v10[1];
    *a1 = *v10;
    v12 = v10[2];
    a1[1] = v11;
    v13 = v10[3];
    a1[2] = v12;
    v14 = v10[4];
    a1[3] = v13;
    v15 = v10[5];
    a1[4] = v14;
    v16 = v10[6];
    a1[5] = v15;
    a1[6] = v16;
    v17 = v10[7];
    v10 += 8;
    a1[7] = v17;
    v18 = v10[1];
    a1[8] = *v10;
    v19 = v10[2];
    a1[9] = v18;
    v20 = v10[3];
    a1[10] = v19;
    a1[11] = v20;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x65u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return a1;
}
