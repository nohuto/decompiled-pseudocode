/*
 * XREFs of ?PersistFinalHeight@CStartSizingFrame@@AEAAJH@Z @ 0x1800D0078
 * Callers:
 *     ?HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ @ 0x1800D047C (-HandleExitSizeMove@CStartSizingFrame@@AEAA_JXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStartSizingFrame::PersistFinalHeight(CStartSizingFrame *this, int a2)
{
  unsigned int v3; // esi
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rax
  struct Windows::Foundation::Collections::IPropertySet *v10; // r9
  int v11; // eax
  struct Windows::Foundation::Collections::IPropertySet *v12; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v14; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[2]; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v15[1] = -2LL;
  v3 = MulDiv(a2, 96, *((_DWORD *)this + 14));
  if ( !*((_BYTE *)this + 206) )
    return 0LL;
  v14 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v15[0] = v14;
    if ( v14 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 8LL))(v14);
    v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
           (__int64)&hstringHeader,
           (const WCHAR **)&off_1802148B0);
    v8 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)v15,
           *(HSTRING *)(v7 + 24),
           v3);
    v6 = v8;
    if ( v8 >= 0 )
    {
      v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
             (__int64)&hstringHeader,
             (const WCHAR **)&off_1802148B8);
      v11 = CSingleViewShellExperience::Reactivate(
              *((CSingleViewShellExperience **)this + 2),
              *(HSTRING *)(v9 + 24),
              v14,
              v10);
      v6 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9C,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
          (const char *)(unsigned int)v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x97,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
        (const char *)(unsigned int)v8);
    }
    if ( v15[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15[0] + 16LL))(v15[0]);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x92,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\startsizingframe.cpp",
      (const char *)(unsigned int)v5);
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v6;
}
