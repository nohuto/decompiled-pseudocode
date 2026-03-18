/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800CE510
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800BC554 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800C97B8 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800CE730 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800CF704 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  WCHAR *v8; // rdx
  __int64 v9; // rax
  char *v10; // r9
  WCHAR v11; // r8
  wil::details *v12; // rax
  wil::details *v13; // rdi
  int ValueFromSemaphore; // eax
  int v15; // esi
  __int64 v16; // rcx
  WCHAR *v17; // rax
  WCHAR *v18; // rax
  char *v19; // r8
  WCHAR v20; // dx
  wil::details *v21; // rax
  const char *v22; // r9
  wil::details *v23; // rbx
  int v24; // eax
  void *v25; // rdx
  int LastError; // esi
  void *v27; // rdx
  __int64 v29; // rbx
  const char *v30; // r9
  void *v31; // rdx
  int v32; // [rsp+20h] [rbp-248h] BYREF
  int v33[3]; // [rsp+24h] [rbp-244h] BYREF
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
    {
      v29 = 2147483646LL;
      goto LABEL_11;
    }
  }
  v29 = 2147483646LL;
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
    v33[0] = 0;
    v32 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v12, v33);
    v15 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v32);
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
      v19 = (char *)((char *)L"h" - (char *)v18);
      while ( v29 )
      {
        v20 = *(WCHAR *)((char *)v18 + (_QWORD)v19);
        if ( !v20 )
          break;
        *v18 = v20;
        --v29;
        ++v18;
        if ( !--v16 )
        {
          --v18;
          break;
        }
      }
      *v18 = 0;
LABEL_23:
      v21 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
      v23 = v21;
      if ( v21 )
      {
        v24 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v21, &v32);
        LastError = v24;
        if ( v24 >= 0 )
        {
          wil::details::CloseHandle(v23, v25);
          *a3 = ((__int64)v32 << 31) | v33[0];
          goto LABEL_26;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD6,
          (unsigned int)"wil",
          (const char *)(unsigned int)v24,
          v32);
        wil::details::CloseHandle(v23, v31);
      }
      else
      {
        LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (unsigned int)"wil", v22);
      }
      v4 = LastError;
    }
  }
  else if ( GetLastError() != 2 )
  {
    v4 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (unsigned int)"wil", v30);
  }
LABEL_26:
  if ( v13 )
    wil::details::CloseHandle(v13, v27);
  return v4;
}
