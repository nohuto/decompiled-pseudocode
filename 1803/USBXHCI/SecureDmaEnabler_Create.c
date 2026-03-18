/*
 * XREFs of SecureDmaEnabler_Create @ 0x1C005D39C
 * Callers:
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0057010 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     SecureDmaEnabler_CreateSecureObject @ 0x1C005D4F4 (SecureDmaEnabler_CreateSecureObject.c)
 */

__int64 __fastcall SecureDmaEnabler_Create(__int64 a1, __int64 **a2)
{
  int v4; // eax
  int SecureObject; // ebx
  __int64 *v6; // rdi
  _QWORD v8[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+90h] [rbp+20h] BYREF

  v9 = 0LL;
  memset(v8, 0, 0x38uLL);
  v8[3] = 0x100000001LL;
  v8[6] = off_1C004B390;
  v8[4] = *(_QWORD *)(a1 + 8);
  LODWORD(v8[0]) = 56;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64 *))(WdfFunctions_01023 + 1656))(
         WdfDriverGlobals,
         v8,
         &v9);
  SecureObject = v4;
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 72),
      2u,
      0x12u,
      0xAu,
      (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
      v4);
    goto LABEL_5;
  }
  v6 = (__int64 *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                    WdfDriverGlobals,
                    v9,
                    off_1C004B390);
  *v6 = v9;
  v6[1] = a1;
  SecureObject = SecureDmaEnabler_CreateSecureObject(v6);
  if ( SecureObject >= 0 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(a1 + 72),
      4u,
      0x12u,
      0xBu,
      (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
      v9);
    *a2 = v6;
LABEL_5:
    if ( SecureObject >= 0 )
      return (unsigned int)SecureObject;
  }
  if ( v9 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  return (unsigned int)SecureObject;
}
