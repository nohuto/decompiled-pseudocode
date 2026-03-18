/*
 * XREFs of ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180163178
 * Callers:
 *     ?StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyle1@@@Z @ 0x180163288 (-StrokeShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@MPEAUID2D1StrokeStyl.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECC0 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::StrokeShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3,
        float a4,
        struct ID2D1StrokeStyle1 *a5)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // r11
  int v14; // eax
  __int64 v16; // [rsp+78h] [rbp+10h] BYREF

  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  v8 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, 0LL, &v16);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xEBDu);
  }
  else
  {
    v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xEBFu);
    }
    else
    {
      v11 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 70));
      v14 = (*(__int64 (__fastcall **)(__int64, char *, __int64, struct ID2D1Brush *, _DWORD, struct ID2D1StrokeStyle1 *, bool, int))(v12 + 112))(
              v13,
              (char *)this + 8,
              v16,
              a3,
              LODWORD(a4),
              a5,
              *((_DWORD *)this + 64) != 0,
              v11);
      v9 = v14;
      if ( v14 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xECAu);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
  return v9;
}
