/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1C0033820
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     Controller_IsControllerAccessible @ 0x1C0008A48 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     UsbDevice_SetAddress @ 0x1C0032E78 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00354D8 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h]
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v12[1] + 16LL),
         off_1C004B2F0);
  v4 = *(_QWORD *)v3;
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v4,
    12,
    26,
    (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
    *(_BYTE *)(v3 + 135),
    *(_QWORD *)v3);
  v5 = *(_QWORD *)(v3 + 8);
  if ( *(_BYTE *)(v3 + 134) )
  {
    if ( Controller_IsControllerAccessible(v5) )
    {
      *(_QWORD *)(v3 + 424) = a2;
      *(_BYTE *)(v3 + 432) = 0;
      result = UsbDevice_SetAddress(v3, 0);
      v7 = result;
      if ( (int)result >= 0 )
        return result;
      LODWORD(v11) = result;
      LODWORD(v10) = *(unsigned __int8 *)(v3 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        3u,
        0xCu,
        0x1Cu,
        (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
        v10,
        v11);
    }
    else
    {
      v7 = -1073741810;
    }
  }
  else
  {
    v6 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v5 + 72),
      v6,
      12,
      27,
      (__int64)&WPP_1950dd83281a37607d7206f66e319380_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    v7 = -1073741823;
  }
  v9 = WdfFunctions_01023;
  *(_QWORD *)(v3 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v9 + 2104))(WdfDriverGlobals, a2, v7);
}
