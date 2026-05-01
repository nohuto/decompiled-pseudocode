/*
 * XREFs of ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x180063A50
 * Callers:
 *     ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180065EE0 (-Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Sh.c)
 *     ?ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z @ 0x180065F90 (-ShowWithStart@CortanaDesktopExperienceView@@UEAAJE@Z.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180185FB0 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180062FE8 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x180063DB0 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x18007DE3C (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x180085E80 (-IsImmersiveSearchEnabled@CortanaFlightingHelpers@@YAEXZ.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x1800924CC (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCortanaHeightForImmersiveSearch@@YAHXZ @ 0x180185AE8 (-GetCortanaHeightForImmersiveSearch@@YAHXZ.c)
 *     ?SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180187450 (-SetPositioningAnchorForNotificationAnimation@CortanaDesktopExperienceView@@AEAAJXZ.c)
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
  HMONITOR v9; // r8
  HMONITOR v10; // r14
  unsigned int SpeechTextInputHeight; // r12d
  int v12; // eax
  unsigned int v13; // edi
  HRESULT v14; // eax
  const wchar_t *StringRawBuffer; // rax
  CortanaFlightingHelpers *v16; // rcx
  HMONITOR v17; // r8
  const wchar_t *v18; // rsi
  bool v19; // di
  bool v20; // r15
  bool v21; // r13
  wchar_t *v22; // rax
  HMONITOR v23; // r8
  __m128i v24; // xmm0
  __int64 v26; // rdx
  HMONITOR v27; // r8
  __int64 v28; // rcx
  HMONITOR v29; // r8
  HSTRING newStringa; // [rsp+20h] [rbp-40h] BYREF
  HSTRING string2; // [rsp+28h] [rbp-38h] BYREF
  UINT32 length; // [rsp+30h] [rbp-30h] BYREF
  int v33; // [rsp+34h] [rbp-2Ch] BYREF
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
  v10 = v8;
  if ( v8 )
  {
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v8, v9);
    WindowsDeleteString(0LL);
    string2 = 0LL;
    v12 = CortanaDesktopExperienceView::BuildAdditionalArgsString(
            this,
            v10,
            (ExperienceManagerUtils *)SpeechTextInputHeight,
            &string2);
    v13 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x679,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v12,
        (int)newStringa);
      goto LABEL_22;
    }
    WindowsDeleteString(0LL);
    newStringa = 0LL;
    v14 = WindowsConcatString(string1, string2, &newStringa);
    v13 = v14;
    if ( v14 < 0 )
    {
      v26 = 1660LL;
    }
    else
    {
      v14 = WindowsDuplicateString(newStringa, newString);
      v13 = v14;
      if ( v14 >= 0 )
      {
        length = 0;
        StringRawBuffer = WindowsGetStringRawBuffer(newStringa, &length);
        v18 = StringRawBuffer;
        if ( StringRawBuffer )
        {
          if ( wcsstr(StringRawBuffer, L"ForceAmbientMode=True") )
            *((_BYTE *)this + 197) = 1;
          v19 = wcsstr(v18, L"StartMode=NotificationAnimation") != 0LL;
          v20 = wcsstr(v18, L"StartMode=Attract") != 0LL;
          v21 = wcsstr(v18, L"QuerySource=LockScreen") != 0LL;
          if ( (wcsstr(v18, L"QuerySource=VoiceActivation")
             || (v22 = wcsstr(v18, L"QuerySource=VoiceActivationWithKeyword")) != 0LL)
            && ((LOBYTE(v22) = 1, *((_BYTE *)this + 240)) || *((_BYTE *)this + 207))
            || *((_BYTE *)this + 197)
            || v19
            || v20
            || v21 )
          {
            *((_BYTE *)this + 198) = 1;
          }
          if ( (_BYTE)v22 && !*((_BYTE *)this + 198) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 24LL))(*((_QWORD *)this + 12));
          *((_BYTE *)this + 204) = wcsstr(v18, L"&QuerySource=StartButton") != 0LL;
          if ( v19 )
          {
            v14 = CortanaDesktopExperienceView::SetPositioningAnchorForNotificationAnimation(this);
            v13 = v14;
            if ( v14 < 0 )
            {
              v26 = 1704LL;
              goto LABEL_34;
            }
          }
        }
        if ( *((_BYTE *)this + 240) )
        {
          *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                                (ExperienceManagerUtils *)0x1AC,
                                                (int)v10,
                                                v17);
          v28 = 492LL;
        }
        else if ( CortanaFlightingHelpers::IsImmersiveSearchEnabled(v16) && *((_DWORD *)this + 33) == 6 )
        {
          v33 = 0;
          CortanaFeatureConfiguration::GetDWORD(0LL, &v33);
          *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                                (ExperienceManagerUtils *)0x384,
                                                (int)v10,
                                                v29);
          v28 = (unsigned int)GetCortanaHeightForImmersiveSearch() + 20;
        }
        else
        {
          *((float *)this + 47) = (float)(int)ExperienceManagerUtils::ScaleByPerMonitorDPI(
                                                (ExperienceManagerUtils *)0x140,
                                                (int)v10,
                                                v23);
          if ( wcsstr(v18, L"StartMode=QFSearchBox") || wcsstr(v18, L"StartMode=NotificationAnimation") )
          {
            v24 = _mm_cvtsi32_si128(SpeechTextInputHeight);
LABEL_20:
            *((_DWORD *)this + 48) = _mm_cvtepi32_ps(v24).m128_u32[0];
            v13 = 0;
LABEL_21:
            WindowsDeleteString(newStringa);
            newStringa = 0LL;
LABEL_22:
            WindowsDeleteString(string2);
            return v13;
          }
          v28 = 656LL;
        }
        v24 = _mm_cvtsi32_si128(ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)v28, (int)v10, v27));
        goto LABEL_20;
      }
      v26 = 1661LL;
    }
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v14,
      (int)newStringa);
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x675,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)0x8000FFFFLL,
    (int)newStringa);
  return 2147549183LL;
}
