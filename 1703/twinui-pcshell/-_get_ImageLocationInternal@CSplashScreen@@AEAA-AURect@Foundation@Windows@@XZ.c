/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18006FC5C
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18006F3B8 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18006F758 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x18006F9E0 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180177418 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x180177C80 (-GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, float *a2)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // eax
  int v12; // ecx
  int v13; // r8d
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // ecx
  int v23; // edx
  _QWORD v25[3]; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+38h] [rbp-8h]
  int nNumerator; // [rsp+60h] [rbp+20h] BYREF
  int nDenominator; // [rsp+68h] [rbp+28h] BYREF
  __int64 v29; // [rsp+70h] [rbp+30h]

  if ( !((__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 3)
    || (v4 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 88) + 32LL))(**(_QWORD **)(a1 + 88))) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 136);
  }
  GetSystemScaleFactorForWindow(v4, &nNumerator);
  GetOverrideScaleFactorForWindow(v4, &nDenominator);
  v25[0] = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v29 = 0LL;
  v25[2] = 0LL;
  v25[1] = *(_QWORD *)(a1 + 124);
  v26 = nNumerator;
  SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(v25, a2);
  if ( nDenominator != 100 )
  {
    v5 = MulDiv((int)*a2, 100, nDenominator);
    v6 = (int)a2[1];
    v7 = nDenominator;
    *a2 = (float)v5;
    v8 = MulDiv(v6, 100, v7);
    v9 = (int)a2[2];
    v10 = nDenominator;
    a2[1] = (float)v8;
    v11 = MulDiv(v9, 100, v10);
    v12 = (int)a2[3];
    v13 = nDenominator;
    a2[2] = (float)v11;
    a2[3] = (float)MulDiv(v12, 100, v13);
  }
  if ( *(_BYTE *)(a1 + 160) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(nNumerator);
    v15 = MulDiv((int)*a2, nNumerator, LegacyModernScaleFactor);
    v16 = (int)a2[1];
    v17 = nNumerator;
    *a2 = (float)v15;
    v18 = MulDiv(v16, v17, LegacyModernScaleFactor);
    v19 = (int)a2[2];
    v20 = nNumerator;
    a2[1] = (float)v18;
    v21 = MulDiv(v19, v20, LegacyModernScaleFactor);
    v22 = (int)a2[3];
    v23 = nNumerator;
    a2[2] = (float)v21;
    a2[3] = (float)MulDiv(v22, v23, LegacyModernScaleFactor);
  }
  return a2;
}
