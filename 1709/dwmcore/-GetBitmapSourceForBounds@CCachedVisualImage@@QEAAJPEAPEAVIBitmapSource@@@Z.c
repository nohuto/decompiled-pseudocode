/*
 * XREFs of ?GetBitmapSourceForBounds@CCachedVisualImage@@QEAAJPEAPEAVIBitmapSource@@@Z @ 0x18008E114
 * Callers:
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x18008E1B0 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008E8C0 (-GetBounds@CCachedVisualImage@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRe.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090284 (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z @ 0x1800BEF60 (-Create@CBoundsBitmap@@SAJPEAVCImageSource@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CCachedVisualImage::GetBitmapSourceForBounds(CCachedVisualImage *this, struct IBitmapSource **a2)
{
  CMILCOMBase **v3; // rdi
  signed int Bounds; // eax
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
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80004001, 0x5E9u);
    return v5;
  }
  v3 = (CMILCOMBase **)((char *)this + 368);
  if ( *((_QWORD *)this + 46) )
  {
    Bounds = CCachedVisualImage::GetBounds((char *)this + 8, 0LL, 0LL, v11);
    v5 = Bounds;
    if ( Bounds < 0 )
    {
      v9 = 1531;
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
      v9 = 1522;
LABEL_12:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, Bounds, v9);
      return v5;
    }
  }
  Bounds = CMILCOMBase::InternalQueryInterface(*v3, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, (void **)a2);
  v5 = Bounds;
  if ( Bounds < 0 )
  {
    v9 = 1538;
    goto LABEL_12;
  }
  return v5;
}
