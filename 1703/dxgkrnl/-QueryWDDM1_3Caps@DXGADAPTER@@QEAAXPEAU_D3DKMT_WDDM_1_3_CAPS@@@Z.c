/*
 * XREFs of ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00D31D8
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00D94F0 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM1_3Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_3_CAPS *a2)
{
  UINT v2; // eax

  a2->Value = 0;
  v2 = 0;
  if ( *((_BYTE *)this + 2156) )
    v2 = 2;
  a2->Value = v2;
  if ( *((_BYTE *)this + 2151) )
    a2->Value |= 4u;
  if ( *((_DWORD *)this + 910) )
    a2->Value |= 8u;
  a2->Value ^= (a2->Value ^ (*((_DWORD *)this + 75) >> 6)) & 1;
  a2->Value ^= (a2->Value ^ (8 * *((_DWORD *)this + 546))) & 0x10;
}
