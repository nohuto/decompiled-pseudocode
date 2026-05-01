/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z @ 0x1800A7118
 * Callers:
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@00HH00@Z @ 0x1800A7410 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@00HH00@Z.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A75D0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003C0D8 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003C58C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x180097E74 (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801817FC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(
        CShoulderTapExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned int a5,
        unsigned int a6,
        HSTRING a7,
        HSTRING a8,
        char a9)
{
  HRESULT v13; // eax
  int v14; // eax
  unsigned int v15; // ebx
  HSTRING_HEADER *v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  HSTRING_HEADER *v19; // rax
  HSTRING_HEADER *v20; // rax
  HSTRING_HEADER *v21; // rax
  HSTRING_HEADER *v22; // rax
  HSTRING_HEADER *v23; // rax
  HSTRING_HEADER *v24; // rax
  HSTRING_HEADER *v25; // rax
  HSTRING_HEADER *v26; // rax
  struct Windows::Foundation::Collections::IPropertySet *v27; // r9
  struct Windows::Foundation::Collections::IPropertySet *v28; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v30; // [rsp+20h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31[2]; // [rsp+28h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-30h] BYREF
  HSTRING string; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]

  v31[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  v31[0] = 0LL;
  string = 0LL;
  v13 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v13 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    __debugbreak();
  }
  v14 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
          (__int64)string,
          (__int64 *)v31);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_31;
  }
  v30 = v31[0];
  if ( v31[0] )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v31[0] + 8LL))(v31[0]);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD0A8);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v16[1].Reserved.Reserved1,
          a2);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 126LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v18,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_29;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD090);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v19[1].Reserved.Reserved1,
          a3);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 127LL;
    goto LABEL_27;
  }
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD098);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v20[1].Reserved.Reserved1,
          a4);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 128LL;
    goto LABEL_27;
  }
  v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD080);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v21[1].Reserved.Reserved1,
          a5);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 129LL;
    goto LABEL_27;
  }
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD088);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v22[1].Reserved.Reserved1,
          a6);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 130LL;
    goto LABEL_27;
  }
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD070);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v23[1].Reserved.Reserved1,
          a7);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 131LL;
    goto LABEL_27;
  }
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD078);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v24[1].Reserved.Reserved1,
          a8);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 132LL;
    goto LABEL_27;
  }
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD068);
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v30,
          (HSTRING)v25[1].Reserved.Reserved1,
          a9);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 133LL;
    goto LABEL_27;
  }
  v17 = CSingleViewShellExperience::Show((char *)this + 40, 0LL);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 136LL;
    goto LABEL_27;
  }
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)&off_1801BD0A0);
  v17 = CSingleViewShellExperience::Reactivate(
          (CShoulderTapExperienceManager *)((char *)this + 40),
          (HSTRING)v26[1].Reserved.Reserved1,
          v31[0],
          v27);
  v15 = v17;
  if ( v17 < 0 )
  {
    v18 = 137LL;
    goto LABEL_27;
  }
  v15 = 0;
LABEL_29:
  if ( v30 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v30 + 16LL))(v30);
LABEL_31:
  v28 = v31[0];
  if ( v31[0] )
  {
    v31[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v28 + 16LL))(v28);
  }
  return v15;
}
