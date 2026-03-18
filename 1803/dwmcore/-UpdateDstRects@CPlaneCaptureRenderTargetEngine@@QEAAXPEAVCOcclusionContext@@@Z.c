/*
 * XREFs of ?UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z @ 0x18015C220
 * Callers:
 *     ?AddOcclusionInformation@CPlaneCaptureRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18016EF50 (-AddOcclusionInformation@CPlaneCaptureRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006B28 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 */

void __fastcall CPlaneCaptureRenderTargetEngine::UpdateDstRects(
        CPlaneCaptureRenderTargetEngine *this,
        struct COcclusionContext *a2)
{
  __int64 v2; // rax
  __int64 v4; // xmm1_8
  _OWORD *DestinationRect; // rax
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  _BYTE v12[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 101);
  v4 = *(_QWORD *)(v2 + 156);
  v13 = *(_OWORD *)(v2 + 140);
  v14 = v4;
  DestinationRect = (_OWORD *)COcclusionContext::GetDestinationRect((__int64)a2, (__int64)v12);
  *(_OWORD *)((char *)this + 420) = *DestinationRect;
  *(_OWORD *)((char *)this + 436) = *DestinationRect;
  v6 = *((float *)this + 113);
  if ( v6 > *((float *)this + 109) )
    *((float *)this + 109) = v6;
  v7 = *((float *)this + 114);
  if ( v7 > *((float *)this + 110) )
    *((float *)this + 110) = v7;
  v8 = *((float *)this + 115);
  v9 = *((float *)this + 111);
  if ( v9 > v8 )
  {
    *((float *)this + 111) = v8;
    v9 = v8;
  }
  v10 = *((float *)this + 116);
  v11 = *((float *)this + 112);
  if ( v11 > v10 )
  {
    *((float *)this + 112) = v10;
    v11 = v10;
    v9 = *((float *)this + 111);
  }
  if ( v9 <= *((float *)this + 109) || v11 <= *((float *)this + 110) )
  {
    *(_QWORD *)((char *)this + 444) = 0LL;
    *(_QWORD *)((char *)this + 436) = 0LL;
  }
}
