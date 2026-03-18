/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180183300
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x180048A6C (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18004AD64 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800700F4 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x180070E28 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180072640 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18009F6D4 (-Create@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  signed int WindowBackgroundTreatmentEffectInput; // eax
  signed int v4; // r14d
  struct CSurfaceDrawListBrush *v5; // rdi
  struct CSurfaceDrawListBrush *v6; // rsi
  CSurfaceDrawListBrush *v7; // rcx
  CSurfaceDrawListBrush *v8; // r8
  CGeometryOnlyDrawListBrush *(__fastcall *v9)(CGeometryOnlyDrawListBrush *, char); // rax
  __int128 v10; // xmm0
  CSurfaceDrawListBrush *v12; // [rsp+48h] [rbp-79h] BYREF
  CSurfaceDrawListBrush *v13; // [rsp+50h] [rbp-71h] BYREF
  struct CSurfaceDrawListBrush *v14[2]; // [rsp+58h] [rbp-69h] BYREF
  __int128 v15; // [rsp+68h] [rbp-59h]
  float v16; // [rsp+78h] [rbp-49h]
  __int128 v17; // [rsp+88h] [rbp-39h] BYREF
  char v18; // [rsp+98h] [rbp-29h]
  __int128 v19; // [rsp+A0h] [rbp-21h]
  char v20; // [rsp+B5h] [rbp-Ch]
  _QWORD v21[4]; // [rsp+B8h] [rbp-9h] BYREF
  struct D2D_RECT_F v22; // [rsp+DCh] [rbp+1Bh] BYREF

  CBrushDrawListGenerator::Reset(a2);
  v18 = 0;
  memset(v21, 0, 24);
  v17 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v17);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(CDrawingContext **)a2,
                                           (const struct D2D_SIZE_F *)a2 + 1,
                                           (struct EffectInput *)&v17);
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x54u);
LABEL_21:
    CBrushDrawListGenerator::Reset(a2);
    goto LABEL_22;
  }
  if ( v20 )
  {
    v10 = v19;
    *((_BYTE *)a2 + 109) = 0;
    *(_OWORD *)((char *)a2 + 56) = v10;
    goto LABEL_22;
  }
  v12 = 0LL;
  v14[1] = 0LL;
  v14[0] = (struct CSurfaceDrawListBrush *)&v12;
  LOBYTE(v15) = 1;
  v4 = CSurfaceDrawListBrush::Create((const struct CDrawListBitmap *)&v17, &v22, &v14[1]);
  if ( (_BYTE)v15 )
  {
    v5 = v14[0];
    v6 = v14[1];
    v7 = *(CSurfaceDrawListBrush **)v14[0];
    if ( v14[1] != *(struct CSurfaceDrawListBrush **)v14[0] )
    {
      if ( v7 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v7, 1);
      *(_QWORD *)v5 = v6;
    }
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x5Du);
    if ( v12 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
    goto LABEL_21;
  }
  *(_OWORD *)v14 = _xmm;
  v15 = _xmm;
  v16 = FLOAT_1_0;
  CDrawListBrush::SetBrushPrimitiveLayout(
    (__int64)v12,
    (__int64)v14,
    (__int64)&SamplerMode::k_ClampClampLinear,
    (__int64)v21,
    0LL,
    50529027,
    0LL);
  v8 = v12;
  v12 = 0LL;
  v13 = v8;
  CBrushDrawListGenerator::AttachInput((__int64)a2, 0, &v13);
  if ( v13 )
  {
    v9 = **(CGeometryOnlyDrawListBrush *(__fastcall ***)(CGeometryOnlyDrawListBrush *, char))v13;
    if ( v9 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
    }
    else if ( v9 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
    {
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v13, 1);
    }
    else
    {
      v9(v13, 1);
    }
  }
  if ( v12 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
LABEL_22:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v17);
  return 0LL;
}
