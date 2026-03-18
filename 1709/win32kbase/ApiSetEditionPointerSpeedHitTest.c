/*
 * XREFs of ApiSetEditionPointerSpeedHitTest @ 0x1C013ACC8
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C01216F4 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C01283B8 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012A9EC (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerSpeedHitTest(_OWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  _BYTE v21[192]; // [rsp+30h] [rbp-D8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x62u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionPointerSpeedHitTestSupported() >= 0 )
  {
    v9 = (_OWORD *)EditionPointerSpeedHitTest(v21, a2, a3, a4, a5);
    v10 = v9[1];
    *a1 = *v9;
    v11 = v9[2];
    a1[1] = v10;
    v12 = v9[3];
    a1[2] = v11;
    v13 = v9[4];
    a1[3] = v12;
    v14 = v9[5];
    a1[4] = v13;
    v15 = v9[6];
    a1[5] = v14;
    a1[6] = v15;
    v16 = v9[7];
    v9 += 8;
    a1[7] = v16;
    v17 = v9[1];
    a1[8] = *v9;
    v18 = v9[2];
    a1[9] = v17;
    v19 = v9[3];
    a1[10] = v18;
    a1[11] = v19;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x63u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return a1;
}
