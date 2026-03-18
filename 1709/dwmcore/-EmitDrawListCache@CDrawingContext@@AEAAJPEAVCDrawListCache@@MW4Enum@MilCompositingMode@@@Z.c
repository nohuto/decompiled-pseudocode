/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18003E988
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18003EA78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EDB8 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 * Callees:
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800237F0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18013F330 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18014AA4C (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18014B088 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(__int64 a1, __int64 a2, float a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  int v7; // eax
  struct CMILMatrix *v8; // r14
  bool v9; // bp
  float v10; // xmm3_4
  int v11; // eax
  int updated; // eax
  int v14; // eax
  __m128 v15; // xmm2
  int v16; // eax
  _DWORD v17[4]; // [rsp+30h] [rbp-68h] BYREF

  v3 = 0;
  v6 = 0;
  if ( *(_BYTE *)(a1 + 3136) || *(_QWORD *)(a1 + 6768) )
  {
    v15 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 44));
    v17[0] = v15.m128_i32[0];
    v17[3] = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
    v17[1] = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
    v17[2] = _mm_shuffle_ps(v15, v15, 170).m128_u32[0];
    v16 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a1, (struct MilRectF *)v17);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x960u);
  }
  else if ( a3 > 0.0 )
  {
    v7 = *(_DWORD *)(a1 + 480);
    if ( v7 )
      v8 = (struct CMILMatrix *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v7 - 1));
    else
      v8 = (struct CMILMatrix *)&CMILMatrix::Identity;
    v9 = 0;
    if ( *(_QWORD *)(a1 + 3336) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes((CDrawingContext *)a1);
      v6 = updated;
      if ( updated >= 0 )
      {
        v9 = *(_BYTE *)(a1 + 3344) == 0;
        goto LABEL_7;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x96Du);
    }
    else
    {
      while ( 1 )
      {
LABEL_7:
        if ( v9 )
        {
          v14 = ClipPlaneIterator::UpdateClippingPlanes((ClipPlaneIterator *)(a1 + 3344));
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x978u);
            goto LABEL_12;
          }
        }
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 1168LL) ? FLOAT_1_0 : a3;
        v11 = CDrawListCache::Render(a2, (CDrawingContext *)a1, v8, v10);
        v6 = v11;
        if ( v11 < 0 )
          break;
        if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes((ClipPlaneIterator *)(a1 + 3344)) )
          goto LABEL_12;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x97Fu);
    }
  }
LABEL_12:
  if ( v6 != -2003304441 )
    return v6;
  return v3;
}
