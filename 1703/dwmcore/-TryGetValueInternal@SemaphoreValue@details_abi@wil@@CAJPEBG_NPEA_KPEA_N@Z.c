/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180137F88
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180136598 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800C6740 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180136768 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1801371B8 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180137B68 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180137BF0 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // esi
  __int64 v6; // rax
  WCHAR *v7; // rcx
  int v8; // r14d
  int v9; // ecx
  __int64 v10; // rdx
  WCHAR *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  char *v14; // r9
  WCHAR v15; // dx
  wil::details *v16; // rax
  wil::details *v17; // rdi
  void *v18; // rdx
  const char *v19; // r9
  int ValueFromSemaphore; // eax
  __int64 v21; // r8
  int v22; // ebp
  __int64 v23; // rax
  WCHAR *v24; // rcx
  __int64 v25; // rcx
  WCHAR *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rdx
  char *v29; // r8
  WCHAR v30; // cx
  wil::details *v31; // rax
  const char *v32; // r9
  wil::details *v33; // rbx
  unsigned int LastError; // ebp
  int v35; // eax
  void *v36; // rdx
  __int64 v37; // r8
  void *v38; // rdx
  int v40; // [rsp+20h] [rbp-248h] BYREF
  int v41[3]; // [rsp+24h] [rbp-244h] BYREF
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
  v8 = -2147024809;
  v9 = -2147024809;
  if ( v6 )
  {
    v9 = 0;
    v10 = 260 - v6;
  }
  else
  {
    v10 = 0LL;
  }
  if ( v9 >= 0 )
  {
    v11 = &Name[v10];
    v12 = 260 - v10;
    if ( v10 == 260 )
      goto LABEL_15;
    v13 = 2147483646LL;
    v14 = (char *)((char *)L"_p0" - (char *)v11);
    while ( v13 )
    {
      v15 = *(WCHAR *)((char *)v11 + (_QWORD)v14);
      if ( !v15 )
        break;
      *v11 = v15;
      --v13;
      ++v11;
      if ( !--v12 )
        goto LABEL_15;
    }
    if ( !v12 )
LABEL_15:
      --v11;
    *v11 = 0;
  }
  v16 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v17 = v16;
  if ( v16 )
  {
    v41[0] = 0;
    v40 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, v41);
    v22 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCE,
        v21,
        (const char *)(unsigned int)ValueFromSemaphore);
      v4 = v22;
      goto LABEL_44;
    }
    v23 = 260LL;
    v24 = Name;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v23;
    }
    while ( v23 );
    if ( v23 )
    {
      v8 = 0;
      v25 = 260 - v23;
    }
    else
    {
      v25 = 0LL;
    }
    if ( v8 >= 0 )
    {
      v26 = &Name[v25];
      v27 = 260 - v25;
      if ( 260 == v25 )
        goto LABEL_36;
      v28 = 2147483646LL;
      v29 = (char *)((char *)L"h" - (char *)v26);
      while ( v28 )
      {
        v30 = *(WCHAR *)((char *)v26 + (_QWORD)v29);
        if ( !v30 )
          break;
        *v26 = v30;
        --v28;
        ++v26;
        if ( !--v27 )
          goto LABEL_36;
      }
      if ( !v27 )
LABEL_36:
        --v26;
      *v26 = 0;
    }
    v31 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v33 = v31;
    if ( v31 )
    {
      v35 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v31, &v40);
      LastError = v35;
      if ( v35 >= 0 )
      {
        wil::details::CloseHandle(v33, v36);
        *a3 = ((__int64)v40 << 31) | v41[0];
        goto LABEL_44;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)0xD6, v37, (const char *)(unsigned int)v35);
      wil::details::CloseHandle(v33, v38);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v32);
    }
    v4 = LastError;
    goto LABEL_44;
  }
  if ( GetLastError() != 2 )
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v19);
LABEL_44:
  if ( v17 )
    wil::details::CloseHandle(v17, v18);
  return v4;
}
