/*
 * XREFs of ?CreateFromPointer@SemaphoreValue@details_abi@wil@@QEAAJPEBGPEAX@Z @ 0x180002BCC
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800037F8 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x180026BB8 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800014A4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002AE4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?create@?$semaphore_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@QEAAJJJPEBGKPEAU_SECURITY_ATTRIBUTES@@@Z @ 0x18000371C (-create@-$semaphore_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@.c)
 *     __security_check_cookie @ 0x180028AF0 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details_abi::SemaphoreValue::CreateFromPointer(
        wil::details_abi::SemaphoreValue *this,
        char *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  signed __int64 v8; // r8
  unsigned __int16 *v9; // rcx
  unsigned int v10; // edi
  unsigned __int16 v11; // ax
  unsigned __int16 *v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  unsigned int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rdx
  unsigned __int16 v21[264]; // [rsp+30h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  if ( (a3 & 3) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v6 = a3 >> 2;
  if ( (v6 & 0xC000000000000000uLL) != 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(this);
  v7 = 260LL;
  v8 = a2 - (char *)v21;
  v9 = v21;
  v10 = 1;
  do
  {
    if ( v7 == -2147483386 )
      break;
    v11 = *(unsigned __int16 *)((char *)v9 + v8);
    if ( !v11 )
      break;
    *v9++ = v11;
    --v7;
  }
  while ( v7 );
  v12 = v9 - 1;
  if ( v7 )
    v12 = v9;
  *v12 = 0;
  StringCchCatW(v21, v7, (char *)L"_p0");
  v13 = 1LL;
  v14 = v6 >> 31;
  v15 = v6 & 0x7FFFFFFF;
  if ( v15 )
    v13 = v15;
  v16 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
          this,
          v15,
          v13,
          v21);
  v18 = v16;
  if ( v16 >= 0 )
  {
    StringCchCatW(v21, v17, (char *)L"h");
    if ( (_DWORD)v14 )
      v10 = v14;
    v16 = wil::semaphore_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>,wil::err_returncode_policy>::create(
            (char *)this + 8,
            (unsigned int)v14,
            v10,
            v21);
    v18 = v16;
    if ( v16 >= 0 )
      return 0;
    v19 = 136LL;
  }
  else
  {
    v19 = 132LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(retaddr, (void *)v19, (__int64)"wil", (const char *)(unsigned int)v16);
  return v18;
}
