/*
 * XREFs of ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00154C8
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C007C464 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00F65D0 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 *     DxgkSetMonitorColorSpaceTransform @ 0x1C00F9E90 (DxgkSetMonitorColorSpaceTransform.c)
 *     DxgkSetGammaRamp @ 0x1C01A0AC0 (DxgkSetGammaRamp.c)
 * Callees:
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C0015470 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_GAMMA_RAMP::Initialize(size_t *this, unsigned int a2, const void *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  SIZE_T SizeFromGammaRampType; // rax
  void *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = (int)a2;
  if ( a2 - 1 > 3 )
  {
    v6 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v6 + 24) = v3;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  SizeFromGammaRampType = GetSizeFromGammaRampType(a2);
  this[3] = SizeFromGammaRampType;
  if ( SizeFromGammaRampType )
  {
    v9 = operator new(SizeFromGammaRampType, 0x4B677844u, PagedPool);
    this[4] = (size_t)v9;
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v11 + 24) = this[3];
      WdLogEvent5_WdLowResource(v11);
      return 3221225495LL;
    }
    if ( a3 )
      memmove(v9, a3, this[3]);
  }
  *((_DWORD *)this + 4) = v3;
  return 0LL;
}
