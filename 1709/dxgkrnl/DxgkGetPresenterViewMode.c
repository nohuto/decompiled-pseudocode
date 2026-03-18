/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C00F9670
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1) + 201) != 0;
}
