/*
 * XREFs of ApiSetEditionPointerSpeedHitTest @ 0x1C013BB58
 * Callers:
 *     ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0122124 (-GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA?AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAUCInputPointerNode@@IV2@PEAGPEAIK@Z @ 0x1C0128B84 (-UpdateInputCaptureAndGetTarget@CTouchProcessor@@QEAA-AVCInputDest@@PEBUtagPOINTEREVENTINT@@PEAU.c)
 *     ?HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z @ 0x1C012B34C (-HitTestPrimaryContact@CPTPProcessor@@AEAAXPEBUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionPointerSpeedHitTest(_OWORD *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v9; // edx
  int v10; // edx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _BYTE v23[192]; // [rsp+30h] [rbp-D8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      14,
      92,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionPointerSpeedHitTestSupported() >= 0 )
  {
    v11 = (_OWORD *)EditionPointerSpeedHitTest(v23, a2, a3, a4, a5);
    v10 = 128;
    v12 = v11[1];
    *a1 = *v11;
    v13 = v11[2];
    a1[1] = v12;
    v14 = v11[3];
    a1[2] = v13;
    v15 = v11[4];
    a1[3] = v14;
    v16 = v11[5];
    a1[4] = v15;
    v17 = v11[6];
    a1[5] = v16;
    a1[6] = v17;
    v18 = v11[7];
    v11 += 8;
    a1[7] = v18;
    v19 = v11[1];
    a1[8] = *v11;
    v20 = v11[2];
    a1[9] = v19;
    v21 = v11[3];
    a1[10] = v20;
    a1[11] = v21;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      14,
      93,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return a1;
}
