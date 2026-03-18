/*
 * XREFs of ?IsIdenticalMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0027F38
 * Callers:
 *     ?DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z @ 0x1C00DE150 (-DxgkCddEnable@@YAJIIPEBU_CDDDXGK_INTERFACE@@IPEBU_D3DKMT_DISPLAYMODE@@PEAPEAXPEA_KPEAI@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C0155D94 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x1C0170610 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 */

char __fastcall ADAPTER_DISPLAY::IsIdenticalMode(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rsi
  DXGADAPTER *v4; // r8
  __int64 v5; // rbx
  int v6; // eax
  int CurrentOrientation; // eax
  char v9; // dl
  DXGADAPTER *v10; // rcx

  v3 = a2;
  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  v4 = this[14];
  v5 = 3760 * v3;
  if ( ((*((_DWORD *)v4 + 940 * v3 + 249) - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( *(_DWORD *)((char *)v4 + v5 + 968) != *(_DWORD *)((char *)v4 + v5 + 644) )
      return 0;
    v6 = *(_DWORD *)((char *)v4 + v5 + 648);
  }
  else
  {
    if ( *(_DWORD *)((char *)v4 + v5 + 968) != *(_DWORD *)((char *)v4 + v5 + 648) )
      return 0;
    v6 = *(_DWORD *)((char *)v4 + v5 + 644);
  }
  if ( *(_DWORD *)((char *)v4 + v5 + 972) != v6 )
    return 0;
  CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(this, (unsigned int)v3, 0LL);
  v9 = 1;
  if ( CurrentOrientation != 1 )
    return 0;
  v10 = this[14];
  if ( *(_DWORD *)((char *)v10 + v5 + 652)
    || *(_DWORD *)((char *)v10 + v5 + 656)
    || *(_DWORD *)((char *)v10 + v5 + 660) != *(_DWORD *)((char *)v10 + v5 + 968)
    || *(_DWORD *)((char *)v10 + v5 + 664) != *(_DWORD *)((char *)v10 + v5 + 972) )
  {
    return 0;
  }
  return v9;
}
