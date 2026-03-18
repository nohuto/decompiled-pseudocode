/*
 * XREFs of ?QueryGpuMmuCaps@ADAPTER_RENDER@@QEBAXIPEAU_D3DKMT_GPUMMU_CAPS@@@Z @ 0x1C00CEEAC
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::QueryGpuMmuCaps(ADAPTER_RENDER *this, __int64 a2, struct _D3DKMT_GPUMMU_CAPS *a3)
{
  __int64 v4; // rsi
  __int64 v6; // r9
  __int64 v7; // rcx
  _DWORD *v8; // rdx
  UINT v9; // eax
  UINT v10; // ecx
  __int64 v11; // rax

  v4 = (unsigned int)a2;
  v6 = *(unsigned int *)(*((_QWORD *)this + 2) + 1676LL);
  if ( (v6 & 0x40) == 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3, v6);
    *(_QWORD *)(v11 + 24) = 3571LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v7 = *((_QWORD *)this + 112);
  if ( v7 )
    v8 = (_DWORD *)(v7 + 144 * v4);
  else
    v8 = 0LL;
  a3->Flags.Value = 0;
  v9 = *v8 & 1;
  a3->Flags.Value = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)*v8) & 2;
  a3->Flags.Value = v10;
  a3->Flags.Value = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(*v8 >> 2)) & 4;
  a3->VirtualAddressBitCount = v8[2];
}
