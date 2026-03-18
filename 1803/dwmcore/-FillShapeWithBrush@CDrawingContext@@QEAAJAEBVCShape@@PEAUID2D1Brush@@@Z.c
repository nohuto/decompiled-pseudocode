/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1801616C8
 * Callers:
 *     ?FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801617B0 (-FillShapeWithColor@CDrawingContext@@QEAAJAEBVCShape@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802109EC (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18015ECC0 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // eax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  v6 = (*(__int64 (__fastcall **)(const struct CShape *, _QWORD, __int64 *))(*(_QWORD *)a2 + 24LL))(a2, 0LL, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xEA2u);
  }
  else
  {
    v8 = CDrawingContext::ApplyRenderStateInternal(this, 0);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xEA4u);
    }
    else
    {
      v9 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 70));
      v12 = (*(__int64 (__fastcall **)(__int64, char *, __int64, struct ID2D1Brush *, bool, int))(v10 + 104))(
              v11,
              (char *)this + 8,
              v14,
              a3,
              *((_DWORD *)this + 64) != 0,
              v9);
      v7 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xEADu);
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  return v7;
}
