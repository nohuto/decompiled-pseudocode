/*
 * XREFs of _lambda_247c8fcfe50b088ef26dcb1d3d4c79f5_::operator() @ 0x1800935A4
 * Callers:
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180062FE8 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x180062EB8 (-IsTraySearchBoxVisible@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ?GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z @ 0x1800647E4 (-GetEdgeUIManager@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAPEAUIEdgeUiManager@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_247c8fcfe50b088ef26dcb1d3d4c79f5_::operator()(__int64 a1)
{
  int IsTraySearchBoxVisible; // eax
  unsigned int v3; // ebx
  int EdgeUIManager; // eax
  __int64 v6; // rdx
  bool v7; // [rsp+20h] [rbp-38h] BYREF
  struct IEdgeUiManager *v8[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v9[4]; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+3Ch] [rbp-1Ch]
  int v11; // [rsp+44h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v8[1] = (struct IEdgeUiManager *)-2LL;
  IsTraySearchBoxVisible = CortanaDesktopExperienceView::IsTraySearchBoxVisible(
                             *(CortanaDesktopExperienceView **)a1,
                             **(HMONITOR **)(a1 + 8),
                             &v7);
  v3 = IsTraySearchBoxVisible;
  if ( IsTraySearchBoxVisible < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x908,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsTraySearchBoxVisible);
  }
  else
  {
    if ( !v7 )
      return 0LL;
    v8[0] = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
    EdgeUIManager = CortanaDesktopExperienceView::GetEdgeUIManager(
                      *(CortanaDesktopExperienceView **)a1,
                      **(HMONITOR **)(a1 + 8),
                      v8);
    v3 = EdgeUIManager;
    if ( EdgeUIManager < 0 )
    {
      v6 = 2318LL;
    }
    else
    {
      EdgeUIManager = (*(__int64 (__fastcall **)(struct IEdgeUiManager *, _BYTE *))(*(_QWORD *)v8[0] + 112LL))(
                        v8[0],
                        v9);
      v3 = EdgeUIManager;
      if ( EdgeUIManager >= 0 )
      {
        **(_DWORD **)(a1 + 16) = v11 - v10;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
        return 0LL;
      }
      v6 = 2319LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)EdgeUIManager);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v8);
  }
  return v3;
}
