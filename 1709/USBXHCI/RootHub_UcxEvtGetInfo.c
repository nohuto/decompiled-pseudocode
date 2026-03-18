/*
 * XREFs of RootHub_UcxEvtGetInfo @ 0x1C0020F90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0004510 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0008A40 (memset.c)
 */

__int64 __fastcall RootHub_UcxEvtGetInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // r8
  unsigned int v5; // edi
  int v6; // edx
  int v7; // ecx
  int v9; // [rsp+28h] [rbp-50h]
  int v10; // [rsp+28h] [rbp-50h]
  int v11; // [rsp+30h] [rbp-48h]
  _QWORD v12[5]; // [rsp+40h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E278);
  memset(v12, 0, sizeof(v12));
  LOWORD(v12[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2128))(
    WdfDriverGlobals,
    a2,
    v12);
  v4 = (_WORD *)v12[1];
  if ( *(_DWORD *)v12[1] >= 0x10u )
  {
    v5 = 0;
    *(_DWORD *)(v12[1] + 4LL) = 0;
    v6 = *(unsigned __int16 *)(v3 + 20);
    v4[4] = v6;
    v7 = *(unsigned __int16 *)(v3 + 22);
    v4[5] = v7;
    v4[6] = *(_WORD *)(v3 + 24);
    v4[7] = *(_WORD *)(v3 + 26);
    v11 = v7;
    v10 = v6;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      4u,
      0xBu,
      0xBEu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v10,
      v11);
  }
  else
  {
    v9 = *(_DWORD *)v12[1];
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      2u,
      0xBu,
      0xBDu,
      (__int64)&WPP_f8b3066c4726396794ec16394522a5c0_Traceguids,
      v9);
    v5 = -1073741811;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           v5);
}
