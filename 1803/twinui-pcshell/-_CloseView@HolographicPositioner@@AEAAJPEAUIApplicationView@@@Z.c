/*
 * XREFs of ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B1338
 * Callers:
 *     ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1801AF070 (-HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1801B1868 (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Windows@@@Z @ 0x1801B2CA0 (-_OnShellStateChanged@HolographicPositioner@@AEAAJW4ShellState@Holographic@Shell@Internal@Window.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18030535C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_CloseView(HolographicPositioner *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 (__fastcall *v4)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  HRESULT v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *punk; // [rsp+70h] [rbp+30h] BYREF
  void *ppvOut; // [rsp+78h] [rbp+38h] BYREF

  ppvOut = 0LL;
  v3 = (RTL_SRWLOCK *)((char *)this + 8);
  punk = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  v4 = (__int64 (__fastcall *)(RTL_SRWLOCK *, struct _GUID *, void **))*((_QWORD *)v3->Ptr + 4);
  if ( v4 == CWRLObjectWithGITSite::GetSite )
    CWRLObjectWithGITSite::GetSite(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  else
    v4(v3, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(punk, &stru_1803A9278, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)&punk);
  if ( v5 >= 0 )
  {
    v8 = ApplicationViewHelpers::CloseView(a2, ppvOut, 10LL);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v5 = 0;
      goto LABEL_10;
    }
    v6 = (unsigned int)v8;
    v7 = 2017LL;
  }
  else
  {
    v6 = (unsigned int)v5;
    v7 = 2010LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)v6);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v5;
}
