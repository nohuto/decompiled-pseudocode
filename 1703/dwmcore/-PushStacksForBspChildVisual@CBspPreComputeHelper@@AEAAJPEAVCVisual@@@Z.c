/*
 * XREFs of ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B37D8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@MilBackfaceVisibility@@XZ @ 0x180012E4C (-GetTopByReference@-$CWatermarkStack@W4Enum@MilBackfaceVisibility@@$0EA@$01$09@@QEBAPEBW4Enum@Mi.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180012E60 (-Push@-$CWatermarkStack@W4Enum@MilBitmapInterpolationMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilBitmap.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetOpacityInternal@CVisual@@QEBAMXZ @ 0x18008AE28 (-GetOpacityInternal@CVisual@@QEBAMXZ.c)
 *     ?Push@?$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z @ 0x1800BF864 (-Push@-$CWatermarkStack@M$0EA@$01$09@@QEAAJAEBM@Z.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801347B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Push@?$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMode@@@Z @ 0x1801B3690 (-Push@-$CWatermarkStack@W4Enum@MilCompositingMode@@$0EA@$01$09@@QEAAJAEBW4Enum@MilCompositingMod.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3B6C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushStacksForBspChildVisual(CBspPreComputeHelper *this, struct CVisual *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  float OpacityInternal; // xmm0_4
  float v11; // xmm2_4
  unsigned int *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v16; // [rsp+48h] [rbp+18h] BYREF

  v4 = 0;
  CBspPreComputeHelper::PushTransformForChildVisual(this, a2);
  if ( (*((_BYTE *)a2 + 92) & 0x40) != 0
    && (v16 = *((int *)a2 + 49),
        v5 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 32, &v16),
        v4 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x8Fu);
  }
  else
  {
    v6 = *((_DWORD *)a2 + 23);
    if ( (v6 & 2) != 0
      && (v16 = v6 << 18 >> 28,
          v7 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push((unsigned int *)this + 40, &v16),
          v4 = v7,
          v7 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x95u);
    }
    else if ( (*((_BYTE *)a2 + 92) & 8) != 0
           && (v16 = *((int *)a2 + 46),
               v8 = CWatermarkStack<enum MilBitmapInterpolationMode::Enum,64,2,10>::Push(
                      (unsigned int *)this + 48,
                      &v16),
               v4 = v8,
               v8 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x9Bu);
    }
    else if ( (*((_BYTE *)a2 + 92) & 0x10) != 0
           && (v16 = *((int *)a2 + 47),
               v9 = CWatermarkStack<enum MilCompositingMode::Enum,64,2,10>::Push((unsigned int *)this + 56, &v16),
               v4 = v9,
               v9 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA1u);
    }
    else
    {
      OpacityInternal = CVisual::GetOpacityInternal(a2);
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(OpacityInternal - 1.0)) & _xmm);
      if ( v11 < 0.0000011920929
        || (*(float *)&v16 = fminf(1.0, fmaxf(OpacityInternal, 0.0))
                           * *(float *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 256),
            v13 = CWatermarkStack<float,64,2,10>::Push(v12, &v16),
            v4 = v13,
            v13 >= 0) )
      {
        if ( (*((_BYTE *)a2 + 90) & 2) != 0 )
        {
          LOBYTE(v16) = 1;
          v14 = CWatermarkStack<bool,64,2,10>::Push((const void **)this + 36, &v16);
          v4 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xB0u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xAAu);
      }
    }
  }
  return v4;
}
