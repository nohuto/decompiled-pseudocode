/*
 * XREFs of ?PeekLockScreenRegistryKeys@ContentManagementService@ContentManagement@@UEAAJPEAPEAUHSTRING__@@00PEAE@Z @ 0x1800316F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031B4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001B314 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18002D90C (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::PeekLockScreenRegistryKeys(
        ContentManagement::ContentManagementService *this,
        HSTRING *a2,
        HSTRING *a3,
        HSTRING *a4,
        unsigned __int8 *a5)
{
  int v7; // eax
  unsigned int v8; // r15d
  void *v9; // rbx
  unsigned __int16 *v10; // rsi
  HSTRING *v11; // rdi
  HSTRING *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int16 *v17; // [rsp+38h] [rbp-41h] BYREF
  HSTRING *newString; // [rsp+40h] [rbp-39h] BYREF
  LPVOID v19; // [rsp+48h] [rbp-31h] BYREF
  unsigned __int16 *v20; // [rsp+50h] [rbp-29h] BYREF
  LPVOID pv[2]; // [rsp+58h] [rbp-21h] BYREF
  _BYTE v22[32]; // [rsp+68h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+57h]

  pv[1] = (LPVOID)-2LL;
  newString = a2;
  if ( a2 )
    *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0;
  LOBYTE(v17) = 0;
  pv[0] = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v7 = CreativeFramework::LockScreenCreativeConfigHelpers::PeekLockScreenRegistryKeys(
         0LL,
         (unsigned __int16 **)&v19,
         (DWORD *)&v20,
         (unsigned __int16 **)pv,
         &v17);
  v8 = v7;
  v9 = v19;
  v10 = v20;
  v11 = (HSTRING *)pv[0];
  if ( v7 >= 0 )
  {
    v12 = newString;
    if ( newString )
    {
      newString = (HSTRING *)v19;
      v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, (const WCHAR **)&newString);
      WindowsDuplicateString(*(HSTRING *)(v13 + 24), v12);
    }
    if ( a3 )
    {
      newString = (HSTRING *)v10;
      v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, (const WCHAR **)&newString);
      WindowsDuplicateString(*(HSTRING *)(v14 + 24), a3);
    }
    if ( a4 )
    {
      newString = v11;
      v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v22, (const WCHAR **)&newString);
      WindowsDuplicateString(*(HSTRING *)(v15 + 24), a4);
    }
    if ( a5 )
      *a5 = (unsigned __int8)v17;
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v7);
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v10 )
    CoTaskMemFree(v10);
  if ( v9 )
    CoTaskMemFree(v9);
  return v8;
}
