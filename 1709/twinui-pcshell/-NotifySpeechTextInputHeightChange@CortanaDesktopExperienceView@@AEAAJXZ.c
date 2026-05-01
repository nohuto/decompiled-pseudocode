/*
 * XREFs of ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800DA514
 * Callers:
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x1800D4970 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x1800B5468 (--$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x1800D9280 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800DA8A0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1801DB7C0 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::NotifySpeechTextInputHeightChange(CortanaDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rax
  HMONITOR v5; // r8
  int v6; // ebx
  unsigned int SpeechTextInputHeight; // eax
  HMONITOR v8; // r8
  unsigned int v9; // esi
  HRESULT v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rax
  struct Windows::Foundation::IPropertyValue *v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v17; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v19; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+28h] [rbp-48h] BYREF
  RECT rc; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v21[1] = -2LL;
  v2 = *((float *)this + 43);
  rc.left = (int)v2;
  v3 = *((float *)this + 44);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 45));
  rc.bottom = (int)(float)(v3 + *((float *)this + 46));
  v4 = MonitorFromRect(&rc, 0);
  v6 = (int)v4;
  if ( !v4 )
    return 0LL;
  SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v4, v5);
  v9 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)SpeechTextInputHeight, v6, v8);
  v20 = 0LL;
  string = 0LL;
  v10 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v10 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)string,
          (__int64 *)&v20);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v21[0] = v20;
    if ( v20 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 8LL))(v20);
    v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_1802148D8);
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)v21,
            *(HSTRING *)(v13 + 24),
            v14,
            v9);
    v12 = v15;
    if ( v15 < 0 )
    {
      v16 = 2633LL;
      goto LABEL_12;
    }
    v15 = CortanaDesktopExperienceView::NotifyView(this, L"NotifySpeechTextInputHeightChange", v20);
    v12 = v15;
    if ( v15 < 0 )
    {
      v16 = 2635LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v15);
      if ( v21[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
      goto LABEL_14;
    }
    if ( v21[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
    v19 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xA46,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
    (const char *)(unsigned int)v11);
LABEL_14:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v12;
}
