/*
 * XREFs of ?InitializeShadowEffect@CTreeEffectLayer@@IEAAJPEAUID2D1Effect@@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180174F98
 * Callers:
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180175210 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTreeEffectLayer::InitializeShadowEffect(
        CTreeEffectLayer *this,
        struct ID2D1Effect *a2,
        const struct D2D_MATRIX_3X2_F *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  CTreeEffectLayer *v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = this;
  if ( !a2 )
    return 2147942487LL;
  v6 = *(_QWORD *)a2;
  LODWORD(v14) = 1;
  v7 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, _QWORD, _QWORD, CTreeEffectLayer **, int))(v6 + 72))(
         a2,
         0LL,
         0LL,
         &v14,
         4);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x472u);
  }
  else
  {
    v9 = *(_QWORD *)a2;
    LODWORD(v14) = 0;
    v10 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v9 + 72))(
            a2,
            1LL,
            0LL,
            &v14,
            4);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x474u);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, const struct D2D_MATRIX_3X2_F *, int))(*(_QWORD *)a2 + 72LL))(
              a2,
              2LL,
              0LL,
              a3,
              24);
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x476u);
      }
      else
      {
        v12 = *(_QWORD *)a2;
        *(float *)&v14 = FLOAT_0_5;
        v13 = (*(__int64 (__fastcall **)(struct ID2D1Effect *, __int64, _QWORD, CTreeEffectLayer **, int))(v12 + 72))(
                a2,
                3LL,
                0LL,
                &v14,
                4);
        v8 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x477u);
      }
    }
  }
  return v8;
}
