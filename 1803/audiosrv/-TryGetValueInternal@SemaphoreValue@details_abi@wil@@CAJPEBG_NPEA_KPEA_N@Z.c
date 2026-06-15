/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180058790
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800584D8 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800589EC (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18005FA30 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18009B080 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        char *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int v6; // ebp
  __int64 v7; // rcx
  WCHAR *v8; // rax
  WCHAR *v9; // rdx
  __int64 v10; // rax
  char *v11; // r9
  WCHAR v12; // r8
  wil::details *v13; // rax
  wil::details *v14; // rdi
  int ValueFromSemaphore; // eax
  int v16; // ebx
  __int64 v17; // rcx
  WCHAR *v18; // rax
  WCHAR *v19; // rax
  char *v20; // r8
  WCHAR v21; // dx
  void *v22; // rdx
  const char *v23; // r9
  wil::details *v25; // rax
  const char *v26; // r9
  wil::details *v27; // rbx
  int v28; // eax
  void *v29; // rdx
  int LastError; // esi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rsi
  void *v34; // rdx
  int v35; // [rsp+20h] [rbp-258h] BYREF
  int v36[3]; // [rsp+24h] [rbp-254h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( a4 )
    *a4 = 0;
  v6 = 0;
  *a3 = 0LL;
  StringCchCopyW((char *)Name, 260LL, a1);
  v7 = 260LL;
  v8 = Name;
  while ( *v8 )
  {
    ++v8;
    if ( !--v7 )
    {
      v33 = 2147483646LL;
      goto LABEL_13;
    }
  }
  v33 = 2147483646LL;
  v9 = &Name[260 - v7];
  v10 = 2147483646LL;
  v11 = (char *)((char *)L"_p0" - (char *)v9);
  while ( v10 )
  {
    v12 = *(WCHAR *)((char *)v9 + (_QWORD)v11);
    if ( !v12 )
      break;
    *v9 = v12;
    --v10;
    ++v9;
    if ( !--v7 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
LABEL_13:
  v13 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v14 = v13;
  if ( v13 )
  {
    v36[0] = 0;
    v35 = 0;
    ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v13, v36);
    v16 = ValueFromSemaphore;
    if ( ValueFromSemaphore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (unsigned int)"wil",
        (const char *)(unsigned int)ValueFromSemaphore,
        v35);
      v6 = v16;
      goto LABEL_26;
    }
    v17 = 260LL;
    v18 = Name;
    while ( *v18 )
    {
      ++v18;
      if ( !--v17 )
        goto LABEL_30;
    }
    v19 = &Name[260 - v17];
    v20 = (char *)((char *)L"h" - (char *)v19);
    while ( v33 )
    {
      v21 = *(WCHAR *)((char *)v19 + (_QWORD)v20);
      if ( !v21 )
        break;
      *v19 = v21;
      --v33;
      ++v19;
      if ( !--v17 )
      {
        --v19;
        break;
      }
    }
    *v19 = 0;
LABEL_30:
    v25 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
    v27 = v25;
    if ( v25 )
    {
      v28 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v25, &v35);
      LastError = v28;
      if ( v28 >= 0 )
      {
        wil::details::CloseHandle(v27, v29);
        v31 = v36[0];
        v32 = (__int64)v35 << 31;
        if ( a4 )
          *a4 = 1;
        *a3 = v32 | v31;
        goto LABEL_26;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD6,
        (unsigned int)"wil",
        (const char *)(unsigned int)v28,
        v35);
      wil::details::CloseHandle(v27, v34);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (unsigned int)"wil", v26);
    }
    v6 = LastError;
    goto LABEL_26;
  }
  if ( GetLastError() != 2 )
    v6 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (unsigned int)"wil", v23);
LABEL_26:
  if ( v14 )
    wil::details::CloseHandle(v14, v22);
  return v6;
}
