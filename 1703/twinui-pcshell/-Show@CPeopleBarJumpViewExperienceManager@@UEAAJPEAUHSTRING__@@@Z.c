/*
 * XREFs of ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800A49E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180043D94 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005A980 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z @ 0x180097E74 (-SetString@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1801817FC (-Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundat.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18018329C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CPeopleBarJumpViewExperienceManager::Show(HSTRING *this, HSTRING a2)
{
  HSTRING *v4; // rbx
  HRESULT v5; // eax
  HRESULT v6; // eax
  int v7; // eax
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  __int64 v10; // rdx
  HSTRING_HEADER *v11; // rax
  struct Windows::Foundation::Collections::IPropertySet *v12; // r9
  struct Windows::Foundation::Collections::IPropertySet *v13; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  HRESULT v15; // eax
  PCWSTR StringRawBuffer; // rax
  int v17; // eax
  PVOID Reserved1; // rdi
  __int64 v19; // rdx
  __int64 v20; // rax
  HRESULT v21; // eax
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER v26; // [rsp+58h] [rbp-28h] BYREF
  HSTRING v27; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v23[1] = -2LL;
  v4 = this + 38;
  if ( !a2 || a2 != *v4 )
  {
    WindowsDeleteString(*v4);
    *v4 = 0LL;
    v5 = WindowsDuplicateString(a2, v4);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x6D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
      return;
    }
  }
  if ( !*((_DWORD *)this + 24) )
  {
    if ( !a2 || a2 != *v4 )
    {
      WindowsDeleteString(*v4);
      *v4 = 0LL;
      v15 = WindowsDuplicateString(a2, v4);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x7C,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
          (const char *)(unsigned int)v15);
        return;
      }
    }
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    v17 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            (__int64)&hstringHeader,
            (__int64)L"%s %s",
            L"Windows.Internal.ShellExperience.PeopleBarJumpView",
            StringRawBuffer);
    Reserved1 = hstringHeader.Reserved.Reserved1;
    if ( v17 >= 0 )
    {
      v20 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[8];
      if ( *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] == -1LL )
      {
        if ( hstringHeader.Reserved.Reserved1 )
        {
          do
            ++v20;
          while ( *((_WORD *)hstringHeader.Reserved.Reserved1 + v20) );
        }
        else
        {
          v20 = 0LL;
        }
        *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = v20;
      }
      v27 = 0LL;
      if ( (int)v20 + 1 < (unsigned int)v20 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
        return;
      }
      v21 = WindowsCreateStringReference((PCWSTR)hstringHeader.Reserved.Reserved1, v20, &v26, &v27);
      if ( v21 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21);
        __debugbreak();
      }
      v17 = CSingleViewShellExperience::SetArgs(this + 7, v27);
      if ( v17 >= 0 )
      {
        v17 = CSingleViewShellExperience::Show(this + 7, 4LL);
        if ( v17 >= 0 )
        {
          if ( Reserved1 )
            CoTaskMemFree(Reserved1);
          return;
        }
        v19 = 131LL;
      }
      else
      {
        v19 = 129LL;
      }
    }
    else
    {
      v19 = 128LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v19,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v17);
    if ( Reserved1 )
      CoTaskMemFree(Reserved1);
    return;
  }
  v22 = 0LL;
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    __debugbreak();
  }
  v7 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         (__int64)string,
         (__int64 *)&v22);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x74,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_18:
    v13 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    return;
  }
  v23[0] = v22;
  if ( v22 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v22 + 8LL))(v22);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&off_1801BD048);
  v9 = Windows::Internal::ShellHelpers::PropertySetHelper::SetString(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)v23,
         (HSTRING)v8[1].Reserved.Reserved1,
         a2);
  if ( v9 < 0 )
  {
    v10 = 118LL;
    goto LABEL_16;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, (const WCHAR **)&off_1801BD058);
  v9 = CSingleViewShellExperience::Reactivate(
         (CSingleViewShellExperience *)(this + 7),
         (HSTRING)v11[1].Reserved.Reserved1,
         v22,
         v12);
  if ( v9 < 0 )
  {
    v10 = 120LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
    if ( v23[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
    goto LABEL_18;
  }
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  v14 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
