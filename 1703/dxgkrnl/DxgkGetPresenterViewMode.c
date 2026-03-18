/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C00A5C80
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool DxgkGetPresenterViewMode()
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal() + 201) != 0;
}
