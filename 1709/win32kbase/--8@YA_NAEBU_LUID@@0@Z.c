/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0098090
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?DrvAddAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0097F20 (-DrvAddAdapterLuid@@YAJU_LUID@@@Z.c)
 *     ?DrvRemoveAdapterLuid@@YAJU_LUID@@@Z @ 0x1C0097FB0 (-DrvRemoveAdapterLuid@@YAJU_LUID@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}
