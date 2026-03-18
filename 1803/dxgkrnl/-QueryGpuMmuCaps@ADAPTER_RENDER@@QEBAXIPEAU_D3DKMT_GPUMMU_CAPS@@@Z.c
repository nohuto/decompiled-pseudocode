/*
 * XREFs of ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C00A57F8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::QueryGpuMmuCaps(ADAPTER_RENDER *this, unsigned int a2, struct _D3DKMT_GPUMMU_CAPS *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  UINT v8; // eax
  UINT v9; // ecx
  __int64 v10; // rax

  v4 = a2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 1836LL) & 0x40) == 0 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 4232LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v6 = *((_QWORD *)this + 126);
  if ( v6 )
    v7 = (_DWORD *)(v6 + 144 * v4);
  else
    v7 = 0LL;
  a3->Flags.Value = 0;
  v8 = *v7 & 1;
  a3->Flags.Value = v8;
  v9 = v8 | *v7 & 2;
  a3->Flags.Value = v9;
  a3->Flags.Value = v9 | (*v7 >> 2) & 4;
  a3->VirtualAddressBitCount = v7[2];
}
