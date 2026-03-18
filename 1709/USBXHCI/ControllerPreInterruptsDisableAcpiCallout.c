/*
 * XREFs of ControllerPreInterruptsDisableAcpiCallout @ 0x1C00069C0
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C00060A0 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_qd @ 0x1C0005F70 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_q @ 0x1C0015FA8 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ControllerPreInterruptsDisableAcpiCallout(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  int v7; // edx
  int v8; // r9d
  __int64 v9; // [rsp+38h] [rbp-29h]
  __int64 v10; // [rsp+58h] [rbp-9h] BYREF
  _QWORD v11[3]; // [rsp+60h] [rbp-1h] BYREF
  _QWORD v12[3]; // [rsp+78h] [rbp+17h] BYREF
  _BYTE v13[8]; // [rsp+90h] [rbp+2Fh] BYREF
  _QWORD v14[2]; // [rsp+98h] [rbp+37h] BYREF
  int v15; // [rsp+A8h] [rbp+47h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004E408);
  v4 = *(_QWORD *)(result + 8);
  if ( (*(_QWORD *)(v4 + 272) & 0x40000000000000LL) != 0 )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(*(_QWORD *)(v4 + 72), v3, 4, 76, (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids, a1);
    v10 = 0x494D525042696541LL;
    v12[0] = 1LL;
    v12[1] = &v10;
    v14[1] = 0LL;
    v15 = 0;
    v11[1] = v14;
    v11[0] = 1LL;
    v12[2] = 8LL;
    v14[0] = 1114596673LL;
    v11[2] = 20LL;
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, a1);
    v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, _QWORD *, _QWORD, _BYTE *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v5,
           0LL,
           3325956LL,
           v12,
           v11,
           0LL,
           v13);
    if ( v6 >= 0 )
    {
      v8 = 78;
      if ( LODWORD(v14[0]) == 1114596673 )
        v8 = 79;
      LOBYTE(v7) = 4;
      return WPP_RECORDER_SF_q(
               *(_QWORD *)(v4 + 72),
               v7,
               4,
               v8,
               (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
               a1);
    }
    else
    {
      LODWORD(v9) = v6;
      return WPP_RECORDER_SF_qd(
               *(_QWORD *)(v4 + 72),
               4u,
               4u,
               0x4Du,
               (__int64)&WPP_4b19db8c36bc33e5c568879992fcbff3_Traceguids,
               a1,
               v9);
    }
  }
  return result;
}
