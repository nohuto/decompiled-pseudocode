/*
 * XREFs of ?AdjustFullscreenGammaRamp@ADAPTER_DISPLAY@@QEAAJPEBUDXGK_GAMMA_RAMP@@PEAU2@PEAUDXGK_GAMMA_ADJUSTMENT@@@Z @ 0x1C0079008
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0079574 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?ScaleAndOffset@@YAGGMM@Z @ 0x1C0176844 (-ScaleAndOffset@@YAGGMM@Z.c)
 *     ?ScaleAndOffset@@YAMMMMMM@Z @ 0x1C0176884 (-ScaleAndOffset@@YAMMMMMM@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::AdjustFullscreenGammaRamp(
        ADAPTER_DISPLAY *this,
        const struct DXGK_GAMMA_RAMP *a2,
        struct DXGK_GAMMA_RAMP *a3,
        struct DXGK_GAMMA_ADJUSTMENT *a4)
{
  __int64 v4; // rax
  float v5; // xmm4_4
  __int64 v6; // rcx
  __int64 v7; // rdx
  float v8; // xmm0_4
  float *v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rcx
  float v12; // xmm4_4
  float v13; // xmm0_4
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rcx
  float v17; // xmm4_4
  float v18; // xmm0_4
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned __int16 v24; // r10
  __int64 v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // r11
  float v28; // xmm2_4
  float v29; // xmm1_4
  unsigned __int16 v30; // ax
  __int64 v31; // rdx
  __int64 v32; // r9
  __int64 v33; // r11
  unsigned __int16 v34; // ax
  __int64 v35; // r9
  unsigned __int16 *v36; // rdx
  __int64 v37; // r11
  unsigned __int16 v38; // cx
  unsigned __int16 v39; // ax
  __int64 v40; // rdx
  __int64 v41; // r9
  unsigned __int16 v42; // r10
  unsigned __int16 v43; // ax
  unsigned __int16 *v44; // rdx
  unsigned __int16 v45; // r10
  unsigned __int16 v46; // ax
  __int64 v47; // rdx
  __int16 v48; // r10

  if ( *((_DWORD *)a3 + 4) == 2 )
  {
    if ( !a2 || *((_DWORD *)a2 + 4) == 2 )
    {
      v22 = *((_QWORD *)a3 + 4);
      if ( a2 )
        v23 = *((_QWORD *)a2 + 4);
      else
        v23 = 0LL;
      v24 = 0;
      v25 = v22 + 512;
      v26 = 256LL;
      v27 = v23 - v22;
      do
      {
        v28 = *((float *)a4 + 3);
        v29 = *(float *)a4;
        if ( v23 )
        {
          v30 = ScaleAndOffset(*(_WORD *)(v27 + v25 - 512), v29, v28);
          *(_WORD *)(v31 - 512) = v30;
          v34 = ScaleAndOffset(*(_WORD *)(v33 + v31), *(float *)(v32 + 4), *(float *)(v32 + 12));
          *v36 = v34;
          v38 = *(unsigned __int16 *)((char *)v36 + v37 + 512);
        }
        else
        {
          v39 = ScaleAndOffset(v24, v29, v28);
          *(_WORD *)(v40 - 512) = v39;
          v43 = ScaleAndOffset(v42, *(float *)(v41 + 4), *(float *)(v41 + 16));
          *v44 = v43;
          v38 = v45;
        }
        v46 = ScaleAndOffset(v38, *(float *)(v35 + 8), *(float *)(v35 + 20));
        *(_WORD *)(v47 + 512) = v46;
        v24 = v48 + 257;
        v25 = v47 + 2;
        --v26;
      }
      while ( v26 );
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( *((_DWORD *)a3 + 4) != 3 || !a2 || *((_DWORD *)a2 + 4) != 3 )
    return 3221225485LL;
  v4 = *((_QWORD *)a3 + 4);
  v5 = FLOAT_1_0;
  v6 = *((_QWORD *)a2 + 4) - v4;
  v7 = v4 + 24;
  do
  {
    v8 = ScaleAndOffset(*(float *)(v6 + v7), *(float *)a4, *((float *)a4 + 3), 0.0, v5);
    *v9 = v8;
    v13 = ScaleAndOffset(*(float *)((char *)v9 + v11 + 4), *(float *)(v10 + 4), *(float *)(v10 + 16), 0.0, v12);
    *(float *)(v14 + 4) = v13;
    v18 = ScaleAndOffset(*(float *)(v14 + v16 + 8), *(float *)(v15 + 8), *(float *)(v15 + 20), 0.0, v17);
    *(float *)(v19 + 8) = v18;
    v7 = v19 + 12;
  }
  while ( v20 != 1 );
  return 0LL;
}
