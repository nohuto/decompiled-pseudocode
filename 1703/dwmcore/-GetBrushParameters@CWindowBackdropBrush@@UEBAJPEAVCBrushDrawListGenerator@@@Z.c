/*
 * XREFs of ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18017BC40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180059D68 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 */

__int64 __fastcall CWindowBackdropBrush::GetBrushParameters(
        CWindowBackdropBrush *this,
        struct CBrushDrawListGenerator *a2)
{
  int WindowBackgroundTreatmentEffectInput; // eax
  int v4; // ebx
  struct CSurfaceDrawListBrush *v5; // rsi
  struct CSurfaceDrawListBrush *v6; // r14
  CSurfaceDrawListBrush *v7; // rcx
  CSurfaceDrawListBrush *v8; // r8
  CSurfaceDrawListBrush *(__fastcall *v9)(CSurfaceDrawListBrush *, char); // rax
  __int128 v10; // xmm0
  CSurfaceDrawListBrush *v12; // [rsp+48h] [rbp-69h] BYREF
  CSurfaceDrawListBrush *v13; // [rsp+50h] [rbp-61h] BYREF
  struct CSurfaceDrawListBrush *v14[2]; // [rsp+58h] [rbp-59h] BYREF
  __int128 v15; // [rsp+68h] [rbp-49h]
  float v16; // [rsp+78h] [rbp-39h]
  struct IImageSource *v17; // [rsp+88h] [rbp-29h] BYREF
  __int128 v18; // [rsp+90h] [rbp-21h]
  char v19; // [rsp+A5h] [rbp-Ch]
  _BYTE v20[36]; // [rsp+A8h] [rbp-9h] BYREF
  struct D2D_RECT_F v21; // [rsp+CCh] [rbp+1Bh] BYREF

  CBrushDrawListGenerator::Reset(a2);
  memset_0(&v17, 0, 0x58uLL);
  WindowBackgroundTreatmentEffectInput = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                           *(CDrawingContext **)a2,
                                           (const struct D2D_SIZE_F *)a2 + 1,
                                           (struct EffectInput *)&v17);
  v4 = WindowBackgroundTreatmentEffectInput;
  if ( WindowBackgroundTreatmentEffectInput < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, WindowBackgroundTreatmentEffectInput, 0x54u);
  }
  else
  {
    if ( v19 )
    {
      v10 = v18;
      *((_BYTE *)a2 + 108) = 0;
      *(_OWORD *)((char *)a2 + 56) = v10;
LABEL_18:
      v4 = 0;
      goto LABEL_20;
    }
    v12 = 0LL;
    v14[1] = 0LL;
    v14[0] = (struct CSurfaceDrawListBrush *)&v12;
    LOBYTE(v15) = 1;
    v4 = CSurfaceDrawListBrush::Create(v17, &v21, &v14[1]);
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
    if ( v4 >= 0 )
    {
      *(_OWORD *)v14 = _xmm;
      v15 = _xmm;
      v16 = FLOAT_1_0;
      CDrawListBrush::SetBrushPrimitiveLayout(
        (__int64)v12,
        (__int64)v14,
        (__int64)&SamplerMode::k_ClampClampLinear,
        (__int64)v20,
        0LL,
        50529027,
        0LL);
      v8 = v12;
      v12 = 0LL;
      v13 = v8;
      CBrushDrawListGenerator::AttachInput((__int64)a2, 0, (__int64)&v13);
      if ( v13 )
      {
        v9 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v13;
        if ( v9 == CSurfaceDrawListBrush::`vector deleting destructor' )
          CSurfaceDrawListBrush::`vector deleting destructor'(v13, 1);
        else
          v9(v13, 1);
      }
      if ( v12 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
      goto LABEL_18;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5Du);
    if ( v12 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v12, 1);
  }
LABEL_20:
  ReleaseInterfaceNoNULL<IImageSource>(v17);
  if ( v4 < 0 )
    CBrushDrawListGenerator::Reset(a2);
  return 0LL;
}
