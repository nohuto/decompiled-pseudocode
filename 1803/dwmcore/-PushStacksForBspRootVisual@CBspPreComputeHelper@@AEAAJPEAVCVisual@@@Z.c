/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211E9C
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800BE36C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800BE8E8 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800BFCFC (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateType@COcclusionContext@@@Z @ 0x1800C2628 (-Push@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAAJAEBW4StackStateTyp.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801401D4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x180211A18 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x180211B84 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v7; // [rsp+20h] [rbp-60h]
  _BYTE v8[64]; // [rsp+30h] [rbp-50h] BYREF
  int v9; // [rsp+70h] [rbp-10h]
  __int64 v10; // [rsp+90h] [rbp+10h] BYREF
  struct CVisual *v11; // [rsp+98h] [rbp+18h] BYREF

  v11 = a2;
  v9 = 0;
  CVisual::CalcEffectiveTransform((__int64)a2, (const struct D2D_SIZE_F *)5, 0LL, &v10, (CMILMatrix *)v8, 0LL);
  v3 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v8, 0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 96;
    goto LABEL_21;
  }
  v10 = 0LL;
  v3 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v7 = 101;
    goto LABEL_21;
  }
  v5 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x68u);
  }
  else
  {
    v3 = CMatrixStack::Push(
           (CBspPreComputeHelper *)((char *)this + 96),
           (const struct CMILMatrix *)&CMILMatrix::Identity,
           0);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 107;
      goto LABEL_21;
    }
    LODWORD(v11) = -1;
    v3 = CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Push((unsigned int *)this + 32, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 110;
      goto LABEL_21;
    }
    LODWORD(v11) = -1;
    v3 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 113;
      goto LABEL_21;
    }
    LODWORD(v11) = -1;
    v3 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 116;
      goto LABEL_21;
    }
    LODWORD(v11) = 5;
    v3 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 119;
      goto LABEL_21;
    }
    *(float *)&v11 = FLOAT_1_0;
    v3 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 64, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 122;
      goto LABEL_21;
    }
    LOBYTE(v11) = 0;
    v3 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v11);
    v4 = v3;
    if ( v3 < 0 )
    {
      v7 = 125;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, v7);
    }
  }
  return v4;
}
