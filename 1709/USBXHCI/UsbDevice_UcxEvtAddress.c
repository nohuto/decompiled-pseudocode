/*
 * XREFs of UsbDevice_UcxEvtAddress @ 0x1C0035C70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     Controller_IsControllerAccessible @ 0x1C0005F34 (Controller_IsControllerAccessible.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     UsbDevice_SetAddress @ 0x1C00352C0 (UsbDevice_SetAddress.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00378F8 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbDevice_UcxEvtAddress(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  int v5; // edx
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-48h]
  _QWORD v11[5]; // [rsp+40h] [rbp-38h] BYREF

  memset(v11, 0, sizeof(v11));
  LOWORD(v11[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(v11[1] + 16LL),
         off_1C004E2F0);
  v4 = *(_QWORD *)v3;
  LOBYTE(v4) = 4;
  WPP_RECORDER_SF_dq(
    *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
    v4,
    12,
    26,
    (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
    *(_BYTE *)(v3 + 135),
    *(_QWORD *)v3);
  if ( *(_BYTE *)(v3 + 134) )
  {
    if ( Controller_IsControllerAccessible(*(_QWORD *)(v3 + 8)) )
    {
      *(_QWORD *)(v3 + 424) = a2;
      *(_BYTE *)(v3 + 432) = 0;
      result = UsbDevice_SetAddress(v3, 0);
      v6 = result;
      if ( (int)result >= 0 )
        return result;
      LODWORD(v10) = result;
      LODWORD(v9) = *(unsigned __int8 *)(v3 + 135);
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
        3u,
        0xCu,
        0x1Cu,
        (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
        v9,
        v10);
    }
    else
    {
      v6 = -1073741810;
    }
  }
  else
  {
    v5 = *(unsigned __int8 *)(v3 + 135);
    LOBYTE(v5) = 3;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      v5,
      12,
      27,
      (__int64)&WPP_a5fd15ff1a8637a5810b72c9190e663e_Traceguids,
      *(_BYTE *)(v3 + 135),
      *(_QWORD *)v3);
    v6 = -1073741823;
  }
  v8 = WdfFunctions_01015;
  *(_QWORD *)(v3 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(v8 + 2104))(WdfDriverGlobals, a2, v6);
}
