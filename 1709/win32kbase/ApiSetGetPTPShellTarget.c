/*
 * XREFs of ApiSetGetPTPShellTarget @ 0x1C013C134
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C0122D6C (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C012B71C (-SetHitTestResult@CPTPProcessor@@AEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ShellEndpointExists@CPTPProcessor@@AEAA_NXZ @ 0x1C012BC3C (-ShellEndpointExists@CPTPProcessor@@AEAA_NXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

_OWORD *__fastcall ApiSetGetPTPShellTarget(_OWORD *a1)
{
  _OWORD *PTPShellTarget; // rax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _BYTE v14[192]; // [rsp+30h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xD6u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  if ( (int)IsGetPTPShellTargetSupported() >= 0 )
  {
    PTPShellTarget = (_OWORD *)GetPTPShellTarget(v14);
    v3 = PTPShellTarget[1];
    *a1 = *PTPShellTarget;
    v4 = PTPShellTarget[2];
    a1[1] = v3;
    v5 = PTPShellTarget[3];
    a1[2] = v4;
    v6 = PTPShellTarget[4];
    a1[3] = v5;
    v7 = PTPShellTarget[5];
    a1[4] = v6;
    v8 = PTPShellTarget[6];
    a1[5] = v7;
    a1[6] = v8;
    v9 = PTPShellTarget[7];
    PTPShellTarget += 8;
    a1[7] = v9;
    v10 = PTPShellTarget[1];
    a1[8] = *PTPShellTarget;
    v11 = PTPShellTarget[2];
    a1[9] = v10;
    v12 = PTPShellTarget[3];
    a1[10] = v11;
    a1[11] = v12;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xEu,
      0xD7u,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  return a1;
}
