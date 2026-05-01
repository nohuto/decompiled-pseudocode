/*
 * XREFs of ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18005C060
 * Callers:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18005BBCC (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 * Callees:
 *     ?GetImageType@CBasicSplashScreenLayout@SplashScreen@@UEAA?AW4SPLASHSCREEN_IMAGE_TYPE@@XZ @ 0x18005C020 (-GetImageType@CBasicSplashScreenLayout@SplashScreen@@UEAA-AW4SPLASHSCREEN_IMAGE_TYPE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

_OWORD *__fastcall SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(__int64 a1, _OWORD *a2)
{
  __int64 (*v4)(void); // rax
  int ImageType; // eax
  int v6; // edi
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  _OWORD *result; // rax
  __int128 v12; // [rsp+20h] [rbp-28h]

  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v4 == (char *)SplashScreen::CBasicSplashScreenLayout::GetImageType )
    ImageType = SplashScreen::CBasicSplashScreenLayout::GetImageType(a1);
  else
    ImageType = v4();
  v6 = ImageType;
  v7 = (float)MulDiv(300, *(_DWORD *)(a1 + 24), 100);
  v8 = (float)MulDiv(620, *(_DWORD *)(a1 + 24), 100);
  if ( v6 == 1 )
  {
    v8 = v8 * 0.75;
    v7 = v7 * 0.75;
  }
  else if ( !v6 )
  {
    v8 = v8 * 0.5;
    v7 = v7 * 0.5;
  }
  v9 = *(float *)(a1 + 8);
  v10 = *(float *)(a1 + 12);
  if ( v8 >= v9 )
  {
    LODWORD(v12) = 0;
    DWORD2(v12) = *(_DWORD *)(a1 + 8);
  }
  else
  {
    *((float *)&v12 + 2) = v8;
    *(float *)&v12 = (float)(5 * (int)(float)((float)((float)((float)(v9 - v8) * 0.5) / 5.0) + 0.5));
  }
  if ( v7 >= v10 )
  {
    DWORD1(v12) = 0;
    HIDWORD(v12) = *(_DWORD *)(a1 + 12);
  }
  else
  {
    *((float *)&v12 + 3) = v7;
    *((float *)&v12 + 1) = (float)(5 * (int)(float)((float)((float)((float)(v10 - v7) * 0.5) / 5.0) + 0.5));
  }
  result = a2;
  *a2 = v12;
  return result;
}
