/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C00A5918
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00A587C (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

const struct _UNICODE_STRING *__fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v2; // rdi
  bool v4; // zf
  char *v5; // rax
  __int64 v7; // rax

  v2 = a2;
  if ( a2 >= 4 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 3237LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = (*((_BYTE *)DXGPROCESS::GetCurrent() + 323) & 1) == 0;
  v5 = (char *)this + 328;
  if ( v4 )
    v5 = (char *)this + 264;
  return (const struct _UNICODE_STRING *)&v5[16 * v2];
}
