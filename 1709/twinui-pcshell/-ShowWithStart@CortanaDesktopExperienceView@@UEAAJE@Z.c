/*
 * XREFs of ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800D53E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009FE0C (--1-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ?Destroy@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A61EC (-Destroy@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A6874 (-Stop@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ @ 0x1800D3130 (-StartActivity@CortanaExperienceManager_ShowWithStart@CortanaProactiveTelemetry@@QEAAXXZ.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800D8054 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800D8620 (-PositionAlongsideStart@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1800D8870 (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
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
  _QWORD v13[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+78h] [rbp-90h]
  int *v15; // [rsp+80h] [rbp-88h]
  int *v16; // [rsp+88h] [rbp-80h]
  int v17; // [rsp+90h] [rbp-78h] BYREF
  char v18; // [rsp+94h] [rbp-74h]
  int v19; // [rsp+B8h] [rbp-50h] BYREF
  const char *v20; // [rsp+C0h] [rbp-48h]
  __int64 v21; // [rsp+C8h] [rbp-40h]
  char v22; // [rsp+D0h] [rbp-38h]
  __int64 v23; // [rsp+D8h] [rbp-30h]
  _BYTE v24[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v25; // [rsp+170h] [rbp+68h]
  __int64 v26; // [rsp+178h] [rbp+70h]
  __int64 v27; // [rsp+180h] [rbp+78h]
  __int64 v28; // [rsp+188h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  newString[1] = (HSTRING)-2LL;
  v13[1] = 0LL;
  v13[2] = v13;
  v13[3] = 0LL;
  LODWORD(v14) = 0;
  v15 = &v19;
  v16 = &v17;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "CortanaExperienceManager_ShowWithStart";
  v21 = 0LL;
  v23 = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(v24, 0, sizeof(v24));
  v27 = 0LL;
  v28 = 0LL;
  v13[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::StartActivity((CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart *)v13);
  *((_BYTE *)this + 178) = 0;
  *((_BYTE *)this + 180) = 1;
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
      v8 = 748LL;
    }
    else
    {
      v8 = 741LL;
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
    (void *)0x2E2,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v4);
LABEL_12:
  v13[0] = &CortanaProactiveTelemetry::CortanaExperienceManager_ShowWithStart::`vftable';
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)v13);
  wil::ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CortanaProactiveLogging,1,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return v5;
}
