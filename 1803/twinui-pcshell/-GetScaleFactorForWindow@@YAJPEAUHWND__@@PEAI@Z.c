/*
 * XREFs of ?GetScaleFactorForWindow@@YAJPEAUHWND__@@PEAI@Z @ 0x180136EDC
 * Callers:
 *     ?_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA?AUtagRECT@@U2@@Z @ 0x180137D2C (-_ComputePillarBoxedApplicationRect@CFrameApplicationPresentation@@AEAA-AUtagRECT@@U2@@Z.c)
 *     ?GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z @ 0x1802B68FC (-GetAppDataForView@SizeConversionViewInfo@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetScaleFactorForWindow(HWND a1, unsigned int *a2)
{
  int SystemScaleFactorForWindow; // r8d
  int v6; // [rsp+38h] [rbp+10h] BYREF
  int v7; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 100;
  SystemScaleFactorForWindow = GetSystemScaleFactorForWindow(a1, &v7);
  if ( SystemScaleFactorForWindow >= 0 )
  {
    SystemScaleFactorForWindow = GetOverrideScaleFactorForWindow(a1, &v6);
    if ( SystemScaleFactorForWindow >= 0 )
      *a2 = v7 * v6 / 0x64u;
  }
  return (unsigned int)SystemScaleFactorForWindow;
}
