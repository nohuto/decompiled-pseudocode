/*
 * XREFs of ?UpdateGdiGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00E6E70
 * Callers:
 *     ?DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z @ 0x1C00A3210 (-DxgkCddSetGammaRamp@@YAJQEAXIPEBU_D3DDDI_GAMMA_RAMP_RGB256x3x16@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::UpdateGdiGammaRamp(
        ADAPTER_DISPLAY *this,
        unsigned int a2,
        struct _D3DDDI_GAMMA_RAMP_RGB256x3x16 *a3)
{
  __int64 v4; // rdi
  void *v6; // rcx

  v4 = 3208LL * a2;
  v6 = *(void **)(*((_QWORD *)this + 14) + v4 + 864);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  *(_QWORD *)(*((_QWORD *)this + 14) + v4 + 864) = a3;
  return 0LL;
}
