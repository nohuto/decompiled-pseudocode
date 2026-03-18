/*
 * XREFs of ?GetPrimaryPath@ADAPTER_DISPLAY@@QEBAXPEAI0PEAW4_DXGK_PRIMARY_TARGET_TYPE@@@Z @ 0x1C00149D8
 * Callers:
 *     DpiEnterSystemDisplay @ 0x1C003BF30 (DpiEnterSystemDisplay.c)
 *     DxgkIsBootPrimarySource @ 0x1C00DEEB0 (DxgkIsBootPrimarySource.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x1C0214AB0 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::GetPrimaryPath(
        ADAPTER_DISPLAY *this,
        unsigned int *a2,
        unsigned int *a3,
        enum _DXGK_PRIMARY_TARGET_TYPE *a4)
{
  int v4; // r10d
  unsigned int v5; // eax
  unsigned int v6; // r11d

  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 176LL) == 1 )
  {
    v4 = *((_DWORD *)this + 32);
    v5 = *((_DWORD *)this + 31);
    v6 = *((_DWORD *)this + 30);
  }
  else
  {
    v5 = -1;
    v4 = 3;
    v6 = -1;
  }
  *a2 = v6;
  *a3 = v5;
  *(_DWORD *)a4 = v4;
}
