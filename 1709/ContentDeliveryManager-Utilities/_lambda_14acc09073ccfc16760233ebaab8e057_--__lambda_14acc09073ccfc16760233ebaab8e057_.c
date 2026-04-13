/*
 * XREFs of _lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_ @ 0x18005A320
 * Callers:
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180059C60 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     ??_G?$COperationLambda0@V?$CCallAsyncLambda@V_lambda_14acc09073ccfc16760233ebaab8e057_@@@Internal@Windows@@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@@Internal@Windows@@UEAAPEAXI@Z @ 0x18005D270 (--_G-$COperationLambda0@V-$CCallAsyncLambda@V_lambda_14acc09073ccfc16760233ebaab8e057_@@@Interna.c)
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$5 @ 0x1800B81F7 (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B81F7.c)
 * Callees:
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055F80 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A504 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_(_QWORD *a1)
{
  volatile signed __int32 *v1; // rbx
  HRESULT result; // eax
  HSTRING v4; // rcx
  HSTRING v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx

  v1 = (volatile signed __int32 *)a1[46];
  if ( v1 )
  {
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v1)(v1);
      if ( _InterlockedExchangeAdd(v1 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 8LL))(v1);
    }
  }
  a1[6] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 6);
  result = (unsigned int)wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)(a1 + 6));
  v4 = (HSTRING)a1[4];
  if ( v4 )
    result = WindowsDeleteString(v4);
  v5 = (HSTRING)a1[2];
  if ( v5 )
    result = WindowsDeleteString(v5);
  v6 = a1[1];
  if ( v6 )
  {
    a1[1] = 0LL;
    result = _InterlockedDecrement((volatile signed __int32 *)(v6 + 76));
    if ( result )
    {
      if ( (*(_BYTE *)(v6 + 96) & 4) == 0 && result == 1 )
        goto LABEL_16;
    }
    else
    {
      v7 = *(_DWORD *)(v6 + 96) >> 2;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 1LL);
      if ( (v7 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_16:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return result;
}
