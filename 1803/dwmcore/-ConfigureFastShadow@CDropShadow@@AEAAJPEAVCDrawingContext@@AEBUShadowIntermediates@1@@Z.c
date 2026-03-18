/*
 * XREFs of ?ConfigureFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUShadowIntermediates@1@@Z @ 0x180188F24
 * Callers:
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180189050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x18018A5BC (-InitializeFastShadow@CDropShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDropShadow::ConfigureFastShadow(
        CDropShadow *this,
        struct CDrawingContext *a2,
        const struct CDropShadow::ShadowIntermediates *a3)
{
  struct CDropShadow *v4; // rcx
  unsigned int v5; // edi
  float v6; // xmm6_4
  int v8; // eax
  __int64 v9; // r8
  char v10; // al

  v4 = CDropShadow::s_pFastShadow;
  v5 = 0;
  v6 = FLOAT_1_0;
  if ( !CDropShadow::s_pFastShadow )
  {
    v8 = CDropShadow::InitializeFastShadow(this, a2);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x3C9u);
      return v5;
    }
    v4 = CDropShadow::s_pFastShadow;
  }
  if ( !*((_BYTE *)this + 240) )
  {
    (*(void (__fastcall **)(struct CDropShadow *, struct CDrawingContext *))(*(_QWORD *)v4 + 8LL))(v4, a2);
    v4 = CDropShadow::s_pFastShadow;
    *((_BYTE *)this + 240) = 1;
  }
  v9 = *((_QWORD *)a3 + 4);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 48LL))(*((_QWORD *)a3 + 4), 18LL);
    v4 = CDropShadow::s_pFastShadow;
    if ( v10 )
      v6 = *(float *)(*((_QWORD *)a3 + 4) + 84LL);
  }
  *((_DWORD *)v4 + 38) = *((_DWORD *)this + 38);
  *(_OWORD *)((char *)v4 + 136) = *(_OWORD *)((char *)this + 136);
  *((float *)v4 + 39) = v6 * *((float *)this + 39);
  *((_QWORD *)v4 + 20) = *((_QWORD *)this + 20);
  *((_DWORD *)v4 + 42) = *((_DWORD *)this + 42);
  *(_OWORD *)((char *)v4 + 172) = *(_OWORD *)((char *)this + 172);
  return v5;
}
