/*
 * XREFs of ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x1800A269C
 * Callers:
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1800A0B90 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18002754C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _alloca_probe @ 0x1801E5C60 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v19; // rax
  unsigned int v20; // r8d
  unsigned int v21; // ecx
  unsigned int v22; // eax
  UINT32 v23; // edx
  HRESULT v24; // eax
  HSTRING v25; // rbx
  const wchar_t *v26; // rax
  __int64 v27; // rbx
  HRESULT v28; // eax
  HSTRING v29; // rcx
  HSTRING v30; // rax
  HSTRING string; // [rsp+20h] [rbp-E0h] BYREF
  HSTRING newString; // [rsp+28h] [rbp-D8h] BYREF
  UINT32 length[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h]
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v38; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR sourceString[2088]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1108h] [rbp+1008h]

  v36 = -2LL;
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
      v9 = 787LL;
LABEL_39:
      v18 = (unsigned int)v7;
      goto LABEL_40;
    }
    goto LABEL_37;
  }
  length[0] = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, length);
  v11 = StringRawBuffer;
  if ( !StringRawBuffer || !length[0] )
    goto LABEL_37;
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
        v9 = 804LL;
        goto LABEL_39;
      }
    }
    goto LABEL_37;
  }
  memset(sourceString, 0, 0x1048uLL);
  if ( v13 > 0x7FFFFFFE )
  {
    v8 = -2147024809;
    sourceString[0] = 0;
LABEL_16:
    v18 = (unsigned int)v8;
    v9 = 799LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)v18);
    goto LABEL_50;
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
    Microsoft::WRL::Details::RaiseException(v19 > 0xFFFFFFFF ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v21 = v19;
  v22 = v19 + 1;
  if ( v21 + 1 >= v21 )
    v20 = v21 + 1;
  if ( v22 < v21 )
  {
    Microsoft::WRL::Details::RaiseException(v22 < v21 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v23 = v20 - 1;
  if ( v21 < v20 )
    v23 = v21;
  v24 = WindowsCreateStringReference(sourceString, v23, &hstringHeader, &v38);
  if ( v24 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
    __debugbreak();
  }
  v25 = v38;
  if ( !v38 || v38 != string )
  {
    WindowsDeleteString(string);
    string = 0LL;
    v7 = WindowsDuplicateString(v25, &string);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 800LL;
      goto LABEL_39;
    }
  }
LABEL_37:
  v35 = 0;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v35);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 811LL;
    goto LABEL_39;
  }
  *(_QWORD *)length = 0LL;
  if ( v35 == 1 )
  {
    v26 = L"&Positioner=desktop";
    goto LABEL_45;
  }
  if ( v35 == 2 )
  {
    v26 = L"&Positioner=holographic";
LABEL_45:
    *(_QWORD *)length = v26;
  }
  newString = 0LL;
  v27 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&hstringHeader, (const WCHAR **)length);
  WindowsDeleteString(newString);
  newString = 0LL;
  v28 = WindowsConcatString(string, *(HSTRING *)(v27 + 24), &newString);
  v8 = v28;
  if ( v28 >= 0 )
  {
    v30 = newString;
    v29 = 0LL;
    newString = 0LL;
    *a4 = v30;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x338,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v28);
    v29 = newString;
  }
  WindowsDeleteString(v29);
  newString = 0LL;
LABEL_50:
  WindowsDeleteString(string);
  return (unsigned int)v8;
}
