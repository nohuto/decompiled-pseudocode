/*
 * XREFs of ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x1800B1340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18005D360 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x1800B1510 (-Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x1801D2CA0 (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPeopleBarJumpViewExperienceManager::Show(HSTRING *this, HSTRING a2)
{
  HRESULT v4; // ebx
  __int64 v5; // rdx
  HSTRING *v6; // rbx
  PCWSTR StringRawBuffer; // rax
  int v8; // eax
  WCHAR *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rax
  HRESULT v12; // eax
  PCWSTR sourceString; // [rsp+20h] [rbp-50h] BYREF
  UINT32 length[2]; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h]
  __int64 v16; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING string; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16 = -2LL;
  v4 = CPeopleBarJumpViewExperienceManager::Dismiss((CPeopleBarJumpViewExperienceManager *)this);
  if ( v4 < 0 )
  {
    v5 = 119LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return;
  }
  v6 = this + 38;
  if ( !a2 || a2 != *v6 )
  {
    WindowsDeleteString(*v6);
    *v6 = 0LL;
    v4 = WindowsDuplicateString(a2, this + 38);
    if ( v4 < 0 )
    {
      v5 = 121LL;
      goto LABEL_3;
    }
  }
  sourceString = 0LL;
  *(_QWORD *)length = 0LL;
  v15 = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
         (__int64)&sourceString,
         (__int64)L"%s %s",
         L"Windows.Internal.ShellExperience.PeopleBarJumpView",
         StringRawBuffer);
  v9 = (WCHAR *)sourceString;
  if ( v8 >= 0 )
  {
    v11 = *(_QWORD *)length;
    if ( *(_QWORD *)length == -1LL )
    {
      if ( sourceString )
      {
        do
          ++v11;
        while ( sourceString[v11] );
      }
      else
      {
        v11 = 0LL;
      }
      *(_QWORD *)length = v11;
    }
    string = 0LL;
    if ( (int)v11 + 1 < (unsigned int)v11 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
      return;
    }
    v12 = WindowsCreateStringReference(sourceString, v11, &hstringHeader, &string);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
      __debugbreak();
    }
    v8 = CSingleViewShellExperience::SetArgs(this + 7, string);
    if ( v8 >= 0 )
    {
      v8 = CSingleViewShellExperience::Show(this + 7, 4LL);
      if ( v8 >= 0 )
        goto LABEL_25;
      v10 = 128LL;
    }
    else
    {
      v10 = 126LL;
    }
  }
  else
  {
    v10 = 125LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_25:
  if ( v9 )
    CoTaskMemFree(v9);
}
