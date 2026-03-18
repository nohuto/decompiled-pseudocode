/*
 * XREFs of RootHub_UcxEvtGetHubStatus @ 0x1C001C6B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C001F320 (WPP_RECORDER_SF_DDDDDDDD.c)
 */

__int64 __fastcall RootHub_UcxEvtGetHubStatus(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rbp
  int v5; // eax
  _QWORD v7[5]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B278);
  memset(v7, 0, sizeof(v7));
  LOWORD(v7[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01023 + 2128))(WdfDriverGlobals, a2, v7);
  v4 = v7[1];
  if ( *(_BYTE *)(v7[1] + 128LL) != 0xA0
    || *(_BYTE *)(v7[1] + 129LL)
    || *(_WORD *)(v7[1] + 130LL)
    || *(_WORD *)(v7[1] + 132LL)
    || *(_WORD *)(v7[1] + 134LL) != 4 )
  {
    WPP_RECORDER_SF_DDDDDDDD(
      *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
      *(unsigned __int8 *)(v7[1] + 134LL),
      *(unsigned __int8 *)(v7[1] + 133LL),
      104);
    v5 = -1073741820;
  }
  else
  {
    **(_DWORD **)(v7[1] + 40LL) = 0;
    v5 = 0;
  }
  *(_DWORD *)(v4 + 4) = v5;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2104))(WdfDriverGlobals, a2);
}
