/*
 * XREFs of ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C0007470
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C0011370 (DpiEnterSystemDisplay.c)
 *     DxgkIsBootPrimarySource @ 0x1C00F91B0 (DxgkIsBootPrimarySource.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C01EDC70 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
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
