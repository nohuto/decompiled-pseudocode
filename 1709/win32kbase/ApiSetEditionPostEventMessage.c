/*
 * XREFs of ApiSetEditionPostEventMessage @ 0x1C00905D8
 * Callers:
 *     ?UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0013B90 (-UpdateGlobalCursorOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAG.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C0015008 (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C0015168 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0125F60 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C001774C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0017790 (--0UserAtomicCheck@@QEAA@XZ.c)
 */

__int64 __fastcall ApiSetEditionPostEventMessage(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  _OWORD *v17; // rbx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  _BYTE v22[16]; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v23[12]; // [rsp+40h] [rbp-D8h] BYREF

  v6 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x2Au,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsEditionPostEventMessageSupported() >= 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
    v10 = a1[1];
    v23[0] = *a1;
    v11 = a1[2];
    v23[1] = v10;
    v12 = a1[3];
    v23[2] = v11;
    v13 = a1[4];
    v23[3] = v12;
    v14 = a1[5];
    v23[4] = v13;
    v15 = a1[6];
    v23[5] = v14;
    v23[6] = v15;
    v16 = a1[7];
    v17 = a1 + 8;
    v23[7] = v16;
    v18 = v17[1];
    v23[8] = *v17;
    v19 = v17[2];
    v23[9] = v18;
    v20 = v17[3];
    v23[10] = v19;
    v23[11] = v20;
    v6 = EditionPostEventMessage(v23, a2, a3, a4, a5);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0x2Bu,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return v6;
}
