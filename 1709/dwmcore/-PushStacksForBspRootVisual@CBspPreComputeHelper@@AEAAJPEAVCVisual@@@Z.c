/*
 * XREFs of ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFEE4
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x18007B408 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180091200 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800B100C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18011D6B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x1801CFA68 (-Push@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x1801CFBD0 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspRootVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  __int64 v3; // r9
  signed int v4; // eax
  unsigned int v5; // ebx
  signed int v6; // eax
  __int64 v7; // r9
  unsigned int v9; // [rsp+20h] [rbp-60h]
  _BYTE v10[64]; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+70h] [rbp-10h]
  __int64 v12; // [rsp+90h] [rbp+10h] BYREF
  struct CVisual *v13; // [rsp+98h] [rbp+18h] BYREF

  v13 = a2;
  v11 = 0;
  CVisual::CalcEffectiveTransform((__int64)a2, (const struct D2D_SIZE_F *)5, 0LL, &v12, (CMILMatrix *)v10, 0LL);
  v4 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 64), (const struct CMILMatrix *)v10, 0LL, v3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 96;
    goto LABEL_21;
  }
  v12 = 0LL;
  v4 = CWatermarkStack<CBspNode *,64,2,10>::Push((unsigned int *)this, &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    v9 = 101;
    goto LABEL_21;
  }
  v6 = CWatermarkStack<CVisual *,64,2,10>::Push((unsigned int *)this + 8, &v13);
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x68u);
  }
  else
  {
    v4 = CMatrixStack::Push(
           (CBspPreComputeHelper *)((char *)this + 96),
           (const struct CMILMatrix *)&CMILMatrix::Identity,
           0LL,
           v7);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 107;
      goto LABEL_21;
    }
    LODWORD(v13) = -1;
    v4 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 32, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 110;
      goto LABEL_21;
    }
    LODWORD(v13) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 113;
      goto LABEL_21;
    }
    LODWORD(v13) = -1;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 48, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 116;
      goto LABEL_21;
    }
    LODWORD(v13) = 5;
    v4 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 119;
      goto LABEL_21;
    }
    *(float *)&v13 = FLOAT_1_0;
    v4 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 64, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 122;
      goto LABEL_21;
    }
    LOBYTE(v13) = 0;
    v4 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v13);
    v5 = v4;
    if ( v4 < 0 )
    {
      v9 = 125;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v9);
    }
  }
  return v5;
}
