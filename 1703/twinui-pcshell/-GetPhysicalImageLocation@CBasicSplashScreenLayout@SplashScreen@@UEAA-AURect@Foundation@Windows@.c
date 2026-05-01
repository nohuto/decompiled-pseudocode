/*
 * XREFs of ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180177D60
 * Callers:
 *     ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180177C80 (-GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 * Callees:
 *     ?GetImageType@CBasicSplashScreenLayout@SplashScreen@@UEAA?AW4SPLASHSCREEN_IMAGE_TYPE@@XZ @ 0x180177E90 (-GetImageType@CBasicSplashScreenLayout@SplashScreen@@UEAA-AW4SPLASHSCREEN_IMAGE_TYPE@@XZ.c)
 */

_OWORD *__fastcall SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(__int64 a1, _OWORD *a2)
{
  int ImageType; // esi
  float v5; // xmm6_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  _OWORD *result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h]

  ImageType = SplashScreen::CBasicSplashScreenLayout::GetImageType();
  v5 = (float)MulDiv(300, *(_DWORD *)(a1 + 24), 100);
  v6 = (float)MulDiv(620, *(_DWORD *)(a1 + 24), 100);
  if ( ImageType == 1 )
  {
    v5 = v5 * 0.75;
    v6 = v6 * 0.75;
  }
  else if ( !ImageType )
  {
    v5 = v5 * 0.5;
    v6 = v6 * 0.5;
  }
  v7 = *(float *)(a1 + 8);
  v8 = *(float *)(a1 + 12);
  if ( v6 < v7 )
  {
    *((float *)&v10 + 2) = v6;
    *(float *)&v10 = (float)(5 * (int)(float)((float)((float)((float)(v7 - v6) * 0.5) / 5.0) + 0.5));
  }
  else
  {
    LODWORD(v10) = 0;
    DWORD2(v10) = *(_DWORD *)(a1 + 8);
  }
  if ( v5 < v8 )
  {
    *((float *)&v10 + 3) = v5;
    *((float *)&v10 + 1) = (float)(5 * (int)(float)((float)((float)((float)(v8 - v5) * 0.5) / 5.0) + 0.5));
  }
  else
  {
    DWORD1(v10) = 0;
    HIDWORD(v10) = *(_DWORD *)(a1 + 12);
  }
  result = a2;
  *a2 = v10;
  return result;
}
