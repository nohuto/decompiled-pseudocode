/*
 * XREFs of ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180024AB0
 * Callers:
 *     ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180009780 (-ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800246D0 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180174700 (-ApplyState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176020 (-ApplyState@CLinearInterpolationLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180176560 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800095A0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180024B90 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18006B344 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExternalLayer::ApplyState(CExternalLayer *this, struct CDrawingContext *a2)
{
  const struct CMILMatrix *v2; // rbp
  struct CMILMatrix *v5; // r8
  __int64 (__fastcall *v6)(CTreeEffectLayer *, struct CDrawingContext *, struct CMILMatrix *); // rax
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  bool v10; // cl
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]
  bool v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CExternalLayer *)((char *)this + 40);
  v14 = 0;
  v5 = (CExternalLayer *)((char *)this + 40);
  v6 = *(__int64 (__fastcall **)(CTreeEffectLayer *, struct CDrawingContext *, struct CMILMatrix *))(*(_QWORD *)this + 32LL);
  if ( v6 == CTreeEffectLayer::CalcDeviceTransformDelta )
    v7 = CTreeEffectLayer::CalcDeviceTransformDelta(this, a2, v5);
  else
    v7 = v6(this, a2, v5);
  v8 = v7;
  if ( v7 < 0 )
  {
    v13 = 216;
    v12 = v7;
    goto LABEL_19;
  }
  v9 = CDrawingContext::PushDeviceTransform(a2, v2, &v14);
  v8 = v9;
  if ( v9 < 0 )
  {
    v13 = 222;
    goto LABEL_17;
  }
  *((_BYTE *)this + 32) = 1;
  v9 = CExternalLayer::ApplyRenderTarget(this, a2);
  v8 = v9;
  if ( v9 < 0 )
  {
    v13 = 228;
LABEL_17:
    v12 = v9;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, v13);
    goto LABEL_10;
  }
  v10 = v14 && (*(unsigned __int8 (__fastcall **)(CExternalLayer *))(*(_QWORD *)this + 40LL))(this);
  *((_BYTE *)this + 36) = *((_BYTE *)a2 + 6827);
  *((_BYTE *)a2 + 6827) = v10;
  *((_BYTE *)this + 35) = 1;
LABEL_10:
  if ( v8 < 0 )
    (*(void (__fastcall **)(CExternalLayer *, struct CDrawingContext *))(*(_QWORD *)this + 24LL))(this, a2);
  return (unsigned int)v8;
}
