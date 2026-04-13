/*
 * XREFs of ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_14acc09073ccfc16760233ebaab8e057_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18005D270
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_ @ 0x18005A320 (_lambda_14acc09073ccfc16760233ebaab8e057_--__lambda_14acc09073ccfc16760233ebaab8e057_.c)
 */

_QWORD *__fastcall Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_14acc09073ccfc16760233ebaab8e057_>,Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_(a1 + 1);
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
