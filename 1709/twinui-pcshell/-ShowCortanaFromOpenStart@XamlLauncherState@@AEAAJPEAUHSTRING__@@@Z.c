/*
 * XREFs of ?ShowCortanaFromOpenStart@XamlLauncherState@@AEAAJPEAUHSTRING__@@@Z @ 0x18018C024
 * Callers:
 *     ?Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x180189E30 (-Show@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z @ 0x18018A100 (-Toggle@XamlLauncherState@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018AC20 (-OnStartShown@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Wind.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x18018B6F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 *     ?OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18018C2D0 (-OnCortanaTransitionRequested@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@S.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     CortanaHelpers::AllowCortanaAboveLock @ 0x1800D3C60 (CortanaHelpers--AllowCortanaAboveLock.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DBCA0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_VisionReactive_OnScreen@@@wi.c)
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18018E7EC (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncherState::ShowCortanaFromOpenStart(XamlLauncherState *this, HSTRING a2)
{
  unsigned int *v4; // r15
  HRESULT v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  char v9; // si
  HSTRING *v10; // rbx
  int v12; // [rsp+30h] [rbp-30h] BYREF
  __int16 v13; // [rsp+34h] [rbp-2Ch]
  __int64 v14; // [rsp+38h] [rbp-28h]
  int v15; // [rsp+40h] [rbp-20h] BYREF
  XamlLauncherState *v16; // [rsp+48h] [rbp-18h]
  char v17; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  char v19; // [rsp+A0h] [rbp+40h] BYREF
  int v20; // [rsp+B0h] [rbp+50h] BYREF
  __int16 v21; // [rsp+B4h] [rbp+54h]
  char v22; // [rsp+B8h] [rbp+58h] BYREF

  v14 = -2LL;
  v4 = (unsigned int *)((char *)this + 64);
  v15 = *((_DWORD *)this + 16);
  v16 = this;
  v17 = 1;
  v19 = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(*((_QWORD *)this + 10), &v19);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( !*((_BYTE *)this + 968)
      && ((*(int (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 11) + 400LL))(*((_QWORD *)this + 11), &v22) < 0
       || !v22)
      || !CortanaHelpers::AllowCortanaAboveLock()
      || *v4 > 0x11
      || (v8 = 227872, v9 = 1, !_bittest(&v8, *v4)) )
    {
      v9 = 0;
    }
    WindowsGetStringRawBuffer(a2, 0LL);
    if ( (`wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
      wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetCachedFeatureEnabledState();
    v20 = 0;
    LOBYTE(v21) = 0;
    v12 = 0;
    v13 = v21;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      &`wil::Feature<__WilFeatureTraits_Feature_VisionReactive_OnScreen>::GetFeaturePropertyCache'::`2'::data,
      0xA78AE9u,
      (const struct FEATURE_LOGGED_TRAITS *)&v12,
      0,
      3);
    if ( v19 || v9 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
             *((_QWORD *)this + 11),
             a2,
             1LL);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 1989LL;
        goto LABEL_34;
      }
      if ( v9 )
      {
LABEL_35:
        v6 = 0;
        goto LABEL_36;
      }
    }
    else
    {
      LOBYTE(v20) = 0;
      v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 11) + 120LL))(*((_QWORD *)this + 11), &v20);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 1994LL;
        goto LABEL_34;
      }
      if ( (_BYTE)v20 )
      {
        if ( a2 )
        {
          v10 = (HSTRING *)((char *)this + 992);
          if ( a2 != *((HSTRING *)this + 124) )
          {
            WindowsDeleteString(*v10);
            *v10 = 0LL;
            v5 = WindowsDuplicateString(a2, (HSTRING *)this + 124);
            v6 = v5;
            if ( v5 < 0 )
            {
              v7 = 2000LL;
              goto LABEL_34;
            }
          }
        }
        *v4 = 12;
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 11) + 112LL))(
               *((_QWORD *)this + 11),
               2LL);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 2003LL;
          goto LABEL_34;
        }
        v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 112LL))(*((_QWORD *)this + 10));
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 2004LL;
          goto LABEL_34;
        }
      }
      else
      {
        *v4 = 14;
        v5 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 10) + 64LL))(*((_QWORD *)this + 10), 7LL);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 2011LL;
          goto LABEL_34;
        }
        v5 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, __int64))(**((_QWORD **)this + 11) + 56LL))(
               *((_QWORD *)this + 11),
               a2,
               1LL);
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 2013LL;
          goto LABEL_34;
        }
      }
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 104LL))(*((_QWORD *)this + 11));
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 2020LL;
      goto LABEL_34;
    }
    goto LABEL_35;
  }
  v7 = 1974LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
    (const char *)(unsigned int)v5);
LABEL_36:
  v17 = 0;
  StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v15,
    v4);
  return v6;
}
