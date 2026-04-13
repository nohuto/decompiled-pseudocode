/*
 * XREFs of ??_E?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_71cc456d2cb9e9e1279ecfc076754c25_@@@Internal@Windows@@VCNoResult@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180039030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_71cc456d2cb9e9e1279ecfc076754c25_::__lambda_71cc456d2cb9e9e1279ecfc076754c25_ @ 0x18002BAF0 (_lambda_71cc456d2cb9e9e1279ecfc076754c25_--__lambda_71cc456d2cb9e9e1279ecfc076754c25_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_71cc456d2cb9e9e1279ecfc076754c25_>,Windows::Internal::CNoResult>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_71cc456d2cb9e9e1279ecfc076754c25_::__lambda_71cc456d2cb9e9e1279ecfc076754c25_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
