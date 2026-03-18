/*
 * XREFs of ApiSetEditionPostEventMessage @ 0x1C0089DE8
 * Callers:
 *     ?MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0045C28 (-MouseMove_UpdateCursor@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE.c)
 *     ?UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z @ 0x1C00461DC (-UpdateForegroundForInput@CMouseProcessor@@AEAA_NPEAVCInputDest@@AEBVCButtonEvent@1@_J@Z.c)
 *     ?HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA?AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@Z @ 0x1C00462F8 (-HandleCapture_BreakHasMouseOwner@CMouseProcessor@@AEAA-AVCInputDest@@AEBV2@AEBVCButtonEvent@1@@.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C0126980 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00420B4 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0042180 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionPostEventMessage(_OWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // edi
  unsigned int v8; // r14d
  int v10; // edx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  _OWORD *v18; // rbx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  _BYTE v23[16]; // [rsp+30h] [rbp-E8h] BYREF
  _OWORD v24[12]; // [rsp+40h] [rbp-D8h] BYREF

  v6 = 0;
  v8 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      38,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionPostEventMessageSupported() >= 0 )
  {
    LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation + 1;
    v23[0] = 0;
    UserAtomicCheck::RegisterStack((UserAtomicCheck *)v23);
    v11 = a1[1];
    v24[0] = *a1;
    v12 = a1[2];
    v24[1] = v11;
    v13 = a1[3];
    v24[2] = v12;
    v14 = a1[4];
    v24[3] = v13;
    v15 = a1[5];
    v24[4] = v14;
    v16 = a1[6];
    v24[5] = v15;
    v24[6] = v16;
    v17 = a1[7];
    v18 = a1 + 8;
    v24[7] = v17;
    v19 = v18[1];
    v24[8] = *v18;
    v20 = v18[2];
    v24[9] = v19;
    v21 = v18[3];
    v24[10] = v20;
    v24[11] = v21;
    v6 = EditionPostEventMessage(v24, v8, a3, a4, a5);
    if ( !v23[0] )
    {
      LODWORD(gdwInAtomicOperation) = gdwInAtomicOperation - 1;
      UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v23);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v10) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      14,
      39,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return v6;
}
