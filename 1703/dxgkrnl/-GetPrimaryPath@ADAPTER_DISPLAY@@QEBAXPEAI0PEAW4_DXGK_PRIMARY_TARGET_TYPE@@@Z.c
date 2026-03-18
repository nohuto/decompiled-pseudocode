/*
 * XREFs of ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C000B3BC
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C000FB10 (DpiEnterSystemDisplay.c)
 *     DxgkIsPrimarySource @ 0x1C00A5F60 (DxgkIsPrimarySource.c)
 *     DmmRemovePathsFromVidPnSource @ 0x1C01D66F0 (DmmRemovePathsFromVidPnSource.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::GetPrimaryPath(
        ADAPTER_DISPLAY *this,
        unsigned int *a2,
        unsigned int *a3,
        enum _DXGK_PRIMARY_TARGET_TYPE *a4)
{
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
  {
    *a2 = *((_DWORD *)this + 30);
    *a3 = *((_DWORD *)this + 31);
    *(_DWORD *)a4 = *((_DWORD *)this + 32);
  }
  else
  {
    *(_DWORD *)a4 = 3;
    *a2 = -1;
    *a3 = -1;
  }
}
