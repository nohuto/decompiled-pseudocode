/*
 * XREFs of ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800C3650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BA50 (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18009CBDC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18009D264 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ??$Start@$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@SA?AV01@XZ @ 0x18009E6F8 (--$Start@$$V@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@SA-AV01@XZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C5F30 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C64C0 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800C6710 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::ShowWithStart(CortanaDesktopExperienceView *this, char a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  HRESULT v6; // eax
  int ActivateArgs; // eax
  __int64 v8; // rdx
  HSTRING newString[2]; // [rsp+28h] [rbp-E0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-D0h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v13[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  newString[1] = (HSTRING)-2LL;
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::Start<>((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  *((_BYTE *)this + 178) = 0;
  v4 = CortanaDesktopExperienceView::PositionAlongsideStart((CortanaDesktopExperienceView *)((char *)this - 24));
  v5 = v4;
  if ( v4 >= 0 )
  {
    newString[0] = 0LL;
    string = 0LL;
    v6 = WindowsCreateStringReference(
           L"StartMode=QFSearchBox&QuerySource=StartButton&Positioner=desktop",
           0x40u,
           &hstringHeader,
           &string);
    if ( v6 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    WindowsDeleteString(newString[0]);
    newString[0] = 0LL;
    ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                     (CortanaDesktopExperienceView *)((char *)this - 24),
                     string,
                     newString);
    v5 = ActivateArgs;
    if ( ActivateArgs >= 0 )
    {
      *((_BYTE *)this + 175) = 1;
      ActivateArgs = CortanaDesktopExperienceView::ShowInternal(
                       (char *)this - 24,
                       newString[0],
                       a2 != 0,
                       0LL,
                       newString[0]);
      v5 = ActivateArgs;
      if ( ActivateArgs >= 0 )
      {
        wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13);
        v5 = 0;
        goto LABEL_11;
      }
      v8 = 732LL;
    }
    else
    {
      v8 = 725LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
LABEL_11:
    WindowsDeleteString(newString[0]);
    newString[0] = 0LL;
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x2D2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  v13[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v13);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return v5;
}
