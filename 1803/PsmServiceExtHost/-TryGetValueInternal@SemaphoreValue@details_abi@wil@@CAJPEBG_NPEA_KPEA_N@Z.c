/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18003D2D0
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18003D268 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800288A0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18003D4F0 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18003E058 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800615B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800615D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rdx
  __int64 v9; // rax
  char *v10; // r9
  WCHAR v11; // r8
  wil::details *v12; // rax
  wil::details *v13; // rdi
  int ValueFromSemaphore; // eax
  unsigned int v15; // r8d
  int v16; // ebx
  __int64 v17; // rcx
  WCHAR *v18; // rax
  WCHAR *v19; // rax
  char *v20; // r8
  WCHAR v21; // dx
  wil::details *v22; // rax
  const char *v23; // r9
  wil::details *v24; // rbx
  int v25; // eax
  void *v26; // rdx
  unsigned int v27; // r8d
  int LastError; // esi
  void *v29; // rdx
  __int64 v31; // rsi
  const char *v32; // r9
  void *v33; // rdx
  int v34; // [rsp+20h] [rbp-248h] BYREF
  int v35[3]; // [rsp+24h] [rbp-244h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v4 = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v6 = 260LL;
  v7 = Name;
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
    {
      v31 = 2147483646LL;
      goto LABEL_11;
    }
  }
  v31 = 2147483646LL;
  v8 = &Name[260 - v6];
  v9 = 2147483646LL;
  v10 = (char *)((char *)L"_p0" - (char *)v8);
  while ( v9 )
  {
    v11 = *(WCHAR *)((char *)v8 + (_QWORD)v10);
    if ( !v11 )
      break;
    *v8 = v11;
    --v9;
    ++v8;
    if ( !--v6 )
    {
      --v8;
      break;
    }
  }
  *v8 = 0;
LABEL_11:
  v12 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v13 = v12;
  if ( v12 )
  {
    v35[0] = 0;
    v34 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, v35);
    v16 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0xCE, v15, (const char *)(unsigned int)ValueFromSemaphore, v34);
      v4 = v16;
    }
    else
    {
      v17 = 260LL;
      v18 = Name;
      while ( *v18 )
      {
        ++v18;
        if ( !--v17 )
          goto LABEL_23;
      }
      v19 = &Name[260 - v17];
      v20 = (char *)((char *)L"h" - (char *)v19);
      while ( v31 )
      {
        v21 = *(WCHAR *)((char *)v19 + (_QWORD)v20);
        if ( !v21 )
          break;
        *v19 = v21;
        --v31;
        ++v19;
        if ( !--v17 )
        {
          --v19;
          break;
        }
      }
      *v19 = 0;
LABEL_23:
      v22 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v24 = v22;
      if ( v22 )
      {
        v25 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v22, &v34);
        LastError = v25;
        if ( v25 >= 0 )
        {
          wil::details::CloseHandle(v24, v26);
          *a3 = ((__int64)v34 << 31) | v35[0];
          goto LABEL_26;
        }
        wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, v27, (const char *)(unsigned int)v25, v34);
        wil::details::CloseHandle(v24, v33);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (unsigned int)"wil", v23);
      }
      v4 = LastError;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (unsigned int)"wil", v32);
  }
LABEL_26:
  if ( v13 )
    wil::details::CloseHandle(v13, v29);
  return v4;
}
