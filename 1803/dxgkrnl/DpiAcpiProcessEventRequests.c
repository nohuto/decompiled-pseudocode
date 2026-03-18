/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x1C0207D74
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C02073D4 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DxgkAcquireAdapterCoreSync @ 0x1C009F7A0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C009F834 (DxgkReleaseAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     ?DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1C02137B4 (-DmmInvalidateActiveVidPn@@YAJQEAXW4_DXGK_ACTIVE_VIDPN_INVALIDATION_REASON@@PEAXIPEAU_DXGK_DISPL.c)
 */

__int64 __fastcall DpiAcpiProcessEventRequests(
        __int64 a1,
        char a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  bool v8; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  if ( (a2 & 1) != 0 || *(_DWORD *)(a3 + 24) == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 6u, (__int64)a4);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3728), 1);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v4 + 3728), DXGK_AVIR_HOTKEY, 0LL, 0, a4, v8);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3728));
  }
  return result;
}
