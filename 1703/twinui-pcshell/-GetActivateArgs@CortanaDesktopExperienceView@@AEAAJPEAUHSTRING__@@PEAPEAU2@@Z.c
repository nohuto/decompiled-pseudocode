/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1800C5F30
 * Callers:
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800C3200 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800C3450 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x1800C3650 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1800C5948 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z @ 0x1800C5DA4 (-ComputeAndOnTraySearchItemChanged@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@@Z.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800C7088 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18018C37C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v10; // ebx
  unsigned int SpeechTextInputHeight; // r13d
  int v12; // eax
  HRESULT v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  HRESULT v16; // eax
  const wchar_t *StringRawBuffer; // rax
  HMONITOR v18; // r8
  const wchar_t *v19; // rsi
  bool v20; // bl
  bool v21; // r15
  bool v22; // r12
  wchar_t *v23; // rax
  HWND WindowW; // rax
  HMONITOR PropW; // rax
  int v26; // eax
  HMONITOR v27; // r8
  __int64 v28; // rcx
  __m128i v29; // xmm0
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
  if ( v8 )
  {
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v8);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v12 = CortanaDesktopExperienceView::BuildAdditionalArgsString(this, v9, (HMONITOR)SpeechTextInputHeight, &string2);
    v10 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x627,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v12);
LABEL_42:
      WindowsDeleteString(string2);
      return v10;
    }
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v13 = WindowsConcatString(string1, string2, &newStringa);
    v10 = v13;
    if ( v13 < 0 )
    {
      v14 = (unsigned int)v13;
      v15 = 1578LL;
LABEL_32:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)v14);
LABEL_41:
      WindowsDeleteString(newStringa);
      newStringa = 0LL;
      goto LABEL_42;
    }
    v16 = WindowsDuplicateString(newStringa, newString);
    v10 = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 1579LL;
      goto LABEL_32;
    }
    length = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
    v19 = StringRawBuffer;
    if ( StringRawBuffer )
    {
      if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
        *((_BYTE *)this + 197) = 1;
      v20 = wcsstr(v19, L"StartMode=NotificationAnimation") != 0LL;
      v21 = wcsstr(v19, L"StartMode=Attract") != 0LL;
      v22 = wcsstr(v19, L"QuerySource=LockScreen") != 0LL;
      if ( (wcsstr(v19, L"QuerySource=VoiceActivation")
         || (v23 = wcsstr(v19, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
        && ((LOBYTE(v23) = 1, *((_BYTE *)this + 240)) || *((_BYTE *)this + 206))
        || *((_BYTE *)this + 197)
        || v20
        || v21
        || v22 )
      {
        *((_BYTE *)this + 198) = 1;
      }
      if ( (_BYTE)v23 && !*((_BYTE *)this + 198) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
      if ( v20 )
      {
        WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
        if ( WindowW
          && (PropW = (HMONITOR)GetPropW(WindowW, L"TaskbarMonitor")) != 0LL
          && (v26 = CortanaDesktopExperienceView::ComputeAndOnTraySearchItemChanged(this, PropW), v10 = v26, v26 < 0) )
        {
          wil::details::in1diag3::Return_Hr_NoOriginate(
            retaddr,
            (void *)0x6E3,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v26);
        }
        else
        {
          v10 = 0;
        }
        if ( (v10 & 0x80000000) != 0 )
        {
          v14 = v10;
          v15 = 1620LL;
          goto LABEL_32;
        }
      }
    }
    if ( *((_BYTE *)this + 240) )
    {
      *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                            (ExperienceManagerUtils *)0x1AC,
                                            (int)v9,
                                            v18);
      v28 = 492LL;
    }
    else
    {
      *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                            (ExperienceManagerUtils *)0x140,
                                            (int)v9,
                                            v18);
      if ( wcsstr(v19, L"StartMode=QFSearchBox") || wcsstr(v19, L"StartMode=NotificationAnimation") )
      {
        v29 = _mm_cvtsi32_si128(SpeechTextInputHeight);
        goto LABEL_40;
      }
      v28 = 656LL;
    }
    v29 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v28, (int)v9, v27));
LABEL_40:
    *((_DWORD *)this + 48) = _mm_cvtepi32_ps(v29).m128_u32[0];
    v10 = 0;
    goto LABEL_41;
  }
  v10 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x623,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL);
  return v10;
}
