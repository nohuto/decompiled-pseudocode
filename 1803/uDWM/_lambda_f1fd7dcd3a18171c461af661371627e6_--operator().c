/*
 * XREFs of _lambda_f1fd7dcd3a18171c461af661371627e6_::operator() @ 0x18006FB88
 * Callers:
 *     _lambda_f1fd7dcd3a18171c461af661371627e6_::_lambda_invoker_cdecl_ @ 0x18006F9F0 (_lambda_f1fd7dcd3a18171c461af661371627e6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z @ 0x18006FF10 (-ReleaseFromCallback@registry_watcher_state@details@wil@@QEAAXW4RegistryChangeKind@3@@Z.c)
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180070208 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_f1fd7dcd3a18171c461af661371627e6_::operator()(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        BOOL a5)
{
  char v5; // bl
  __int64 result; // rax
  LSTATUS v8; // eax
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rcx
  BOOL v12; // ebx
  BOOL fAsynchronous; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 1;
  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a3 + 140));
  if ( (int)result > 1 )
  {
    v8 = RegNotifyChangeKeyValue(
           *(HKEY *)(a3 + 112),
           *(unsigned __int8 *)(a3 + 136),
           0x10000005u,
           *(HANDLE *)(a3 + 120),
           1);
    if ( !v8 || v8 == 1018 || v8 == 5 )
      v5 = 0;
    if ( v8 > 0 )
      v10 = (const char *)((unsigned __int16)v8 | 0x80070000);
    else
      v10 = (const char *)(unsigned int)v8;
    if ( v5 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xBF,
        (unsigned int)"internal\\sdk\\inc\\wil\\registry.h",
        v10,
        fAsynchronous);
      __debugbreak();
    }
    v11 = *(_QWORD *)(a3 + 104);
    v12 = v8 == 1018;
    a5 = v12;
    if ( !v11 )
      __fastfail(7u);
    (*(void (__fastcall **)(__int64, BOOL *, __int64, const char *))(*(_QWORD *)v11 + 16LL))(v11, &a5, v9, v10);
    return wil::details::registry_watcher_state::ReleaseFromCallback(a3, v12);
  }
  return result;
}
