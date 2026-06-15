/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18002A560
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x18002A4F8 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x18002A788 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18002EEF4 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007EC90 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v4; // ebp
  __int64 v6; // rcx
  WCHAR *v7; // rax
  WCHAR *v8; // rax
  __int64 v9; // rdx
  char *v10; // r9
  WCHAR v11; // r8
  wil::details *v12; // rax
  wil::details *v13; // rdi
  int ValueFromSemaphore; // eax
  int v15; // ebx
  __int64 v16; // rcx
  WCHAR *v17; // rax
  WCHAR *v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  char *v21; // r8
  WCHAR v22; // cx
  wil::details *v23; // rax
  const char *v24; // r9
  wil::details *v25; // rbx
  int v26; // eax
  void *v27; // rdx
  int LastError; // esi
  void *v29; // rdx
  const char *v31; // r9
  void *v32; // rdx
  int v33; // [rsp+20h] [rbp-248h] BYREF
  int v34[3]; // [rsp+24h] [rbp-244h] BYREF
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
      goto LABEL_11;
  }
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
    v34[0] = 0;
    v33 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, v34);
    v15 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xCE,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v33);
      v4 = v15;
    }
    else
    {
      v16 = 260LL;
      v17 = Name;
      while ( *v17 )
      {
        ++v17;
        if ( !--v16 )
          goto LABEL_23;
      }
      v18 = &Name[260 - v16];
      v19 = v16;
      v20 = 2147483646LL;
      v21 = (char *)((char *)L"h" - (char *)v18);
      while ( v20 )
      {
        v22 = *(WCHAR *)((char *)v18 + (_QWORD)v21);
        if ( !v22 )
          break;
        *v18 = v22;
        --v20;
        ++v18;
        if ( !--v19 )
        {
          --v18;
          break;
        }
      }
      *v18 = 0;
LABEL_23:
      v23 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v25 = v23;
      if ( v23 )
      {
        v26 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v23, &v33);
        LastError = v26;
        if ( v26 >= 0 )
        {
          wil::details::CloseHandle(v25, v27);
          *a3 = ((__int64)v33 << 31) | v34[0];
          goto LABEL_26;
        }
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xD6,
          (unsigned int)"wil",
          (const char *)(unsigned int)v26,
          v33);
        wil::details::CloseHandle(v25, v32);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (unsigned int)"wil", v24);
      }
      v4 = LastError;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (unsigned int)"wil", v31);
  }
LABEL_26:
  if ( v13 )
    wil::details::CloseHandle(v13, v29);
  return v4;
}
