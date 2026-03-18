/*
 * XREFs of HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete @ 0x1C00218C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019D4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHub30PortsInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 < 0 )
  {
    v8 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2512),
      2u,
      3u,
      0x2Eu,
      (__int64)&WPP_ac19941ca8303ac9317dca70d7291dce_Traceguids,
      v8);
  }
  HUBSM_AddEvent(a4 + 1256, ((v4 >> 31) & 0xFFFFFFFC) + 2042);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
