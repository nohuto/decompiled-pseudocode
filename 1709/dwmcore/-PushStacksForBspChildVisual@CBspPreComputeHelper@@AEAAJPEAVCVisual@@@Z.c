/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFD38
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18004E8C4 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x1800911EC (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVisibility@@@Z @ 0x180091200 (-Push@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBackfaceVis.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B540C (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18011D6B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x1801CFBD0 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801D00CC (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  signed int v5; // eax
  int v6; // eax
  signed int v7; // eax
  signed int v8; // eax
  signed int v9; // eax
  float OpacityInternal; // xmm0_4
  float v11; // xmm2_4
  unsigned int *v12; // rcx
  signed int v13; // eax
  signed int v14; // eax
  int v16; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0;
  CBspPreComputeHelper::PushTransformForChildVisual(this, a2);
  if ( (*((_BYTE *)a2 + 96) & 0x40) != 0
    && (v16 = *((int *)a2 + 50),
        v5 = CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::Push((unsigned int *)this + 32, &v16),
        v4 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x8Fu);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 24);
    if ( (v6 & 2) != 0
      && (v16 = v6 << 18 >> 28,
          v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v16),
          v4 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x95u);
    }
    else if ( (*((_BYTE *)a2 + 96) & 8) != 0
           && (v16 = *((int *)a2 + 47),
               v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                      (unsigned int *)this + 48,
                      &v16),
               v4 = v8,
               v8 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x9Bu);
    }
    else if ( (*((_BYTE *)a2 + 96) & 0x10) != 0
           && (v16 = *((int *)a2 + 48),
               v9 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v16),
               v4 = v9,
               v9 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xA1u);
    }
    else
    {
      OpacityInternal = CVisual::GetOpacityInternal(a2);
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(OpacityInternal - 1.0)) & _xmm);
      if ( v11 < 0.0000011920929
        || (*(float *)&v16 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                           * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256),
            v13 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(v12, &v16),
            v4 = v13,
            v13 >= 0) )
      {
        if ( (*((_BYTE *)a2 + 93) & 2) != 0 )
        {
          LOBYTE(v16) = 1;
          v14 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v16);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0xB0u);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0xAAu);
      }
    }
  }
  return v4;
}
