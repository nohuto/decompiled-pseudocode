/*
 * XREFs of ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194
 * Callers:
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x1800B4810 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 *     ?OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800B4AB0 (-OnViewPropertiesChanging@CShoulderTapExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z @ 0x18003D338 (-SetBoolean@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@E@Z.c)
 *     ?SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z @ 0x18003D68C (-SetUInt32@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@I@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046238 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x1800B346C (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1800B4634 (-GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 *     ??$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x1800B5468 (--$_SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyV.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801D0EBC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall CShoulderTapExperienceManager::Reactivate(CShoulderTapExperienceManager *this, char a2)
{
  HRESULT v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  int PeopleBarScreenEdge; // eax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  struct Windows::Foundation::Collections::IPropertySet *v26; // r9
  struct Windows::Foundation::Collections::IPropertySet *v27; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+20h] [rbp-50h] BYREF
  int v30; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v31[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v31[1] = (struct Windows::Foundation::Collections::IPropertySet *)-2LL;
  v31[0] = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)v31);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x68,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_53;
  }
  v29 = v31[0];
  if ( v31[0] )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v31[0] + 8LL))(v31[0]);
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         (__int64)&hstringHeader,
         (const WCHAR **)&off_1802147C0);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v7 + 24),
                          *((HSTRING *)this + 32));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 107LL;
LABEL_48:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)PeopleBarScreenEdge);
    goto LABEL_51;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_1802147A8);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v10 + 24),
                          *((HSTRING *)this + 33));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 108LL;
    goto LABEL_48;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214798);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v11 + 24),
                          *((HSTRING *)this + 34));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 109LL;
    goto LABEL_48;
  }
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_1802147A0);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v12 + 24),
                          *((HSTRING *)this + 35));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 110LL;
    goto LABEL_48;
  }
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214788);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v13 + 24),
                          *((_DWORD *)this + 72));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 111LL;
    goto LABEL_48;
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214790);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v14 + 24),
                          *((_DWORD *)this + 73));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 112LL;
    goto LABEL_48;
  }
  v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214778);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v15 + 24),
                          *((_DWORD *)this + 74));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 113LL;
    goto LABEL_48;
  }
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214780);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v16 + 24),
                          *((HSTRING *)this + 38));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 114LL;
    goto LABEL_48;
  }
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214768);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v17 + 24),
                          *((HSTRING *)this + 39));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 115LL;
    goto LABEL_48;
  }
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214758);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v18 + 24),
                          *((HSTRING *)this + 40));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 116LL;
    goto LABEL_48;
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214770);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetBoolean(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v19 + 24),
                          a2);
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 117LL;
    goto LABEL_48;
  }
  v30 = -1;
  PeopleBarScreenEdge = CShoulderTapExperienceManager::GetPeopleBarScreenEdge(this, (enum EDGEUI_TRAYSTUCKPLACE *)&v30);
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 121LL;
    goto LABEL_48;
  }
  v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_1802147B0);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::_SetValue<int>(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v20 + 24));
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 122LL;
    goto LABEL_48;
  }
  v21 = 184;
  v22 = 184;
  if ( v30 == -1 )
    goto LABEL_50;
  if ( !v30 )
  {
LABEL_39:
    v21 = 202;
    goto LABEL_40;
  }
  if ( v30 != 1 )
  {
    if ( v30 != 2 )
    {
      if ( v30 == 3 )
        goto LABEL_38;
LABEL_50:
      v6 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x91,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)0x80070057LL);
      goto LABEL_51;
    }
    goto LABEL_39;
  }
LABEL_38:
  v22 = 202;
LABEL_40:
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214760);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v23 + 24),
                          v21);
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 148LL;
    goto LABEL_48;
  }
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_180214750);
  PeopleBarScreenEdge = Windows::Internal::ShellHelpers::PropertySetHelper::SetUInt32(
                          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                          *(HSTRING *)(v24 + 24),
                          v22);
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 149LL;
    goto LABEL_48;
  }
  PeopleBarScreenEdge = CSingleViewShellExperience::Show((char *)this + 40, 1LL);
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 152LL;
    goto LABEL_48;
  }
  v25 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (__int64)&hstringHeader,
          (const WCHAR **)&off_1802147C8);
  PeopleBarScreenEdge = CSingleViewShellExperience::Reactivate(
                          (CShoulderTapExperienceManager *)((char *)this + 40),
                          *(HSTRING *)(v25 + 24),
                          v31[0],
                          v26);
  v6 = PeopleBarScreenEdge;
  if ( PeopleBarScreenEdge < 0 )
  {
    v9 = 153LL;
    goto LABEL_48;
  }
  v6 = 0;
LABEL_51:
  if ( v29 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v29 + 16LL))(v29);
LABEL_53:
  v27 = v31[0];
  if ( v31[0] )
  {
    v31[0] = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return v6;
}
