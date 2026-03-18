/*
 * XREFs of DeviceSlot_Create @ 0x1C00575EC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     XilDeviceSlot_Create @ 0x1C000F278 (XilDeviceSlot_Create.c)
 */

__int64 __fastcall DeviceSlot_Create(__int64 a1, __int64 a2, __int64 **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 *v7; // rdi
  int v8; // eax
  __int64 v9; // r10
  _QWORD v11[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+80h] [rbp+8h] BYREF

  v12 = a1;
  memset(v11, 0, 0x38uLL);
  v11[3] = 0x100000001LL;
  v11[6] = off_1C004B138;
  v11[4] = *(_QWORD *)(a2 + 8);
  LODWORD(v11[0]) = 56;
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         v11,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v12,
                      off_1C004B138);
    *v7 = v12;
    v7[1] = a2;
    v8 = XilDeviceSlot_Create((__int64)v7);
    v9 = *(_QWORD *)(a2 + 72);
    v6 = v8;
    if ( v8 >= 0 )
    {
      WPP_RECORDER_SF_q(v9, 4u, 0xAu, 0xCu, (__int64)&WPP_99d7b7462b58356022f2cdf06f58d24e_Traceguids, v12);
      *a3 = v7;
    }
    else
    {
      WPP_RECORDER_SF_d(v9, 2u, 0xAu, 0xBu, (__int64)&WPP_99d7b7462b58356022f2cdf06f58d24e_Traceguids, v8);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 72),
      2u,
      0xAu,
      0xAu,
      (__int64)&WPP_99d7b7462b58356022f2cdf06f58d24e_Traceguids,
      v5);
  }
  return v6;
}
