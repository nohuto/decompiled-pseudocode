/*
 * XREFs of ?QueryWDDM1_3Caps@DXGADAPTER@@QEAAXPEAU_D3DKMT_WDDM_1_3_CAPS@@@Z @ 0x1C00F4CB4
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::QueryWDDM1_3Caps(DXGADAPTER *this, struct _D3DKMT_WDDM_1_3_CAPS *a2)
{
  UINT v3; // r8d
  UINT v4; // eax
  UINT v5; // ecx

  a2->Value = 0;
  v3 = 0;
  if ( *((_BYTE *)this + 2316) )
  {
    a2->Value = 2;
    v3 = 2;
  }
  if ( *((_BYTE *)this + 2311) )
  {
    v3 |= 4u;
    a2->Value = v3;
  }
  if ( *((_DWORD *)this + 954) )
  {
    v3 |= 8u;
    a2->Value = v3;
  }
  v4 = v3 | (*((_DWORD *)this + 75) >> 6) & 1;
  a2->Value = v4;
  v5 = v4 | (8 * (*((_DWORD *)this + 588) & 2));
  a2->Value = v5;
  a2->Value = v5 | (2 * (*((_DWORD *)this + 459) & 0x10));
}
