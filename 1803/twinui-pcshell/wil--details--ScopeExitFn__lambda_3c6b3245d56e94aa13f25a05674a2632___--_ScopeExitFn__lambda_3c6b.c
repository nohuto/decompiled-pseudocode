/*
 * XREFs of wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___ @ 0x18013A3E4
 * Callers:
 *     _SmartCookie::Unregister_::_1_::dtor$0 @ 0x18013CF77 (_SmartCookie--Unregister_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___::_ScopeExitFn__lambda_3c6b3245d56e94aa13f25a05674a2632___(
        _BYTE *a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    *(_DWORD *)(*(_QWORD *)a1 + 112LL) = 0;
    v2 = *(_QWORD *)a1;
    result = wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
               *(_QWORD *)a1,
               a2);
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  return result;
}
