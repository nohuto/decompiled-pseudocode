/*
 * XREFs of Register_Create @ 0x1C005CE90
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C0059AB0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     Controller_IsSecureDevice @ 0x1C0011780 (Controller_IsSecureDevice.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 *     Register_CreateSecureObject @ 0x1C005CFE0 (Register_CreateSecureObject.c)
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
  v8[6] = off_1C004E188;
  v8[4] = *(_QWORD *)(a1 + 8);
  LODWORD(v8[0]) = 56;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01015 + 1656))(
         WdfDriverGlobals,
         v8,
         &v9);
  SecureObject = v4;
  if ( v4 >= 0 )
  {
    v6 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      v9,
                      off_1C004E188);
    v6[1] = a1;
    *v6 = v9;
    if ( !Controller_IsSecureDevice(a1) || (SecureObject = Register_CreateSecureObject(v6), SecureObject >= 0) )
    {
      WPP_RECORDER_SF_q(
        *(_QWORD *)(a1 + 72),
        4u,
        6u,
        0xBu,
        (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids,
        v9);
      *a2 = v6;
    }
  }
  else
  {
    WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 72), 2u, 6u, 0xAu, (__int64)&WPP_a32df80a94123ec82d8da458aa91e220_Traceguids, v4);
  }
  return (unsigned int)SecureObject;
}
