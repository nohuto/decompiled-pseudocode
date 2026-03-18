/*
 * XREFs of ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800B41FC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801826F0 (-PerformDelayedSnapshot@CCachedVisualImage@@QEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089E08 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008A998 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800B4480 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800B4780 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z @ 0x1800B48C4 (-RemoveInvalidTargets@CCachedVisualImage@@AEAA_NII@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x1800B4D20 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ @ 0x1800B61C0 (-Destruct@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAXXZ.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x1800B6694 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?RemoveAt@?$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z @ 0x1800C7E7C (-RemoveAt@-$DynArray@URenderTargetBitmapInfo@CCachedVisualImage@@$00@@QEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::Snapshot(CCachedVisualImage *this, const struct tagRECT *a2)
{
  unsigned int v2; // esi
  int Bounds; // eax
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v7; // r14d
  _QWORD *v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  CRenderTargetBitmap *v13; // rcx
  struct IBitmapSource *v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  float v18; // [rsp+A0h] [rbp+40h] BYREF
  struct _LUID v19; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( (int)CCachedVisualImage::GetSnapshotBitmapSourceInfo(this, a2, (struct BitmapSourceInfo *)&v15) < 0
    || (int)CCachedVisualImage::GetBitmapSource(
              (CCachedVisualImage *)((char *)this + 8),
              &v14,
              (const struct BitmapSourceInfo *)&v15) < 0 )
  {
    *((_BYTE *)this + 376) = 1;
  }
  else
  {
    Bounds = CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, (char *)this + 400);
    v2 = Bounds;
    if ( Bounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, 0x7DDu);
    }
    else
    {
      v5 = (float)(*((float *)this + 103) - *((float *)this + 101)) + 6291456.25;
      v6 = *((float *)this + 102) - *((float *)this + 100);
      v18 = v5;
      *(float *)&v19.LowPart = v6 + 6291456.25;
      CCachedVisualImage::RemoveInvalidTargets(this, (int)(v19.LowPart << 10) >> 11, (int)(LODWORD(v5) << 10) >> 11);
      v7 = *((_DWORD *)this + 66);
      if ( v7 > 0 )
      {
        v8 = (_QWORD *)((char *)this + 240);
        do
        {
          v9 = (unsigned int)(v7 - 1);
          v10 = *v8 + 48 * v9;
          if ( *(_BYTE *)(v10 + 44)
            || !(unsigned __int8)CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(
                                   *v8 + 48 * v9,
                                   v15,
                                   (unsigned int)v16)
            && ((v13 = *(CRenderTargetBitmap **)(v10 + 8),
                 v18 = 0.0,
                 (int)CRenderTargetBitmap::GetDeviceInfo(v13, &v19, (struct DisplayId *)&v18) < 0)
             || !DisplayId::IsSpecific((DisplayId *)&v18))
            && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 144LL) + 104LL))(*(_QWORD *)(v10 + 8) + 144LL) )
          {
            CCachedVisualImage::RenderTargetBitmapInfo::Destruct((CCachedVisualImage::RenderTargetBitmapInfo *)v10);
            DynArray<CCachedVisualImage::RenderTargetBitmapInfo,1>::RemoveAt((char *)this + 240, (unsigned int)v9);
          }
          --v7;
        }
        while ( v7 > 0 );
      }
      CCachedVisualImage::UnRegisterNotifiers((CCachedVisualImage *)((char *)this + 16));
      v11 = *((_QWORD *)this + 4);
      *((_BYTE *)this + 378) = 1;
      *(_BYTE *)(v11 + 321) = 1;
    }
  }
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)&v14);
  return v2;
}
