/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18003EC00
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18003EB9C (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031238 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18003EE18 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180044E10 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180067694 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180067728 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  WCHAR *v7; // rax
  __int64 v8; // rax
  WCHAR *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rdx
  char *v12; // r8
  WCHAR v13; // ax
  wil::details *v14; // rax
  wil::details *v15; // rdi
  int ValueFromSemaphore; // eax
  int v17; // esi
  __int64 v18; // rcx
  WCHAR *v19; // rax
  __int64 v20; // rax
  WCHAR *v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rdx
  char *v24; // r8
  WCHAR v25; // ax
  wil::details *v26; // rax
  const char *v27; // r9
  wil::details *v28; // rbx
  int v29; // eax
  void *v30; // rdx
  int LastError; // esi
  void *v32; // rdx
  const char *v34; // r9
  void *v35; // rdx
  int v36; // [rsp+20h] [rbp-248h] BYREF
  int v37[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
      goto LABEL_13;
  }
  v8 = 260 - v6;
  v9 = &Name[260 - v6];
  v10 = 260 - v8;
  if ( v8 == 260 )
    goto LABEL_33;
  v11 = 2147483646LL;
  v12 = (char *)((char *)L"_p0" - (char *)v9);
  while ( v11 )
  {
    v13 = *(WCHAR *)((char *)v9 + (_QWORD)v12);
    if ( !v13 )
      break;
    *v9 = v13;
    --v11;
    ++v9;
    if ( !--v10 )
      goto LABEL_33;
  }
  if ( !v10 )
LABEL_33:
    --v9;
  *v9 = 0;
LABEL_13:
  v14 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v15 = v14;
  if ( v14 )
  {
    v37[0] = 0;
    v36 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v14, v37);
    v17 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCE,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v36);
      v4 = v17;
    }
    else
    {
      v18 = 260LL;
      v19 = Name;
      while ( *v19 )
      {
        ++v19;
        if ( !--v18 )
          goto LABEL_27;
      }
      v20 = 260 - v18;
      v21 = &Name[260 - v18];
      v22 = 260 - v20;
      if ( 260 == v20 )
        goto LABEL_37;
      v23 = 2147483646LL;
      v24 = (char *)((char *)L"h" - (char *)v21);
      while ( v23 )
      {
        v25 = *(WCHAR *)((char *)v21 + (_QWORD)v24);
        if ( !v25 )
          break;
        *v21 = v25;
        --v23;
        ++v21;
        if ( !--v22 )
          goto LABEL_37;
      }
      if ( !v22 )
LABEL_37:
        --v21;
      *v21 = 0;
LABEL_27:
      v26 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v28 = v26;
      if ( v26 )
      {
        v29 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v26, &v36);
        LastError = v29;
        if ( v29 >= 0 )
        {
          wil::details::CloseHandle(v28, v30);
          *a3 = ((__int64)v36 << 31) | v37[0];
          goto LABEL_30;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xD6,
          (unsigned int)"wil",
          (const char *)(unsigned int)v29,
          v36);
        wil::details::CloseHandle(v28, v35);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (unsigned int)"wil", v27);
      }
      v4 = LastError;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (unsigned int)"wil", v34);
  }
LABEL_30:
  if ( v15 )
    wil::details::CloseHandle(v15, v32);
  return v4;
}
