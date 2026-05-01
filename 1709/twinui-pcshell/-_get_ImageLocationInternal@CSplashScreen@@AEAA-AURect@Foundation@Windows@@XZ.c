/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18007297C
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x180072024 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18007249C (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180072710 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1801C361C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x1801C3CE0 (-GetRelativeImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

float *__fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, float *a2)
{
  __int64 v4; // rsi
  int v5; // xmm1_4
  int v6; // eax
  int v7; // ecx
  int v8; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // r8d
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // ebx
  int v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  void **v26; // [rsp+20h] [rbp-20h] BYREF
  int v27; // [rsp+28h] [rbp-18h]
  int v28; // [rsp+2Ch] [rbp-14h]
  __int64 v29; // [rsp+30h] [rbp-10h]
  int v30; // [rsp+38h] [rbp-8h]
  int nNumerator; // [rsp+60h] [rbp+20h] BYREF
  int nDenominator; // [rsp+68h] [rbp+28h] BYREF
  __int64 v33; // [rsp+70h] [rbp+30h]

  if ( !((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3)
    || (v4 = (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 104) + 32LL))(**(_QWORD **)(a1 + 104))) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 152);
  }
  GetSystemScaleFactorForWindow(v4, &nNumerator);
  GetOverrideScaleFactorForWindow(v4, &nDenominator);
  v5 = *(_DWORD *)(a1 + 144);
  v26 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v28 = v5;
  v33 = 0LL;
  v29 = 0LL;
  v27 = *(_DWORD *)(a1 + 140);
  v30 = nNumerator;
  SplashScreen::CBasicSplashScreenLayout::GetRelativeImageLocation(&v26, a2);
  if ( nDenominator != 100 )
  {
    v6 = MulDiv((int)*a2, 100, nDenominator);
    v7 = (int)a2[1];
    v8 = nDenominator;
    *a2 = (float)v6;
    v9 = MulDiv(v7, 100, v8);
    v10 = (int)a2[2];
    v11 = nDenominator;
    a2[1] = (float)v9;
    v12 = MulDiv(v10, 100, v11);
    v13 = (int)a2[3];
    v14 = nDenominator;
    a2[2] = (float)v12;
    a2[3] = (float)MulDiv(v13, 100, v14);
  }
  if ( *(_BYTE *)(a1 + 176) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(nNumerator);
    v16 = MulDiv((int)*a2, nNumerator, LegacyModernScaleFactor);
    v17 = (int)a2[1];
    v18 = nNumerator;
    *a2 = (float)v16;
    v19 = MulDiv(v17, v18, LegacyModernScaleFactor);
    v20 = (int)a2[2];
    v21 = nNumerator;
    a2[1] = (float)v19;
    v22 = MulDiv(v20, v21, LegacyModernScaleFactor);
    v23 = (int)a2[3];
    v24 = nNumerator;
    a2[2] = (float)v22;
    a2[3] = (float)MulDiv(v23, v24, LegacyModernScaleFactor);
  }
  return a2;
}
