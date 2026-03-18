/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0
 * Callers:
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAVIImageSource@@_K12PEAPEAVCResource@@2M@Z @ 0x18000F1BC (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015C3A0 (-Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800A9330 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800AB220 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x18014E30C (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x180156B1C (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18015711C (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(CDrawingContext *this, struct CDrawListCache *a2)
{
  int v4; // eax
  int v5; // eax
  void *v6; // rbp
  bool v7; // si
  int updated; // eax
  unsigned int v9; // edi
  __m128 v11; // xmm2
  unsigned int v12; // [rsp+20h] [rbp-58h]
  _DWORD v13[4]; // [rsp+30h] [rbp-48h] BYREF

  if ( *((_BYTE *)this + 3040) || *((_QWORD *)this + 838) )
  {
    v11 = *(__m128 *)((char *)a2 + 44);
    v13[0] = v11.m128_i32[0];
    v13[3] = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
    v13[1] = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
    v13[2] = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
    updated = CDrawingContext::DrawSolidRectangle(this, (struct MilRectF *)v13);
    v9 = updated;
    if ( updated >= 0 )
      goto LABEL_11;
    v12 = 2756;
  }
  else
  {
    v4 = *((_DWORD *)this + 752);
    if ( !v4 )
    {
      v9 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xAC9u);
      goto LABEL_11;
    }
    if ( *(float *)(*((_QWORD *)this + 378) + 4LL * (unsigned int)(v4 - 1)) <= 0.0 )
      return 0LL;
    v5 = *((_DWORD *)this + 118);
    if ( v5 )
      v6 = (void *)(*((_QWORD *)this + 61) + 68LL * (unsigned int)(v5 - 1));
    else
      v6 = &CMILMatrix::Identity;
    v7 = 0;
    if ( *((_QWORD *)this + 405) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(this);
      v9 = updated;
      if ( updated >= 0 )
      {
        v7 = *((_BYTE *)this + 3248) == 0;
        goto LABEL_8;
      }
      v12 = 2772;
    }
    else
    {
      while ( 1 )
      {
LABEL_8:
        if ( v7 )
        {
          updated = ClipPlaneIterator::UpdateClippingPlanes((CDrawingContext *)((char *)this + 3248));
          v9 = updated;
          if ( updated < 0 )
          {
            v12 = 2783;
            goto LABEL_26;
          }
        }
        updated = CDrawListCache::Render(a2, this, v6);
        v9 = updated;
        if ( updated < 0 )
          break;
        if ( !v7 || !ClipPlaneIterator::HasMoreClipPlanes((CDrawingContext *)((char *)this + 3248)) )
          goto LABEL_11;
      }
      v12 = 2790;
    }
  }
LABEL_26:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v12);
LABEL_11:
  if ( v9 != -2003304441 )
    return v9;
  return 0LL;
}
