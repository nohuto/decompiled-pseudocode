/*
 * XREFs of HUBUCX_GetRootHubInfoUsingUCXIoctlComplete @ 0x1C00206D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00019E4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetRootHubInfoUsingUCXIoctlComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = *(_DWORD *)(a3 + 8);
  if ( v4 >= 0 )
  {
    *(_WORD *)(a4 + 144) = *(_WORD *)(a4 + 112);
    *(_WORD *)(a4 + 150) = *(_WORD *)(a4 + 114);
    *(_QWORD *)(a4 + 1096) = *(_QWORD *)(a4 + 120);
    *(_WORD *)(a4 + 2466) = *(_WORD *)(a4 + 116);
    *(_WORD *)(a4 + 2468) = *(_WORD *)(a4 + 118);
  }
  else
  {
    v8 = *(_DWORD *)(a3 + 8);
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a4 + 2512),
      2u,
      3u,
      0x25u,
      (__int64)&WPP_3d53ed487f413aabe4c3ad9959a4b253_Traceguids,
      v8);
  }
  HUBSM_AddEvent(a4 + 1256, ((v4 >> 31) & 0xFFFFFFFC) + 2042);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
}
