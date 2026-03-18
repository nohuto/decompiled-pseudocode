/*
 * XREFs of ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18006CFF0
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006D0EC (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIImageSource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D124 (-DrawPrivateCompositorBufferAsDrawList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorBuffer@@0.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009BA00 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x180163308 (-UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18017389C (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180173F08 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 */

__int64 __fastcall CDrawingContext::EmitDrawListCache(__int64 a1, __int64 a2, float a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // edi
  int v7; // eax
  void *v8; // r15
  bool v9; // r14
  ClipPlaneIterator *v10; // rbp
  int v11; // eax
  int updated; // eax
  int v14; // eax
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-78h] BYREF

  v3 = 0;
  v6 = 0;
  if ( *(_BYTE *)(a1 + 3136) || *(_QWORD *)(a1 + 6768) )
  {
    v16 = *(_OWORD *)(a2 + 44);
    v15 = CDrawingContext::DrawSolidRectangle((CDrawingContext *)a1, (struct MilRectF *)&v16, &xmmword_18023B9C8);
    v6 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x8E8u);
  }
  else if ( a3 > 0.0 )
  {
    v7 = *(_DWORD *)(a1 + 480);
    if ( v7 )
      v8 = (void *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v7 - 1));
    else
      v8 = &CMILMatrix::Identity;
    v9 = 0;
    if ( *(_QWORD *)(a1 + 3336) )
    {
      updated = CDrawingContext::UpdateBspCurrentPolygonClippingPlanes((CDrawingContext *)a1);
      v6 = updated;
      if ( updated >= 0 )
      {
        v10 = (ClipPlaneIterator *)(a1 + 3344);
        v9 = *(_BYTE *)(a1 + 3344) == 0;
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x8F5u);
    }
    else
    {
      v10 = (ClipPlaneIterator *)(a1 + 3344);
      while ( 1 )
      {
LABEL_8:
        if ( v9 )
        {
          v14 = ClipPlaneIterator::UpdateClippingPlanes(v10);
          v6 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x900u);
            goto LABEL_11;
          }
        }
        v11 = CDrawListCache::Render(a2, a1, v8);
        v6 = v11;
        if ( v11 < 0 )
          break;
        if ( !v9 || !ClipPlaneIterator::HasMoreClipPlanes(v10) )
          goto LABEL_11;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x907u);
    }
  }
LABEL_11:
  if ( v6 != -2003304441 )
    return v6;
  return v3;
}
