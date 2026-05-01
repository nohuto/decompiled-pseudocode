/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x1800BC124
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800BA790 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002551C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005B114 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _alloca_probe @ 0x180197660 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaSharedExperienceManager::_NormalizeAndAddPositionerArgs(
        CortanaSharedExperienceManager *this,
        HSTRING a2,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *a3,
        HSTRING *a4)
{
  HRESULT v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  PCWSTR StringRawBuffer; // rax
  PCWSTR v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  WCHAR *v15; // rcx
  signed __int64 v16; // rdi
  WCHAR v17; // ax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  UINT32 v22; // edx
  HRESULT v23; // eax
  HSTRING v24; // rbx
  const wchar_t *v25; // rax
  HSTRING_HEADER *v26; // rbx
  HRESULT v27; // eax
  HSTRING v28; // rcx
  HSTRING v29; // rax
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-D8h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v37; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR sourceString[2088]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1108h] [rbp+1008h]

  v35 = -2LL;
  *a4 = 0LL;
  string = 0LL;
  if ( !a2 )
  {
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = WindowsCreateString(L"StartMode=Proactive", 0x13u, &string);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 772LL;
LABEL_38:
      v18 = (unsigned int)v7;
      goto LABEL_39;
    }
    goto LABEL_36;
  }
  length[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, length);
  v11 = StringRawBuffer;
  if ( !StringRawBuffer || !length[0] )
    goto LABEL_36;
  v12 = length[0] - 1;
  v13 = (unsigned int)v12;
  if ( StringRawBuffer[v12] != 47 )
  {
    if ( a2 != string )
    {
      WindowsDeleteString(string);
      string = 0LL;
      v7 = WindowsDuplicateString(a2, &string);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 789LL;
        goto LABEL_38;
      }
    }
    goto LABEL_36;
  }
  memset(sourceString, 0, 0x1048uLL);
  if ( v13 > 0x7FFFFFFE )
  {
    v8 = -2147024809;
    sourceString[0] = 0;
LABEL_16:
    v18 = (unsigned int)v8;
    v9 = 784LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v18);
    goto LABEL_49;
  }
  v14 = 2084LL;
  v15 = sourceString;
  v8 = 0;
  v16 = (char *)v11 - (char *)sourceString;
  do
  {
    if ( !(v14 + v13 - 2084) )
      break;
    v17 = *(WCHAR *)((char *)v15 + v16);
    if ( !v17 )
      break;
    *v15++ = v17;
    --v14;
  }
  while ( v14 );
  if ( !v14 )
  {
    --v15;
    v8 = -2147024774;
  }
  *v15 = 0;
  if ( v8 < 0 )
    goto LABEL_16;
  v19 = -1LL;
  do
    ++v19;
  while ( sourceString[v19] );
  v20 = -1;
  if ( v19 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    __debugbreak();
  }
  v21 = v19 + 1;
  if ( (int)v19 + 1 >= (unsigned int)v19 )
    v20 = v19 + 1;
  if ( v21 < (unsigned int)v19 )
  {
    Microsoft::WRL::Details::RaiseException(v21 < (unsigned int)v19 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v22 = v20 - 1;
  if ( (unsigned int)v19 < v20 )
    v22 = v19;
  v23 = WindowsCreateStringReference(sourceString, v22, &hstringHeader, &v37);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    __debugbreak();
  }
  v24 = v37;
  if ( !v37 || v37 != string )
  {
    WindowsDeleteString(string);
    string = 0LL;
    v7 = WindowsDuplicateString(v24, &string);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 785LL;
      goto LABEL_38;
    }
  }
LABEL_36:
  v34 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v34);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 796LL;
    goto LABEL_38;
  }
  *(_QWORD *)length = 0LL;
  if ( v34 == 1 )
  {
    v25 = L"&Positioner=desktop";
    goto LABEL_44;
  }
  if ( v34 == 2 )
  {
    v25 = L"&Positioner=holographic";
LABEL_44:
    *(_QWORD *)length = v25;
  }
  newString = 0LL;
  v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, (const WCHAR **)length);
  WindowsDeleteString(newString);
  newString = 0LL;
  v27 = WindowsConcatString(string, (HSTRING)v26[1].Reserved.Reserved1, &newString);
  v8 = v27;
  if ( v27 >= 0 )
  {
    v29 = newString;
    v28 = 0LL;
    newString = 0LL;
    *a4 = v29;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x329,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v27);
    v28 = newString;
  }
  WindowsDeleteString(v28);
  newString = 0LL;
LABEL_49:
  WindowsDeleteString(string);
  return (unsigned int)v8;
}
