/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C013CD04
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C012371C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012C0A0 (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C012C518 (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  int v2; // edx
  int v3; // edx
  _OWORD *PTPShellTarget; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _BYTE v16[192]; // [rsp+30h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      14,
      202,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)GetPTPShellTarget(v16);
    v3 = 128;
    v5 = PTPShellTarget[1];
    *a1 = *PTPShellTarget;
    v6 = PTPShellTarget[2];
    a1[1] = v5;
    v7 = PTPShellTarget[3];
    a1[2] = v6;
    v8 = PTPShellTarget[4];
    a1[3] = v7;
    v9 = PTPShellTarget[5];
    a1[4] = v8;
    v10 = PTPShellTarget[6];
    a1[5] = v9;
    a1[6] = v10;
    v11 = PTPShellTarget[7];
    PTPShellTarget += 8;
    a1[7] = v11;
    v12 = PTPShellTarget[1];
    a1[8] = *PTPShellTarget;
    v13 = PTPShellTarget[2];
    a1[9] = v12;
    v14 = PTPShellTarget[3];
    a1[10] = v13;
    a1[11] = v14;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v3) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      14,
      203,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return a1;
}
