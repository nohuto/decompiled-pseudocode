/*
 * XREFs of ?UpdateDstRects@CPlaneCaptureRenderTargetEngine@@QEAAXPEAVCOcclusionContext@@@Z @ 0x180139E10
 * Callers:
 *     ?AddOcclusionInformation@CPlaneCaptureRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180146E60 (-AddOcclusionInformation@CPlaneCaptureRenderTarget@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D18 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
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
  float v9; // xmm1_4
  _BYTE v10[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)a2 + 101);
  v4 = *(_QWORD *)(v2 + 156);
  v11 = *(_OWORD *)(v2 + 140);
  v12 = v4;
  DestinationRect = (_OWORD *)COcclusionContext::GetDestinationRect((__int64)a2, (__int64)v10);
  *(_OWORD *)((char *)this + 364) = *DestinationRect;
  *(_OWORD *)((char *)this + 380) = *DestinationRect;
  v6 = *((float *)this + 99);
  if ( v6 > *((float *)this + 95) )
    *((float *)this + 95) = v6;
  v7 = *((float *)this + 100);
  if ( v7 > *((float *)this + 96) )
    *((float *)this + 96) = v7;
  v8 = *((float *)this + 101);
  if ( *((float *)this + 97) > v8 )
    *((float *)this + 97) = v8;
  v9 = *((float *)this + 102);
  if ( *((float *)this + 98) > v9 )
    *((float *)this + 98) = v9;
  if ( *((float *)this + 97) <= *((float *)this + 95) || *((float *)this + 98) <= *((float *)this + 96) )
  {
    *(_QWORD *)((char *)this + 388) = 0LL;
    *(_QWORD *)((char *)this + 380) = 0LL;
  }
}
