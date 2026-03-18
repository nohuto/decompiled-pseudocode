/*
 * XREFs of Register_Create @ 0x1C005A1EC
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0056AA0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     Controller_IsSecureDevice @ 0x1C0008AAC (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     Register_CreateSecureObject @ 0x1C005A33C (Register_CreateSecureObject.c)
 */

__int64 __fastcall Register_Create(__int64 a1, __int64 **a2)
{
  int v4; // eax
  int SecureObject; // ebx
  __int64 *v6; // rdi
  _QWORD v8[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+80h] [rbp+8h] BYREF

  memset(v8, 0, 0x38uLL);
  v8[3] = 0x100000001LL;
  v8[6] = off_1C004B188;
  v8[4] = *(_QWORD *)(a1 + 8);
  LODWORD(v8[0]) = 56;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         v8,
         &v9);
  SecureObject = v4;
  if ( v4 >= 0 )
  {
    v6 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                      WdfDriverGlobals,
                      v9,
                      off_1C004B188);
    v6[1] = a1;
    *v6 = v9;
    if ( !Controller_IsSecureDevice(a1) || (SecureObject = Register_CreateSecureObject(v6), SecureObject >= 0) )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a1 + 72),
        4u,
        6u,
        0xBu,
        (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids,
        v9);
      *a2 = v6;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 6u, 0xAu, (__int64)&WPP_aa9a6dc92bdc315c6241291f5ec849eb_Traceguids, v4);
  }
  return (unsigned int)SecureObject;
}
