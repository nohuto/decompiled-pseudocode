/*
 * XREFs of ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1801C3CE0
 * Callers:
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18007297C (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 * Callees:
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1801C3DC0 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

_OWORD *__fastcall SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(__int64 a1, _OWORD *a2)
{
  __int64 v3; // rbx
  __m128i v4; // xmm0
  _OWORD *result; // rax
  __int128 v6; // [rsp+20h] [rbp-38h]
  float v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1;
  SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(a1, v7);
  LODWORD(v3) = *(_DWORD *)(v3 + 24);
  *(float *)&v6 = (float)MulDiv((int)v7[0], 100, v3);
  *((float *)&v6 + 1) = (float)MulDiv((int)v7[1], 100, v3);
  *((float *)&v6 + 2) = (float)MulDiv((int)v7[2], 100, v3);
  v4 = _mm_cvtsi32_si128(MulDiv((int)v7[3], 100, v3));
  result = a2;
  HIDWORD(v6) = _mm_cvtepi32_ps(v4).m128_u32[0];
  *a2 = v6;
  return result;
}
