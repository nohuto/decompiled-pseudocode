/*
 * XREFs of ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18012CFA4
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800A6380 (-Pop@CDrawingContext@@UEAAJXZ.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006FF1C (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF3E8 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180134910 (-HasAnyWorldAxisAlignedRectangleCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z @ 0x180134954 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEA_N@Z.c)
 */

void __fastcall CDrawingContext::PopCpuClip(CDrawingContext *this)
{
  bool v2; // [rsp+20h] [rbp-28h] BYREF
  __int128 v3; // [rsp+28h] [rbp-20h] BYREF

  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 110, &v3);
  CScopedClipStack::PopCpuClipFromScope((CDrawingContext *)((char *)this + 912), &v2);
  if ( v2 )
  {
    if ( *((_BYTE *)this + 6770)
      && !CScopedClipStack::HasAnyWorldAxisAlignedRectangleCpuClipsInScope((CDrawingContext *)((char *)this + 912)) )
    {
      *((_BYTE *)this + 6770) = 0;
    }
    CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&v3);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain((float *)this + 39, (float *)&v3) )
      *((_BYTE *)this + 6769) = 1;
  }
}
