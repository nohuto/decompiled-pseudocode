/*
 * XREFs of DeviceSlot_Create @ 0x1C005A574
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     XilDeviceSlot_Create @ 0x1C00166D4 (XilDeviceSlot_Create.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  __int64 *v8; // rsi
  _QWORD v10[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+80h] [rbp+8h] BYREF

  v11 = a1;
  memset(v10, 0, 0x38uLL);
  v10[3] = 0x100000001LL;
  v10[6] = off_1C004E138;
  v10[4] = *(_QWORD *)(a2 + 8);
  LODWORD(v10[0]) = 56;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v10,
         &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v11,
                      off_1C004E138);
    *v8 = v11;
    v8[1] = a2;
    v5 = XilDeviceSlot_Create((__int64)v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a2 + 72),
        4u,
        0xAu,
        0xCu,
        (__int64)&WPP_66090ce59e283cef293d375cad1686b0_Traceguids,
        v11);
      *a3 = v8;
      return v6;
    }
    v7 = 11;
  }
  else
  {
    v7 = 10;
  }
  WPP_RECORDER_SF_d(*(_QWORD *)(a2 + 72), 2u, 0xAu, v7, (__int64)&WPP_66090ce59e283cef293d375cad1686b0_Traceguids, v5);
  return v6;
}
