/*
 * XREFs of ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1800C7F78
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C4DE4 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003C0D8 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800C8468 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CortanaDesktopExperienceView::NotifyShellModeChanged(CortanaDesktopExperienceView *this)
{
  HRESULT v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v8; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v10; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v11[1] = -2LL;
  v10 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x9B4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_15;
  }
  v11[0] = v10;
  if ( v10 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v10 + 8LL))(v10);
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD110);
  v6 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v11,
         (HSTRING)v5[1].Reserved.Reserved1,
         *((_BYTE *)this + 204));
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 2488LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_13;
  }
  v6 = CortanaDesktopExperienceView::NotifyView(this, L"NotifyShellModeChanged", v10);
  v4 = v6;
  if ( v6 < 0 )
  {
    v7 = 2489LL;
    goto LABEL_11;
  }
  v4 = 0;
LABEL_13:
  if ( v11[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]);
LABEL_15:
  v8 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
