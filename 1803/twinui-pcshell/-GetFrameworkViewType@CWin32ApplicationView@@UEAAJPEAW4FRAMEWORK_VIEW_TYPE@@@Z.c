/*
 * XREFs of ?GetFrameworkViewType@CWin32ApplicationView@@UEAAJPEAW4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18002A4B0
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180021470 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z @ 0x18002A470 (-GetWindow@CWin32ApplicationView@@UEAAJPEAPEAUHWND__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801408FC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32@@@wil@@CAX_NW4Repor.c)
 */

__int64 __fastcall CWin32ApplicationView::GetFrameworkViewType(
        CWin32ApplicationView *this,
        enum FRAMEWORK_VIEW_TYPE *a2)
{
  int Window; // eax
  char v4; // bl
  unsigned int v5; // edi
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND hWnd; // [rsp+30h] [rbp+8h] BYREF

  Window = CWin32ApplicationView::GetWindow((CWin32ApplicationView *)((char *)this + 144), &hWnd);
  v4 = 0;
  v5 = Window;
  if ( Window < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2FC,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)Window,
      v7);
    return v5;
  }
  else
  {
    if ( GetPropW(hWnd, L"Windows.Graphics.Holographic.HolographicSpace") )
    {
      wil::Feature<__WilFeatureTraits_Feature_HolographicWin32>::ReportUsageToService();
      v4 = 1;
    }
    *(_DWORD *)a2 = v4 != 0 ? 1 : 6;
    return 0LL;
  }
}
