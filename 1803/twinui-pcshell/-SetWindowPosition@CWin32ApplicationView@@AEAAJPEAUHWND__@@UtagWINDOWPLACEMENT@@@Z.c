/*
 * XREFs of ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@UtagWINDOWPLACEMENT@@@Z @ 0x180140E58
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1801409F0 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800198CC (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x180092E5C (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator() @ 0x18013E260 (_lambda_3862d1887d3f5208accb0e0621fd5fc4_--operator().c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_AsyncWindowPlacement@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801408A0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_AsyncWindowPlacement@@@wil@@CAX_NW4R.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::SetWindowPosition(
        CWin32ApplicationView *this,
        HWND a2,
        struct tagWINDOWPLACEMENT *a3)
{
  const char *v5; // r9
  __int64 v6; // rdx
  volatile int *v8; // rdx
  int v9; // ebx
  __int64 v10; // [rsp+30h] [rbp-28h] BYREF
  volatile int *v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v12[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v12[1] = (__int64 *)-2LL;
  wil::Feature<__WilFeatureTraits_Feature_AsyncWindowPlacement>::ReportUsageToService(
    (__int64)this,
    (__int64)a2,
    (__int64)a3);
  a3->flags |= 4u;
  if ( !SetWindowPlacement(a2, a3) )
  {
    if ( GetLastError() != 5 )
    {
      v6 = 896LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v6,
               (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v5);
    }
    if ( a3->showCmd == 1 )
    {
LABEL_16:
      if ( !PostMessageW(a2, 0x112u, 0xF120uLL, 0LL) )
      {
        v6 = 886LL;
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)v6,
                 (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                 v5);
      }
      return 0LL;
    }
    if ( a3->showCmd != 3 )
    {
      if ( a3->showCmd != 4 )
      {
        if ( a3->showCmd == 6 )
        {
          if ( !PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
          {
            v6 = 881LL;
            return wil::details::in1diag3::Return_GetLastError(
                     retaddr,
                     (void *)v6,
                     (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                     v5);
          }
          return 0LL;
        }
        if ( a3->showCmd != 9 )
        {
          v6 = 889LL;
          return wil::details::in1diag3::Return_GetLastError(
                   retaddr,
                   (void *)v6,
                   (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
                   v5);
        }
      }
      goto LABEL_16;
    }
    v10 = 0LL;
    v12[0] = &v10;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v11);
    v8 = v11;
    if ( v11 )
      lambda_3862d1887d3f5208accb0e0621fd5fc4_::operator()(v12, (__int64)v11);
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease((__int64 *)&v11, v8);
    v9 = (*(__int64 (__fastcall **)(__int64, HWND, __int64))(*(_QWORD *)v10 + 32LL))(v10, a2, 5LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36D,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
