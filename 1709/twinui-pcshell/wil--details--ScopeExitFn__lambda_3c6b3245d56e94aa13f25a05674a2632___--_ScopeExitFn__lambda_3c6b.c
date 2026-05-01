/*
 * XREFs of wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___ @ 0x18007B204
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x1801E99E3 (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___(
        _BYTE *a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    *(_DWORD *)(*(_QWORD *)a1 + 112LL) = 0;
    v3 = *(_QWORD *)a1;
    v4 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v4 )
    {
      LOBYTE(a2) = v4 != v3;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, a2);
      *(_QWORD *)(v3 + 104) = 0LL;
    }
    *(_QWORD *)(v3 + 104) = 0LL;
  }
  return result;
}
