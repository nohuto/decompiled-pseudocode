/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x1C0006D14
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000C6E0 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0004F28 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  unsigned __int16 v7; // r9
  __int64 v8; // [rsp+38h] [rbp-29h]
  __int64 v9; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v10[3]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v11[3]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v12[8]; // [rsp+90h] [rbp+2Fh] BYREF
  _QWORD v13[2]; // [rsp+98h] [rbp+37h] BYREF
  int v14; // [rsp+A8h] [rbp+47h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004B408);
  v3 = *(_QWORD *)(result + 8);
  if ( (*(_QWORD *)(v3 + 272) & 0x40000000000000LL) != 0 )
  {
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v3 + 72),
      4u,
      4u,
      0x4Cu,
      (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
      a1);
    v9 = 0x494D525042696541LL;
    v11[0] = 1LL;
    v11[1] = &v9;
    v13[1] = 0LL;
    v14 = 0;
    v10[1] = v13;
    v10[0] = 1LL;
    v11[2] = 8LL;
    v13[0] = 1114596673LL;
    v10[2] = 20LL;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, a1);
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01023 + 1488))(
           WdfDriverGlobals,
           v4,
           0LL,
           3325956LL,
           v11,
           v10,
           0LL,
           v12);
    v6 = *(_QWORD *)(v3 + 72);
    if ( v5 >= 0 )
    {
      v7 = 78;
      if ( LODWORD(v13[0]) == 1114596673 )
        v7 = 79;
      return WPP_RECORDER_SF_q(v6, 4u, 4u, v7, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a1);
    }
    else
    {
      LODWORD(v8) = v5;
      return WPP_RECORDER_SF_qd(v6, 4u, 4u, 0x4Du, (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids, a1, v8);
    }
  }
  return result;
}
