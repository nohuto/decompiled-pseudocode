/*
 * XREFs of ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800FFAF0
 * Callers:
 *     ?TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z @ 0x1800FFA64 (-TryGetPointer@SemaphoreValue@details_abi@wil@@SAJPEBGPEAPEAX@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180080350 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800FC6BC (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z @ 0x1800FD174 (-GetValueFromSemaphore@SemaphoreValue@details_abi@wil@@CAJPEAXPEAJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::TryGetValueInternal(
        size_t *a1,
        __int64 a2,
        unsigned __int64 *a3,
        bool *a4)
{
  unsigned int LastError; // esi
  __int64 v7; // rcx
  WCHAR *v8; // rax
  __int64 v9; // rax
  WCHAR *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char *v13; // r8
  WCHAR v14; // r9
  WCHAR *v15; // rax
  wil::details *v16; // rax
  wil::details *v17; // rdi
  void *v18; // rdx
  const char *v19; // r9
  int ValueFromSemaphore; // eax
  int v21; // ebp
  __int64 v22; // rcx
  WCHAR *v23; // rax
  WCHAR *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  char *v27; // r8
  WCHAR v28; // cx
  WCHAR *v29; // rax
  wil::details *v30; // rbx
  const char *v31; // r9
  unsigned int v32; // ebp
  int v33; // eax
  void *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  int v38; // [rsp+20h] [rbp-258h] BYREF
  int v39[3]; // [rsp+24h] [rbp-254h] BYREF
  WCHAR Name[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( a4 )
    *a4 = 0;
  LastError = 0;
  *a3 = 0LL;
  StringCchCopyW(Name, 0x104uLL, a1);
  v7 = 260LL;
  v8 = Name;
  do
  {
    if ( !*v8 )
      break;
    ++v8;
    --v7;
  }
  while ( v7 );
  v9 = 260 - v7;
  if ( v7 )
  {
    v10 = &Name[v9];
    v11 = 260 - v9;
    if ( v9 != 260 )
    {
      v12 = 2147483646LL;
      v13 = (char *)((char *)L"_p0" - (char *)v10);
      do
      {
        if ( !v12 )
          break;
        v14 = *(WCHAR *)((char *)v10 + (_QWORD)v13);
        if ( !v14 )
          break;
        *v10 = v14;
        --v12;
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    v15 = v10 - 1;
    if ( v11 )
      v15 = v10;
    *v15 = 0;
  }
  v16 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  v17 = v16;
  if ( !v16 )
  {
    if ( GetLastError() != 2 )
      LastError = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xC8, (__int64)"wil", v19);
    goto LABEL_41;
  }
  v39[0] = 0;
  v38 = 0;
  ValueFromSemaphore = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v16, v39);
  v21 = ValueFromSemaphore;
  if ( ValueFromSemaphore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCE,
      (__int64)"wil",
      (const char *)(unsigned int)ValueFromSemaphore);
    LastError = v21;
    goto LABEL_41;
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
  v30 = (wil::details *)OpenSemaphoreW(0x1F0003u, 0, Name);
  if ( !v30 )
  {
    v32 = wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0xD4, (__int64)"wil", v31);
LABEL_35:
    if ( v30 )
      wil::details::CloseHandle(v30, v18);
    LastError = v32;
    goto LABEL_41;
  }
  v33 = wil::details_abi::SemaphoreValue::GetValueFromSemaphore(v30, &v38);
  v32 = v33;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0xD6, (__int64)"wil", (const char *)(unsigned int)v33);
    goto LABEL_35;
  }
  wil::details::CloseHandle(v30, v34);
  v35 = v39[0];
  v36 = (__int64)v38 << 31;
  if ( a4 )
    *a4 = 1;
  *a3 = v36 | v35;
LABEL_41:
  if ( v17 )
    wil::details::CloseHandle(v17, v18);
  return LastError;
}
