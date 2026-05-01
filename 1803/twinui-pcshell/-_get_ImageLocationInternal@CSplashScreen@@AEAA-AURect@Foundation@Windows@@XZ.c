/*
 * XREFs of ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18005BBCC
 * Callers:
 *     ?OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z @ 0x18005BE68 (-OnViewAdded@CSplashScreen@@QEAAXPEAUITaskWindow@@@Z.c)
 *     ?UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4UPDATE_APP_RESULT@2@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x18005D820 (-UpdateWindowsWithNewInfo@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4UPDATE_APP_RESULT@2@.c)
 *     ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x1800EFFD0 (-OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z @ 0x180138D70 (-get_ImageLocation@CSplashScreen@@UEAAJPEAURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     ?GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ @ 0x1800471F0 (-GetNativeWindow@CTaskWindow@@UEBAPEAUHWND__@@XZ.c)
 *     ?GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA?AURect@Foundation@Windows@@XZ @ 0x18005C060 (-GetPhysicalImageLocation@CBasicSplashScreenLayout@SplashScreen@@UEAA-AURect@Foundation@Windows@.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x1802FECC4 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 */

__int64 __fastcall CSplashScreen::_get_ImageLocationInternal(__int64 a1, __int64 a2)
{
  CTaskWindow **v4; // rcx
  CTaskWindow *v5; // rcx
  __int64 (__fastcall *v6)(CTaskWindow *); // rax
  __int64 NativeWindow; // rax
  __int64 v8; // rbx
  int v9; // xmm1_4
  int v10; // ebx
  int v11; // eax
  int v12; // r8d
  int v14; // eax
  int v15; // ecx
  int v16; // r8d
  int v17; // eax
  int v18; // ecx
  int v19; // r8d
  int v20; // eax
  int v21; // ecx
  int v22; // r8d
  enum DEVICE_SCALE_FACTOR LegacyModernScaleFactor; // ebx
  int v24; // eax
  int v25; // ecx
  int v26; // edx
  int v27; // eax
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  int v32; // edx
  int nNumerator; // [rsp+20h] [rbp-50h] BYREF
  int v34; // [rsp+24h] [rbp-4Ch] BYREF
  __int128 v35; // [rsp+28h] [rbp-48h]
  void **v36; // [rsp+38h] [rbp-38h] BYREF
  int v37; // [rsp+40h] [rbp-30h]
  int v38; // [rsp+44h] [rbp-2Ch]
  __int64 v39; // [rsp+48h] [rbp-28h]
  int nDenominator; // [rsp+50h] [rbp-20h]
  __int64 v41; // [rsp+58h] [rbp-18h] BYREF
  float v42; // [rsp+60h] [rbp-10h]
  float v43; // [rsp+64h] [rbp-Ch]

  v4 = *(CTaskWindow ***)(a1 + 96);
  if ( !((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v4) >> 3)
    || ((v5 = *v4,
         v6 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)v5 + 32LL),
         v6 != CTaskWindow::GetNativeWindow)
      ? (NativeWindow = ((__int64 (*)(void))v6)())
      : (NativeWindow = CTaskWindow::GetNativeWindow(v5)),
        (v8 = NativeWindow) == 0) )
  {
    v8 = *(_QWORD *)(a1 + 144);
  }
  GetSystemScaleFactorForWindow(v8, &nNumerator);
  GetOverrideScaleFactorForWindow(v8, &v34);
  v9 = *(_DWORD *)(a1 + 136);
  v36 = &SplashScreen::CBasicSplashScreenLayout::`vftable';
  v38 = v9;
  v41 = 0LL;
  v39 = 0LL;
  v37 = *(_DWORD *)(a1 + 132);
  nDenominator = nNumerator;
  SplashScreen::CBasicSplashScreenLayout::GetPhysicalImageLocation(&v36, &v41);
  v10 = nDenominator;
  *(float *)&v35 = (float)MulDiv((int)*(float *)&v41, 100, nDenominator);
  *((float *)&v35 + 1) = (float)MulDiv((int)*((float *)&v41 + 1), 100, v10);
  *((float *)&v35 + 2) = (float)MulDiv((int)v42, 100, v10);
  v11 = MulDiv((int)v43, 100, v10);
  v12 = v34;
  *((float *)&v35 + 3) = (float)v11;
  *(_OWORD *)a2 = v35;
  if ( v12 != 100 )
  {
    v14 = MulDiv((int)*(float *)a2, 100, v12);
    v15 = (int)*(float *)(a2 + 4);
    v16 = v34;
    *(float *)a2 = (float)v14;
    v17 = MulDiv(v15, 100, v16);
    v18 = (int)*(float *)(a2 + 8);
    v19 = v34;
    *(float *)(a2 + 4) = (float)v17;
    v20 = MulDiv(v18, 100, v19);
    v21 = (int)*(float *)(a2 + 12);
    v22 = v34;
    *(float *)(a2 + 8) = (float)v20;
    *(float *)(a2 + 12) = (float)MulDiv(v21, 100, v22);
  }
  if ( *(_BYTE *)(a1 + 168) )
  {
    LegacyModernScaleFactor = GetLegacyModernScaleFactor(nNumerator);
    v24 = MulDiv((int)*(float *)a2, nNumerator, LegacyModernScaleFactor);
    v25 = (int)*(float *)(a2 + 4);
    v26 = nNumerator;
    *(float *)a2 = (float)v24;
    v27 = MulDiv(v25, v26, LegacyModernScaleFactor);
    v28 = (int)*(float *)(a2 + 8);
    v29 = nNumerator;
    *(float *)(a2 + 4) = (float)v27;
    v30 = MulDiv(v28, v29, LegacyModernScaleFactor);
    v31 = (int)*(float *)(a2 + 12);
    v32 = nNumerator;
    *(float *)(a2 + 8) = (float)v30;
    *(float *)(a2 + 12) = (float)MulDiv(v31, v32, LegacyModernScaleFactor);
  }
  return a2;
}
