/*
 * XREFs of ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18008E1B0
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180167D10 (-GetBitmapSource@CHwndBitmap@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180010F74 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18008D904 (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18008E114 (-GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z.c)
 *     ?GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z @ 0x180098A60 (-GetPrimaryDisplay@CDisplaySet@@QEBAJPEAPEBVCDisplay@@@Z.c)
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180098A94 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSource(
        CCachedVisualImage *this,
        struct IBitmapSource **a2,
        const struct BitmapSourceInfo *a3)
{
  CDisplaySet *v3; // rsi
  struct CDisplay *v4; // rdi
  __int64 v8; // r10
  unsigned int *DisplayId; // rax
  signed int v10; // eax
  unsigned int v11; // ebx
  signed int v12; // eax
  struct IBitmapSource *v13; // rax
  signed int BitmapSourceForBounds; // eax
  signed int CurrentDisplaySet; // eax
  signed int PrimaryDisplay; // eax
  __int64 v18; // [rsp+30h] [rbp-10h] BYREF
  struct CDisplay *v19; // [rsp+88h] [rbp+48h] BYREF
  struct IBitmapSource *v20; // [rsp+90h] [rbp+50h] BYREF
  CDisplaySet *v21; // [rsp+98h] [rbp+58h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  *a2 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  if ( !a3 )
  {
    CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, &v21);
    v11 = CurrentDisplaySet;
    if ( CurrentDisplaySet < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, CurrentDisplaySet, 0x599u);
      v3 = v21;
    }
    else
    {
      v3 = v21;
      PrimaryDisplay = CDisplaySet::GetPrimaryDisplay(v21, &v19);
      v11 = PrimaryDisplay;
      if ( PrimaryDisplay >= 0 )
      {
        v4 = v19;
        DisplayId = CDisplay::GetDisplayId((__int64)v19, &v19);
LABEL_4:
        v10 = CCachedVisualImage::EnsureRenderTargetBitmapInfo((__int64)this - 8, v8, *DisplayId, &v18);
        v11 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, v10, 0x5A1u);
        }
        else if ( v18
               && (v12 = (*(__int64 (__fastcall **)(__int64, struct IBitmapSource **, const struct BitmapSourceInfo *))(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 16LL) + 64LL))(
                           *(_QWORD *)(v18 + 8) + 16LL,
                           &v20,
                           a3),
                   v11 = v12,
                   v12 < 0) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, v12, 0x5A8u);
        }
        else
        {
          v13 = v20;
          v20 = 0LL;
          *a2 = v13;
        }
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, PrimaryDisplay, 0x59Bu);
      v4 = v19;
    }
LABEL_8:
    if ( v4 )
      (*(void (__fastcall **)(struct CDisplay *))(*(_QWORD *)v4 + 8LL))(v4);
    if ( v3 )
      CDisplaySet::Release(v3);
    goto LABEL_12;
  }
  v8 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 != __PAIR64__(g_luidZero.HighPart, 0) )
  {
    DisplayId = (unsigned int *)((char *)a3 + 8);
    goto LABEL_4;
  }
  BitmapSourceForBounds = CCachedVisualImage::GetBitmapSourceForBounds((CCachedVisualImage *)((char *)this - 8), a2);
  v11 = BitmapSourceForBounds;
  if ( BitmapSourceForBounds < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_1802024DC, 1u, BitmapSourceForBounds, 0x58Cu);
LABEL_12:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>((__int64)v20);
  return v11;
}
