/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C00DF0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1) + 221) != 0;
}
