/*
 * XREFs of IoControl_WdfEvtIoDeviceControl @ 0x1C0018560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0018720 (WPP_RECORDER_SF_qD.c)
 */

PDEVICE_OBJECT __fastcall IoControl_WdfEvtIoDeviceControl(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // edx
  PDEVICE_OBJECT result; // rax
  char v13; // al
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+28h] [rbp-30h]

  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B160);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1256))(WdfDriverGlobals, a1);
  if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, int))UcxFunctions)(
                          *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.32,
                          v10,
                          a2,
                          a3,
                          a4,
                          a5) )
  {
    result = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v16) = a5;
      return (PDEVICE_OBJECT)WPP_RECORDER_SF_d(
                               *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
                               5u,
                               5u,
                               0xCu,
                               (__int64)&WPP_0159f860769e349e0b2e292108cfd8a0_Traceguids,
                               v16);
    }
  }
  else
  {
    WPP_RECORDER_SF_qD(
      *(_QWORD *)(*(_QWORD *)(v9 + 8) + 72LL),
      v11,
      5,
      13,
      (__int64)&WPP_0159f860769e349e0b2e292108cfd8a0_Traceguids,
      a2,
      a5);
    v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2240))(WdfDriverGlobals, a2);
    v14 = *(_QWORD *)(v9 + 8);
    if ( v13 == 1 )
    {
      LODWORD(v17) = a5;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v14 + 72),
        2u,
        5u,
        0xFu,
        (__int64)&WPP_0159f860769e349e0b2e292108cfd8a0_Traceguids,
        v17);
      v15 = 3221225488LL;
    }
    else
    {
      LODWORD(v17) = v13;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v14 + 72),
        3u,
        5u,
        0xEu,
        (__int64)&WPP_0159f860769e349e0b2e292108cfd8a0_Traceguids,
        v17);
      v15 = 3221225485LL;
    }
    return (PDEVICE_OBJECT)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
                             WdfDriverGlobals,
                             a2,
                             v15);
  }
  return result;
}
