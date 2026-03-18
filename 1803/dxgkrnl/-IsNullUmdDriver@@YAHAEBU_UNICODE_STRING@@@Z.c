/*
 * XREFs of ?IsNullUmdDriver@@YAHAEBU_UNICODE_STRING@@@Z @ 0x1C00A8B78
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00A587C (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsNullUmdDriver(const struct _UNICODE_STRING *a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( !a1->Length || a1->Length == 4 && *(_DWORD *)L"<>" == *(_DWORD *)a1->Buffer )
    return 1;
  return v1;
}
