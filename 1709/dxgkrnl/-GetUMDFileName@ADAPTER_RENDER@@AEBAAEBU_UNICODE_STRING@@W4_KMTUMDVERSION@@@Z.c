/*
 * XREFs of ?GetUMDFileName@ADAPTER_RENDER@@AEBAAEBU_UNICODE_STRING@@W4_KMTUMDVERSION@@@Z @ 0x1C0082C20
 * Callers:
 *     ?GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C00826C4 (-GetUmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

const struct _UNICODE_STRING *__fastcall ADAPTER_RENDER::GetUMDFileName(ADAPTER_RENDER *this, unsigned int a2)
{
  __int64 v2; // rbx
  bool v4; // zf
  __int64 v5; // rax
  __int64 v7; // rax

  v2 = a2;
  if ( a2 >= 4 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 2947LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = (*((_BYTE *)DXGPROCESS::GetCurrent() + 307) & 1) == 0;
  v5 = v2 + 20;
  if ( v4 )
    v5 = v2 + 16;
  return (const struct _UNICODE_STRING *)((char *)this + 16 * v5);
}
