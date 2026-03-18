/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1400064F0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140004DB8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x140003960 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140004F6C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140005828 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400061F0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140006278 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140007A48 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int LastError; // esi
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r9
  WCHAR v13; // r8
  WCHAR *v14; // rax
  wil::details *v15; // rax
  wil::details *v16; // rdi
  void *v17; // rdx
  const char *v18; // r9
  int ValueFromSemaphore; // eax
  __int64 v20; // r8
  int v21; // ebp
  __int64 v22; // rcx
  WCHAR *v23; // rax
  __int64 v24; // rax
  WCHAR *v25; // rdx
  __int64 v26; // rbx
  __int64 v27; // rax
  char *v28; // r8
  WCHAR v29; // cx
  WCHAR *v30; // rax
  wil::details *v31; // rax
  const char *v32; // r9
  wil::details *v33; // rbx
  unsigned int v34; // ebp
  int v35; // eax
  __int64 v36; // r8
  int v38; // [rsp+20h] [rbp-248h] BYREF
  int v39[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  LastError = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v6 = 260LL;
  v7 = Name;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v6;
  }
  while ( v6 );
  if ( v6 )
    v8 = 260 - v6;
  else
    v8 = 0LL;
  if ( v6 )
  {
    v9 = &Name[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    *v14 = 0;
  }
  v15 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v16 = v15;
  if ( !v15 )
  {
    if ( GetLastError() != 2 )
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v18);
    goto LABEL_46;
  }
  v39[0] = 0;
  v38 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, v39);
  v21 = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCE,
      v20,
      (const char *)(unsigned int)ValueFromSemaphore);
    LastError = v21;
    goto LABEL_46;
  }
  v22 = 260LL;
  v23 = Name;
  do
  {
    if ( !*v23 )
      break;
    ++v23;
    --v22;
  }
  while ( v22 );
  if ( v22 )
    v24 = 260 - v22;
  else
    v24 = 0LL;
  if ( v22 )
  {
    v25 = &Name[v24];
    v26 = 260 - v24;
    if ( 260 != v24 )
    {
      v27 = 2147483646LL;
      v28 = (char *)((char *)L"h" - (char *)v25);
      do
      {
        if ( !v27 )
          break;
        v29 = *(WCHAR *)((char *)v25 + (_QWORD)v28);
        if ( !v29 )
          break;
        *v25 = v29;
        --v27;
        ++v25;
        --v26;
      }
      while ( v26 );
    }
    v30 = v25 - 1;
    if ( v26 )
      v30 = v25;
    *v30 = 0;
  }
  v31 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v33 = v31;
  if ( !v31 )
  {
    v34 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v32);
LABEL_40:
    if ( v33 )
      wil::details::CloseHandle(v33, v17);
    LastError = v34;
    goto LABEL_46;
  }
  v35 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v31, &v38);
  v34 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0xD6, v36, (const char *)(unsigned int)v35);
    goto LABEL_40;
  }
  if ( v33 )
    wil::details::CloseHandle(v33, v17);
  *a3 = ((__int64)v38 << 31) | v39[0];
LABEL_46:
  if ( v16 )
    wil::details::CloseHandle(v16, v17);
  return LastError;
}
