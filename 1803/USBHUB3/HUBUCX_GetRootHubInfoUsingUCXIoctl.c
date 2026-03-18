/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctl @ 0x1C0021294
 * Callers:
 *     HUBHSM_GettingRootHubInfo @ 0x1C00089D0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     __security_check_cookie @ 0x1C00396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0039F00 (memset.c)
 */

void __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctl(__int64 a1)
{
  __int64 v2; // r14
  int v3; // eax
  int v4; // edi
  unsigned __int16 v5; // r9
  __int64 v6; // [rsp+30h] [rbp-49h] BYREF
  _QWORD v7[7]; // [rsp+38h] [rbp-41h] BYREF
  _QWORD v8[9]; // [rsp+70h] [rbp-9h] BYREF

  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16));
  memset(v7, 0, sizeof(v7));
  v7[4] = *(_QWORD *)(a1 + 16);
  LODWORD(v7[0]) = 56;
  v7[3] = 0x100000001LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         v7,
         v2,
         &v6);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *(_DWORD *)(a1 + 104) = 24;
    memset(v8, 0, sizeof(v8));
    LOBYTE(v8[0]) = 15;
    LODWORD(v8[3]) = 4788235;
    v8[1] = a1 + 104;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD *))(WdfFunctions_01015 + 2016))(
      WdfDriverGlobals,
      v6,
      v8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64))(WdfFunctions_01015 + 2080))(
      WdfDriverGlobals,
      v6,
      HUBUCX_GetRootHubInfoUsingUCXIoctlComplete,
      a1);
    if ( (*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, _QWORD))(WdfFunctions_01015 + 2024))(
           WdfDriverGlobals,
           v6,
           v2,
           0LL) )
    {
      goto LABEL_6;
    }
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v6);
    v4 = v3;
    v5 = 39;
  }
  else
  {
    v5 = 38;
  }
  WPP_RECORDER_SF_d(*(_QWORD *)(a1 + 2512), 2u, 3u, v5, (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids, v3);
LABEL_6:
  if ( v4 < 0 )
  {
    if ( v6 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    HUBSM_AddEvent(a1 + 1256, 2038);
  }
}
