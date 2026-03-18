/*
 * XREFs of RootHub_Create @ 0x1C005B2A0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E8FC (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall RootHub_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  __int64 v5; // rdx
  int v6; // esi
  __int64 *v7; // rbx
  _QWORD v9[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v10[8]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v11; // [rsp+148h] [rbp+40h] BYREF

  v11 = a1;
  memset(v9, 0, sizeof(v9));
  v9[0] = 0x1000000A0LL;
  v9[1] = RootHub_UcxEvtClearHubFeature;
  v9[2] = RootHub_UcxEvtClearPortFeature;
  v9[3] = RootHub_UcxEvtGetHubStatus;
  v9[4] = RootHub_UcxEvtGetPortStatus;
  v9[5] = RootHub_UcxEvtSetHubFeature;
  v9[6] = RootHub_UcxEvtSetPortFeature;
  v9[7] = RootHub_UcxEvtGetPortErrorCount;
  v9[9] = RootHub_UcxEvtInterruptTransfer;
  v9[10] = RootHub_UcxEvtGetInfo;
  v9[11] = RootHub_UcxEvtGet20PortInfo;
  v9[12] = RootHub_UcxEvtGet30PortInfo;
  memset(&v9[13], 0, 0x38uLL);
  v9[19] = off_1C004B098;
  LODWORD(v9[13]) = 56;
  v9[16] = 0x100000001LL;
  memset(v10, 0, 0x38uLL);
  v5 = *(_QWORD *)(a2 + 8);
  v10[6] = off_1C004B278;
  LODWORD(v10[0]) = 56;
  v10[3] = 0x100000001LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD *, __int64 *))qword_1C004C868)(
         *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
         v5,
         v9,
         v10,
         &v11);
  if ( v6 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      0xBu,
      0xBu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v6);
  }
  else
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v11,
                      off_1C004B278);
    *v7 = v11;
    v7[1] = a2;
    WPP_RECORDER_SF_qq(
      *(_QWORD *)(a2 + 72),
      4u,
      0xBu,
      0xAu,
      (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
      v11,
      v7);
    *a3 = v7;
  }
  return (unsigned int)v6;
}
