/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1400345D0
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140032574 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1400327A0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x140033338 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140033E30 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140034400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
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
  int v21; // ebp
  __int64 v22; // rax
  WCHAR *v23; // rcx
  __int64 v24; // rcx
  WCHAR *v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rdx
  char *v28; // r8
  WCHAR v29; // cx
  wil::details *v30; // rax
  const char *v31; // r9
  wil::details *v32; // rbx
  unsigned int LastError; // ebp
  int v34; // eax
  void *v35; // rdx
  void *v36; // rdx
  int v38; // [rsp+20h] [rbp-248h] BYREF
  int v39[3]; // [rsp+24h] [rbp-244h] BYREF
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
    v39[0] = 0;
    v38 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, v39);
    v21 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCE,
        (__int64)"wil",
        (const char *)(unsigned int)ValueFromSemaphore);
      v4 = v21;
      goto LABEL_44;
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
      v8 = 0;
      v24 = 260 - v22;
    }
    else
    {
      v24 = 0LL;
    }
    if ( v8 >= 0 )
    {
      v25 = &Name[v24];
      v26 = 260 - v24;
      if ( 260 == v24 )
        goto LABEL_36;
      v27 = 2147483646LL;
      v28 = (char *)((char *)L"h" - (char *)v25);
      while ( v27 )
      {
        v29 = *(WCHAR *)((char *)v25 + (_QWORD)v28);
        if ( !v29 )
          break;
        *v25 = v29;
        --v27;
        ++v25;
        if ( !--v26 )
          goto LABEL_36;
      }
      if ( !v26 )
LABEL_36:
        --v25;
      *v25 = 0;
    }
    v30 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v32 = v30;
    if ( v30 )
    {
      v34 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, &v38);
      LastError = v34;
      if ( v34 >= 0 )
      {
        wil::details::CloseHandle(v32, v35);
        *a3 = ((__int64)v38 << 31) | v39[0];
        goto LABEL_44;
      }
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD6,
        (__int64)"wil",
        (const char *)(unsigned int)v34);
      wil::details::CloseHandle(v32, v36);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v31);
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
