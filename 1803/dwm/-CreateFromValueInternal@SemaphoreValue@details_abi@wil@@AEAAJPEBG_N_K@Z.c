/*
 * XREFs of ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x140004A50
 * Callers:
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140005768 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 * Callees:
 *     __security_check_cookie @ 0x140003040 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140005C94 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x1400061BC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x140006238 (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140007400 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromValueInternal(
        wil::details_abi::SemaphoreValue *this,
        const unsigned __int16 *a2,
        __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int16 *v7; // rax
  __int64 v8; // rax
  unsigned __int16 *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  char *v12; // r9
  unsigned __int16 v13; // r8
  unsigned __int16 *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned int v16; // ebp
  unsigned int v17; // edi
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // edi
  __int64 v23; // rcx
  unsigned __int16 *v24; // rax
  __int64 v25; // rax
  unsigned __int16 *v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  char *v29; // r8
  unsigned __int16 v30; // dx
  unsigned __int16 *v31; // rax
  int v32; // eax
  unsigned int v33; // r8d
  unsigned int v34; // ebx
  int v35; // [rsp+20h] [rbp-258h]
  unsigned __int16 v36[264]; // [rsp+30h] [rbp-248h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+278h] [rbp+0h]

  if ( (a4 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  StringCchCopyW(v36, 0x104uLL, a2);
  v6 = 260LL;
  v7 = v36;
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
    v9 = &v36[v8];
    v10 = 260 - v8;
    if ( v8 != 260 )
    {
      v11 = 2147483646LL;
      v12 = (char *)((char *)L"_p0" - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v12);
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
  v15 = a4 >> 31;
  v16 = 1;
  v17 = a4 & 0x7FFFFFFF;
  v18 = 1LL;
  if ( v17 )
    v18 = v17;
  v19 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          this,
          v17,
          v18,
          v36);
  v21 = v19;
  if ( v19 >= 0 )
  {
    v23 = 260LL;
    v24 = v36;
    do
    {
      if ( !*v24 )
        break;
      ++v24;
      --v23;
    }
    while ( v23 );
    v25 = 260 - v23;
    if ( v23 )
    {
      v26 = &v36[v25];
      v27 = 260 - v25;
      if ( 260 != v25 )
      {
        v28 = 2147483646LL;
        v29 = (char *)((char *)L"h" - (char *)v26);
        do
        {
          if ( !v28 )
            break;
          v30 = *(unsigned __int16 *)((char *)v26 + (_QWORD)v29);
          if ( !v30 )
            break;
          *v26 = v30;
          --v28;
          ++v26;
          --v27;
        }
        while ( v27 );
      }
      v31 = v26 - 1;
      if ( v27 )
        v31 = v26;
      *v31 = 0;
    }
    if ( (_DWORD)v15 )
      v16 = v15;
    v32 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            (char *)this + 8,
            (unsigned int)v15,
            v16,
            v36);
    v34 = v32;
    if ( v32 >= 0 )
    {
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(retaddr, (void *)0x88, v33, (const char *)(unsigned int)v32, v35);
      return v34;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(retaddr, (void *)0x84, v20, (const char *)(unsigned int)v19, v35);
    return v21;
  }
}
