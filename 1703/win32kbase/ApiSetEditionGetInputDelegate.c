/*
 * XREFs of ApiSetEditionGetInputDelegate @ 0x1C013ACD4
 * Callers:
 *     ?EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPointerInputFrame@@_K@Z @ 0x1C011E2A0 (-EndQFrameNodeDeferment@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@PEAUCPointerInfoNode@@PEAUCPoi.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionGetInputDelegate(_OWORD *a1)
{
  __int64 InputDelegate; // rdi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  _OWORD *v10; // rbx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _OWORD v15[12]; // [rsp+30h] [rbp-C8h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      110,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  InputDelegate = 0LL;
  if ( (int)IsEditionGetInputDelegateSupported() >= 0 )
  {
    v3 = a1[1];
    v15[0] = *a1;
    v4 = a1[2];
    v15[1] = v3;
    v5 = a1[3];
    v15[2] = v4;
    v6 = a1[4];
    v15[3] = v5;
    v7 = a1[5];
    v15[4] = v6;
    v8 = a1[6];
    v15[5] = v7;
    v15[6] = v8;
    v9 = a1[7];
    v10 = a1 + 8;
    v15[7] = v9;
    v11 = v10[1];
    v15[8] = *v10;
    v12 = v10[2];
    v15[9] = v11;
    v13 = v10[3];
    v15[10] = v12;
    v15[11] = v13;
    InputDelegate = EditionGetInputDelegate(v15);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      111,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return InputDelegate;
}
