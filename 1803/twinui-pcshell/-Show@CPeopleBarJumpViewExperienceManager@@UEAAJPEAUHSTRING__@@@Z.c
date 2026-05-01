/*
 * XREFs of ?Show@CPeopleBarJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18016F700
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001A0E4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18006C11C (-SetArgs@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x180093A98 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ @ 0x18016E7E0 (-Dismiss@CPeopleBarJumpViewExperienceManager@@UEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPeopleBarJumpViewExperienceManager::Show(HSTRING *this, HSTRING a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  PCWSTR StringRawBuffer; // rax
  int v7; // eax
  __int64 v8; // rdx
  UINT32 v9; // eax
  PCWSTR sourceString; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v12[2]; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  HSTRING v14[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v16; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v14[1] = (HSTRING)-2LL;
  v14[0] = a2;
  v4 = CPeopleBarJumpViewExperienceManager::Dismiss((CPeopleBarJumpViewExperienceManager *)this);
  if ( v4 >= 0 )
  {
    v4 = Microsoft::WRL::Wrappers::HString::Set(this + 38, v14);
    if ( v4 < 0 )
    {
      v5 = 123LL;
      goto LABEL_3;
    }
    sourceString = 0LL;
    *(_QWORD *)v12 = 0LL;
    v13 = 0LL;
    StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
    v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
           (wchar_t **)&sourceString,
           L"%s %s",
           L"Windows.Internal.ShellExperience.PeopleBarJumpView",
           StringRawBuffer);
    v4 = v7;
    if ( v7 >= 0 )
    {
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&sourceString);
      v16 = 0LL;
      v9 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v12[0]);
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, sourceString, v9, v12[0]);
      v7 = CSingleViewShellExperience::SetArgs(this + 7, v16);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v7 = CSingleViewShellExperience::Show(
               (__int64)(this + 7),
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
        v4 = v7;
        if ( v7 >= 0 )
        {
          v4 = 0;
          goto LABEL_14;
        }
        v8 = 130LL;
      }
      else
      {
        v8 = 128LL;
      }
    }
    else
    {
      v8 = 127LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_14:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&sourceString);
    return (unsigned int)v4;
  }
  v5 = 121LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\peoplebarjumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return (unsigned int)v4;
}
