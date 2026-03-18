/*
 * XREFs of ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x180048340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18006D550 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z @ 0x18007D36C (-GetBitmapCurrentValue@@YAJPEAVCImageSource@@PEBUBitmapSourceInfo@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x18009F054 (-UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1801649E0 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180164A80 (-GetD2DBitmapRealizationForContextOwner@CHwndBitmap@@UEAAJPEAVID2DContextOwner@@PEAPEAUID2D1Bitm.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ?GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180046FB0 (-GetLegacyBitmapSource@CRenderTargetBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x180047764 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitmap@@@Z @ 0x180047874 (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAVCRenderTargetBitma.c)
 *     ??$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z @ 0x18004B1C0 (--$ReleaseInterfaceNoNULL@VCRenderTargetBitmap@@@@YAXPEAVCRenderTargetBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x18007F234 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x1800B76D8 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800B7768 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124 (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSource(
        CCachedVisualImage *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  CDisplaySet *v3; // rsi
  struct CDisplay *v4; // rdi
  __int64 v8; // r10
  int BitmapSourceForBounds; // eax
  unsigned int v10; // ebx
  unsigned int v12; // r8d
  int v13; // eax
  CRenderTargetBitmap *v14; // rcx
  __int64 (__fastcall *v15)(CRenderTargetBitmap *, struct IBitmapSource **, const struct BitmapSourceInfo *); // rax
  int LegacyBitmapSource; // eax
  struct IBitmapSource *v17; // rax
  int CurrentDisplaySet; // eax
  int PrimaryDisplay; // eax
  __int64 v20; // [rsp+30h] [rbp-10h] BYREF
  struct CDisplay *v21; // [rsp+88h] [rbp+48h] BYREF
  struct IBitmapSource *v22; // [rsp+90h] [rbp+50h] BYREF
  CDisplaySet *v23; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  *a2 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  if ( a3 )
  {
    v8 = *(_QWORD *)a3;
    if ( *(_QWORD *)a3 == __PAIR64__(g_luidZero.HighPart, 0) )
    {
      BitmapSourceForBounds = CCachedVisualImage::GetBitmapSourceForBounds((CCachedVisualImage *)((char *)this - 8), a2);
      v10 = BitmapSourceForBounds;
      if ( BitmapSourceForBounds < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, BitmapSourceForBounds, 0x5B8u);
      goto LABEL_5;
    }
    v12 = *((_DWORD *)a3 + 2);
    goto LABEL_7;
  }
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v23);
  v10 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, CurrentDisplaySet, 0x5C7u);
    v3 = v23;
  }
  else
  {
    v3 = v23;
    PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v23, &v21);
    v10 = PrimaryDisplay;
    if ( PrimaryDisplay >= 0 )
    {
      v4 = v21;
      v12 = *(_DWORD *)CDisplay::GetDisplayId(v21, &v21);
LABEL_7:
      v13 = CCachedVisualImage::EnsureRenderTargetBitmap((__int64)this - 8, v8, v12, &v20);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, v13, 0x5CFu);
      }
      else if ( v20
             && ((v14 = (CRenderTargetBitmap *)(v20 + 16),
                  v15 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)(v20 + 16) + 72LL),
                  v15 != CRenderTargetBitmap::GetLegacyBitmapSource)
               ? (LegacyBitmapSource = v15(v14, &v22, a3))
               : (LegacyBitmapSource = CRenderTargetBitmap::GetLegacyBitmapSource(v14, &v22, a3)),
                 v10 = LegacyBitmapSource,
                 LegacyBitmapSource < 0) )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, LegacyBitmapSource, 0x5D8u);
      }
      else
      {
        v17 = v22;
        v22 = 0LL;
        *a2 = v17;
      }
      goto LABEL_13;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801F3618, 1u, PrimaryDisplay, 0x5C9u);
    v4 = v21;
  }
LABEL_13:
  if ( v4 )
    (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
  if ( v3 )
    CDisplaySet::Release(v3);
LABEL_5:
  ReleaseInterfaceNoNULL<CRenderTargetBitmap>(v20);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v22);
  return v10;
}
