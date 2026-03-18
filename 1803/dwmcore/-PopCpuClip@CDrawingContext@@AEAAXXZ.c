/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18013D188
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18006B3F0 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A6D8 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800651F0 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180140320 (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180140364 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  bool v2; // [rsp+20h] [rbp-28h] BYREF
  struct D2D_RECT_F v3; // [rsp+28h] [rbp-20h] BYREF

  CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
    (int *)this + 112,
    &v3);
  CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 1008), &v2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 6826)
      && !CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 1008)) )
    {
      *((_BYTE *)this + 6826) = 0;
    }
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v3);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((__int64)this + 148, &v3) )
      *((_BYTE *)this + 6825) = 1;
  }
}
