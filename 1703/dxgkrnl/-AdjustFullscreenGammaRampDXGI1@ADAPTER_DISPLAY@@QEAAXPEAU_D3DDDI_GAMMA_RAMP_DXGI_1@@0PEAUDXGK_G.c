/*
 * XREFs of ?AdjustFullscreenGammaRampDXGI1@ADAPTER_DISPLAY@@QEAAXPEAU_D3DDDI_GAMMA_RAMP_DXGI_1@@0PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C016FE08
 * Callers:
 *     ?SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z @ 0x1C00E6CD4 (-SetGammaRamp@ADAPTER_DISPLAY@@QEAAJIPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_DISPLAY::AdjustFullscreenGammaRampDXGI1(
        ADAPTER_DISPLAY *this,
        struct _D3DDDI_GAMMA_RAMP_DXGI_1 *a2,
        struct _D3DDDI_GAMMA_RAMP_DXGI_1 *a3,
        struct DXGK_GAMMA_ADJUSTMENT *a4)
{
  D3DDDI_DXGI_RGB *GammaCurve; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rcx
  float v7; // xmm0_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm0_4
  float v12; // xmm2_4

  GammaCurve = a3->GammaCurve;
  v5 = (char *)a2 - (char *)a3;
  v6 = 1024LL;
  do
  {
    v7 = (float)(*(float *)((char *)&GammaCurve->Red + v5) * *(float *)a4) + *((float *)a4 + 3);
    if ( v7 <= 1.0 )
      v8 = fmaxf(0.0, v7);
    else
      v8 = FLOAT_1_0;
    GammaCurve->Red = v8;
    v9 = (float)(*(float *)((char *)&GammaCurve->Green + v5) * *((float *)a4 + 1)) + *((float *)a4 + 4);
    if ( v9 <= 1.0 )
      v10 = fmaxf(0.0, v9);
    else
      v10 = FLOAT_1_0;
    GammaCurve->Green = v10;
    v11 = (float)(*(float *)((char *)&GammaCurve->Blue + v5) * *((float *)a4 + 2)) + *((float *)a4 + 5);
    if ( v11 <= 1.0 )
      v12 = fmaxf(0.0, v11);
    else
      v12 = FLOAT_1_0;
    GammaCurve->Blue = v12;
    ++GammaCurve;
    --v6;
  }
  while ( v6 );
}
