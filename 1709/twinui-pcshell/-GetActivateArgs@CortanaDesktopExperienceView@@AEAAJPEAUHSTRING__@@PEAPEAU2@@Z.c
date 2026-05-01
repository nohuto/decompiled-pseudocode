/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800D8054
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4F20 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800D51E0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800D53E0 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800D77C8 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800D7E58 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800D9280 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB760 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CortanaDesktopExperienceView::GetActivateArgs(
        CortanaDesktopExperienceView *this,
        HSTRING string1,
        HSTRING *newString)
{
  float v6; // xmm0_4
  float v7; // xmm1_4
  HMONITOR v8; // rax
  HMONITOR v9; // r14
  unsigned int SpeechTextInputHeight; // r13d
  int v12; // eax
  int v13; // edi
  HRESULT v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  HRESULT v17; // eax
  const wchar_t *StringRawBuffer; // rax
  HMONITOR v19; // r8
  const wchar_t *v20; // rsi
  bool v21; // di
  bool v22; // r15
  bool v23; // r12
  wchar_t *v24; // rax
  HWND WindowW; // rax
  HMONITOR PropW; // rax
  int v27; // eax
  HMONITOR v28; // r8
  __int64 v29; // rcx
  __m128i v30; // xmm0
  HSTRING newStringa; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-38h] BYREF
  UINT32 length; // [rsp+30h] [rbp-30h] BYREF
  __int64 v34; // [rsp+38h] [rbp-28h]
  RECT rc; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v34 = -2LL;
  *newString = 0LL;
  *(_WORD *)((char *)this + 197) = 0;
  v6 = *((float *)this + 43);
  rc.left = (int)v6;
  v7 = *((float *)this + 44);
  rc.top = (int)v7;
  rc.right = (int)(float)(v6 + *((float *)this + 45));
  rc.bottom = (int)(float)(v7 + *((float *)this + 46));
  v8 = MonitorFromRect(&rc, 0);
  v9 = v8;
  if ( !v8 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64A,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v8);
  WindowsDeleteString(0LL);
  string2 = 0LL;
  v12 = CortanaDesktopExperienceView::BuildAdditionalArgsString(this, v9, (HMONITOR)SpeechTextInputHeight, &string2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v14 = WindowsConcatString(string1, string2, &newStringa);
    v13 = v14;
    if ( v14 < 0 )
    {
      v15 = (unsigned int)v14;
      v16 = 1617LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v15);
LABEL_41:
      WindowsDeleteString(newStringa);
      newStringa = 0LL;
      goto LABEL_42;
    }
    v17 = WindowsDuplicateString(newStringa, newString);
    v13 = v17;
    if ( v17 < 0 )
    {
      v15 = (unsigned int)v17;
      v16 = 1618LL;
      goto LABEL_32;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
    v20 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
        *((_BYTE *)this + 197) = 1;
      v21 = wcsstr(v20, L"StartMode=NotificationAnimation") != 0LL;
      v22 = wcsstr(v20, L"StartMode=Attract") != 0LL;
      v23 = wcsstr(v20, L"QuerySource=LockScreen") != 0LL;
      if ( (wcsstr(v20, L"QuerySource=VoiceActivation")
         || (v24 = wcsstr(v20, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
        && ((LOBYTE(v24) = 1, *((_BYTE *)this + 240)) || *((_BYTE *)this + 208))
        || *((_BYTE *)this + 197)
        || v21
        || v22
        || v23 )
      {
        *((_BYTE *)this + 198) = 1;
      }
      if ( (_BYTE)v24 && !*((_BYTE *)this + 198) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
      *((_BYTE *)this + 205) = wcsstr(v20, L"&QuerySource=SearchButton") != 0LL;
      if ( v21 )
      {
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        if ( WindowW
          && (PropW = (HMONITOR)GetPropW(WindowW, L"TaskbarMonitor")) != 0LL
          && (v27 = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, PropW), v13 = v27, v27 < 0) )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x726,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v27);
        }
        else
        {
          v13 = 0;
        }
        if ( v13 < 0 )
        {
          v15 = (unsigned int)v13;
          v16 = 1661LL;
          goto LABEL_32;
        }
      }
    }
    if ( *((_BYTE *)this + 240) )
    {
      *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                            (ExperienceManagerUtils *)0x1AC,
                                            (int)v9,
                                            v19);
      v29 = 492LL;
    }
    else
    {
      *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                            (ExperienceManagerUtils *)0x140,
                                            (int)v9,
                                            v19);
      if ( wcsstr(v20, L"StartMode=QFSearchBox") || wcsstr(v20, L"StartMode=NotificationAnimation") )
      {
        v30 = _mm_cvtsi32_si128(SpeechTextInputHeight);
        goto LABEL_40;
      }
      v29 = 656LL;
    }
    v30 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v29, (int)v9, v28));
LABEL_40:
    *((_DWORD *)this + 48) = _mm_cvtepi32_ps(v30).m128_u32[0];
    *((_BYTE *)this + 204) = wcsstr(v20, L"QuerySource=StartButton") != 0LL;
    v13 = 0;
    goto LABEL_41;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x64E,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v12);
LABEL_42:
  WindowsDeleteString(string2);
  return (unsigned int)v13;
}
