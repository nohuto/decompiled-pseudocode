/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x140005F20
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1400047E8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x140004A2C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1400052E0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140005C7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140005C94 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140007400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // esi
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
  WCHAR *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  char *v27; // r8
  WCHAR v28; // cx
  WCHAR *v29; // rax
  HANDLE v30; // rbx
  const char *v31; // r9
  unsigned int LastError; // ebp
  int v33; // eax
  void *v34; // rdx
  __int64 v35; // r8
  int v37; // [rsp+20h] [rbp-248h] BYREF
  int v38[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = 0;
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
  v8 = 260 - v6;
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
  if ( v15 )
  {
    v38[0] = 0;
    v37 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v15, v38);
    v21 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, v20, (const char *)(unsigned int)ValueFromSemaphore);
      v4 = v21;
      goto LABEL_37;
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
    {
      v24 = &Name[260 - v22];
      v25 = v22;
      v26 = 2147483646LL;
      v27 = (char *)((char *)L"h" - (char *)v24);
      do
      {
        if ( !v26 )
          break;
        v28 = *(WCHAR *)((char *)v24 + (_QWORD)v27);
        if ( !v28 )
          break;
        *v24 = v28;
        --v26;
        ++v24;
        --v25;
      }
      while ( v25 );
      v29 = v24 - 1;
      if ( v25 )
        v29 = v24;
      *v29 = 0;
    }
    v30 = OpenSemaphoreW(0x1F0003u, 0, Name);
    if ( v30 )
    {
      v33 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, &v37);
      LastError = v33;
      if ( v33 >= 0 )
      {
        wil::details::CloseHandle((wil::details *)v30, v34);
        *a3 = ((__int64)v37 << 31) | v38[0];
        goto LABEL_37;
      }
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, v35, (const char *)(unsigned int)v33);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v31);
    }
    if ( v30 )
      wil::details::CloseHandle((wil::details *)v30, v17);
    v4 = LastError;
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v18);
  }
LABEL_37:
  if ( v16 )
    wil::details::CloseHandle(v16, v17);
  return v4;
}
