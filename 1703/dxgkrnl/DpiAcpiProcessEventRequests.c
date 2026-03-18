/*
 * XREFs of DpiAcpiProcessEventRequests @ 0x1C01CC590
 * Callers:
 *     DpiAcpiHandleAcpiEvent @ 0x1C01CC140 (DpiAcpiHandleAcpiEvent.c)
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00AA594 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C00AA6D4 (DxgkAcquireAdapterCoreSync.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DmmInvalidateActiveVidPn @ 0x1C01D5D98 (DmmInvalidateActiveVidPn.c)
 */

int __fastcall DpiAcpiProcessEventRequests(__int64 a1, char a2, _DWORD *a3, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v4; // rbx
  int result; // eax
  unsigned int v10; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  result = ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 168));
  if ( (a2 & 1) != 0 || *a3 == 3 )
    result = DpiFdoInvalidateChildRelations(a1, 6u, (__int64)a4);
  if ( (a2 & 6) != 0 )
  {
    DxgkAcquireAdapterCoreSync(*(_QWORD *)(v4 + 3704), 1LL);
    DmmInvalidateActiveVidPn(*(DXGADAPTER **)(v4 + 3704), DXGK_RFVR_HOTKEY, 0LL, 0, a4, v10);
    return DxgkReleaseAdapterCoreSync(*(_QWORD *)(v4 + 3704), 1LL);
  }
  return result;
}
