/*
 * XREFs of RIMDoOnPowerNotification @ 0x1C00A3B70
 * Callers:
 *     RIMOnPowerNotification @ 0x1C00A3A20 (RIMOnPowerNotification.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0008920 (RIMDeliverConfigRequest.c)
 *     RIMFindInputDeviceForConfig @ 0x1C0008DD8 (RIMFindInputDeviceForConfig.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C000D190 (RIMSendLatencyMgtDeviceRequest.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMDoOnPowerNotification(__int64 a1, __int64 a2, char a3)
{
  int v6; // edi
  int v7; // ebp
  __int64 v8; // rcx
  int v9; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 v14; // [rsp+28h] [rbp-40h]
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+80h] [rbp+18h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xAu,
    (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids);
  v6 = 0;
  v7 = -__CFSHR__(*(_DWORD *)(a2 + 200), 8);
  v8 = 0LL;
  if ( __CFSHR__(*(_DWORD *)(a2 + 200), 8) )
    v8 = a2;
  v17 = v8;
  if ( (a3 & 1) == 0
    || *(_BYTE *)(a2 + 48) != 3
    || (v11 = *(_QWORD *)(a2 + 456), *(_WORD *)(v11 + 42) != 13)
    || *(_WORD *)(v11 + 40) != 14 )
  {
LABEL_5:
    if ( !v7 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v16 = 0;
  v15 = 0;
  v12 = *(_DWORD *)(a2 + 184);
  if ( (v12 & 0x400) != 0 )
  {
    v6 = 2;
  }
  else if ( (v12 & 0x800) != 0 )
  {
    v6 = 3;
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0xBu,
      (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids);
  }
  v6 = RIMDeliverConfigRequest(a2, *(_QWORD *)(a2 + 456), 82, v6);
  if ( v6 >= 0 && (a3 & 4) == 0 )
  {
    v13 = RIMDeliverConfigRequest(a2, *(_QWORD *)(a2 + 456), 87, 0);
    v6 = v13;
    if ( v13 < 0 )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x12u,
        0xCu,
        (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids,
        v13);
  }
  if ( !(unsigned int)RIMFindInputDeviceForConfig(*(_QWORD *)(a2 + 456), a1, a2, &v16, &v15, &v17) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0xDu,
      (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids);
    v8 = v17;
    goto LABEL_5;
  }
  v8 = v17;
LABEL_6:
  v9 = RIMSendLatencyMgtDeviceRequest(v8, *(_QWORD *)(v8 + 456), !(a3 & 1));
  if ( v9 < 0 )
  {
    LODWORD(v14) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x12u,
      0xEu,
      (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids,
      v14);
  }
LABEL_8:
  LODWORD(v14) = v6;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0xFu,
    (__int64)&WPP_16f0fec523df345c469f10821d24630b_Traceguids,
    v14);
  return (unsigned int)v6;
}
