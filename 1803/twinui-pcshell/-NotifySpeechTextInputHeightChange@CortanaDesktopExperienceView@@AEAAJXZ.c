/*
 * XREFs of ?NotifySpeechTextInputHeightChange@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1801862DC
 * Callers:
 *     ?OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180186880 (-OnPearlRectChanged@CortanaDesktopExperienceView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001A198 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800619A8 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     ?GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z @ 0x180062FE8 (-GetSpeechTextInputHeight@CortanaDesktopExperienceView@@AEAAHPEAUHMONITOR__@@@Z.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18006CC80 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007C598 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x180095304 (-UnscaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::NotifySpeechTextInputHeightChange(CortanaDesktopExperienceView *this)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  HMONITOR v4; // rax
  HMONITOR v5; // r8
  __int64 v6; // rbx
  unsigned int SpeechTextInputHeight; // eax
  HMONITOR v8; // r8
  unsigned int v9; // esi
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v17; // [rsp+20h] [rbp-50h] BYREF
  __int64 v18[2]; // [rsp+28h] [rbp-48h] BYREF
  RECT rc; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v18[1] = -2LL;
  v2 = *((float *)this + 43);
  rc.left = (int)v2;
  v3 = *((float *)this + 44);
  rc.top = (int)v3;
  rc.right = (int)(float)(v2 + *((float *)this + 45));
  rc.bottom = (int)(float)(v3 + *((float *)this + 46));
  v4 = MonitorFromRect(&rc, 0);
  v6 = (__int64)v4;
  if ( v4 )
  {
    SpeechTextInputHeight = CortanaDesktopExperienceView::GetSpeechTextInputHeight(this, v4, v5);
    v9 = ExperienceManagerUtils::UnscaleByPerMonitorDPI((ExperienceManagerUtils *)SpeechTextInputHeight, v6, v8);
    v17 = 0LL;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.Collections.ValueSet",
      0x28u,
      0x27u);
    v10 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
            v21,
            (__int64 *)&v17);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC3,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
LABEL_9:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      return v11;
    }
    v18[0] = (__int64)v17;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v18);
    v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            (__int64)&hstringHeader,
            (const WCHAR **)&off_18034C590);
    v14 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)v18,
            *(HSTRING *)(v12 + 24),
            v13,
            v9);
    v11 = v14;
    if ( v14 < 0 )
    {
      v15 = 2758LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v14);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
      goto LABEL_9;
    }
    v14 = CortanaDesktopExperienceView::NotifyView(this, L"NotifySpeechTextInputHeightChange", v17);
    v11 = v14;
    if ( v14 < 0 )
    {
      v15 = 2760LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  return 0LL;
}
