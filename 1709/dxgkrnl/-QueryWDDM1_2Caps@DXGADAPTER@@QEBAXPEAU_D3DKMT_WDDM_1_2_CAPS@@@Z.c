/*
 * XREFs of ?QueryWDDM1_2Caps@DXGADAPTER@@QEBAXPEAU_D3DKMT_WDDM_1_2_CAPS@@@Z @ 0x1C0001F24
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C008E700 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?SupportHWVSync@DXGADAPTER@@QEBAEXZ @ 0x1C0002128 (-SupportHWVSync@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGADAPTER::QueryWDDM1_2Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_2_CAPS *a2)
{
  UINT v4; // r8d
  UINT v5; // eax
  UINT v6; // edx
  UINT v7; // ecx
  UINT v8; // eax
  UINT v9; // ecx
  unsigned __int8 v10; // al
  int v11; // edx
  int v12; // ecx
  __int64 v13; // r10
  __int64 v14; // r9

  a2->PreemptionCaps.GraphicsPreemptionGranularity = *((_DWORD *)this + 540);
  a2->PreemptionCaps.ComputePreemptionGranularity = *((_DWORD *)this + 541);
  a2->Value ^= (a2->Value ^ *((unsigned __int8 *)this + 2168)) & 1;
  v4 = a2->Value ^ ((unsigned __int8)*(_DWORD *)&a2->0 ^ (unsigned __int8)(2 * *((_BYTE *)this + 2169))) & 2;
  a2->Value = v4;
  v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(4 * *((_BYTE *)this + 2170))) & 4;
  a2->Value = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(2 * *((_DWORD *)this + 421))) & 8;
  a2->Value = v6;
  v7 = v6 & 0xFFFFFFEF | (*((_QWORD *)this + 84) != 0LL ? 0x10 : 0);
  a2->Value = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(*((_DWORD *)this + 421) >> 23)) & 0x20;
  a2->Value = v8;
  v9 = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)this + 420) << 6)) & 0x40;
  a2->Value = v9;
  a2->Value = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(32 * *((_DWORD *)this + 416))) & 0x80;
  v10 = DXGADAPTER::SupportHWVSync(this);
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v10 << 8)) & 0x100;
  *(_DWORD *)(v13 + 8) = v12;
  *(_DWORD *)(v13 + 8) = v12 ^ ((unsigned __int16)(v11 ^ (v11 ^ (v10 << 8)) & 0x100) ^ (unsigned __int16)(*(unsigned __int8 *)(v14 + 2174) << 9)) & 0x200;
}
