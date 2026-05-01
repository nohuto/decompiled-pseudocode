/*
 * XREFs of wistd::function_long___cdecl(unsigned_int_unsigned___int64___int64)_::operator___lambda_548464be655e837fe70a6c635a8d08fa___ @ 0x180159BF4
 * Callers:
 *     ??$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationHandler@Shell@Internal@Windows@@QEAAJPEAVCortanaSharedExperienceManager@@P84@EAAJI_K_J@Z@Z @ 0x18015A81C (--$RuntimeClassInitialize@VCortanaSharedExperienceManager@@@IImmersiveWindowMessageNotificationH.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@JPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIPresentationReadyChangedEventArgs@2345@@Foundation@Windows@@U_Nil@wistd@@U45@U45@U45@U45@U45@@wistd@@IEAAXXZ @ 0x180100310 (-_Tidy@-$_Func_class@JPEAU-$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Wind.c)
 */

__int64 __fastcall wistd::function_long___cdecl_unsigned_int_unsigned___int64___int64__::operator___lambda_548464be655e837fe70a6c635a8d08fa___(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  wistd::_Func_class<long,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs *> *,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Tidy(
    a1,
    a2);
  *(_QWORD *)a1 = off_18031FCF0;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a1 + 8 != a2 )
  {
    *(_QWORD *)(a1 + 8) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 104) = a1;
  return result;
}
