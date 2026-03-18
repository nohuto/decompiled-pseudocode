/*
 * XREFs of ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18001C4A4
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800B4480 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x18001C534 (-Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078DDC (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4BB0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSourceForBounds(CCachedVisualImage *this, struct IBitmapSource **a2)
{
  CMILCOMBase **v3; // rdi
  int Bounds; // eax
  unsigned int v5; // ebx
  CMILCOMBase *v7; // rcx
  float v8; // xmm0_4
  unsigned int v9; // [rsp+20h] [rbp-38h]
  float v10; // [rsp+30h] [rbp-28h]
  float v11[4]; // [rsp+38h] [rbp-20h] BYREF

  *a2 = 0LL;
  if ( *((_DWORD *)this + 50) )
  {
    v5 = -2147467263;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147467263, 0x5E4u);
    return v5;
  }
  v3 = (CMILCOMBase **)((char *)this + 368);
  if ( *((_QWORD *)this + 46) )
  {
    Bounds = CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, v11);
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      v9 = 1526;
      goto LABEL_12;
    }
    v7 = *v3;
    v8 = (float)(v11[3] - v11[1]) + 6291456.25;
    v10 = (float)(v11[2] - v11[0]) + 6291456.25;
    *((_DWORD *)v7 + 7) = (int)(LODWORD(v10) << 10) >> 11;
    *((_DWORD *)v7 + 6) = (int)(LODWORD(v8) << 10) >> 11;
  }
  else
  {
    Bounds = CBoundsBitmap::Create(this, (struct CBoundsBitmap **)this + 46);
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      v9 = 1517;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Bounds, v9);
      return v5;
    }
  }
  Bounds = CMILCOMBase::InternalQueryInterface(*v3, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, (void **)a2);
  v5 = Bounds;
  if ( Bounds < 0 )
  {
    v9 = 1533;
    goto LABEL_12;
  }
  return v5;
}
