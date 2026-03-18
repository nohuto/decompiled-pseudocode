/*
 * XREFs of Device_CheckIsSecureDevice @ 0x1C000CD48
 * Callers:
 *     Controller_CreateWdfDevice @ 0x1C0053594 (Controller_CreateWdfDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0005024 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall Device_CheckIsSecureDevice(__int64 a1)
{
  __int64 v2; // rdx
  bool v3; // di
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned __int16 v6; // r9
  char v7; // bl
  int v8; // [rsp+30h] [rbp-D0h]
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[3]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v11[9]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[3]; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD v13[16]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 336))(WdfDriverGlobals, v2);
  LODWORD(result) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01023
                                                                                               + 1976))(
                      WdfDriverGlobals,
                      0LL,
                      v4,
                      &v9);
  if ( (int)result >= 0 )
  {
    v10[2] = 0LL;
    v10[0] = 24LL;
    v10[1] = 3221225659LL;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 1992))(
      WdfDriverGlobals,
      v9,
      v10);
    memset(v13, 0, sizeof(v13));
    v13[0] = 65600;
    v13[2] = -1;
    v13[3] = -1;
    memset(v11, 0, sizeof(v11));
    v11[1] = v13;
    LOWORD(v11[0]) = 2331;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2016))(
      WdfDriverGlobals,
      v9,
      v11);
    v12[1] = 0LL;
    v12[0] = 0x200000010LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD *))(WdfFunctions_01023 + 2024))(
           WdfDriverGlobals,
           v9,
           v4,
           v12);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2032))(WdfDriverGlobals, v9);
    if ( v7 && (int)result >= 0 )
    {
      v3 = (v13[1] & 0x100000) != 0;
      goto LABEL_8;
    }
    v6 = 256;
  }
  else
  {
    v6 = 255;
  }
  v8 = result;
  result = WPP_RECORDER_SF_qd(
             *(_QWORD *)(a1 + 16),
             2u,
             4u,
             v6,
             (__int64)&WPP_7140d4b18c8734a335f2373eb7eb1be4_Traceguids,
             *(_QWORD *)(a1 + 32),
             v8);
LABEL_8:
  if ( v9 )
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01023 + 1664))(WdfDriverGlobals);
  *(_BYTE *)(a1 + 24) = v3;
  return result;
}
