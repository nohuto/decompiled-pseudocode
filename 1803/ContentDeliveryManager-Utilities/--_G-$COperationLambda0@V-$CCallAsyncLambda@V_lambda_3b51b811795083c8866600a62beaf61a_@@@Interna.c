/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_3b51b811795083c8866600a62beaf61a_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x180066BA0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_3b51b811795083c8866600a62beaf61a_::__lambda_3b51b811795083c8866600a62beaf61a_ @ 0x180061A8C (_lambda_3b51b811795083c8866600a62beaf61a_--__lambda_3b51b811795083c8866600a62beaf61a_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_3b51b811795083c8866600a62beaf61a_>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_3b51b811795083c8866600a62beaf61a_::__lambda_3b51b811795083c8866600a62beaf61a_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
