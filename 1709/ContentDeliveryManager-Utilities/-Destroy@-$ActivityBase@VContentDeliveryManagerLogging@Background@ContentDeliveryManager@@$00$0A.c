/*
 * XREFs of ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A504
 * Callers:
 *     ??1TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800564D8 (--1TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMana.c)
 *     ??1TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x180056F68 (--1TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryMa.c)
 *     ??1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@XZ @ 0x1800579B8 (--1TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180058824 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18005968C (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 *     ?GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@00PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x180059C60 (-GetTriggeredItemsForStateAsync@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Se.c)
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::operator() @ 0x18005A03C (_lambda_14acc09073ccfc16760233ebaab8e057_--operator().c)
 *     _lambda_14acc09073ccfc16760233ebaab8e057_::__lambda_14acc09073ccfc16760233ebaab8e057_ @ 0x18005A320 (_lambda_14acc09073ccfc16760233ebaab8e057_--__lambda_14acc09073ccfc16760233ebaab8e057_.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180032050 (-LockExclusive@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@.c)
 *     ??1?$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180056034 (--1-$ActivityData@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@_ea_180056034.c)
 *     ?ReportStopActivity@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18005ADD8 (-ReportStopActivity@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryMana.c)
 */

void __fastcall wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(
        __int64 a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  void *v4; // rdi
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r8d
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  if ( !*(_QWORD *)(a1 + 304) )
    goto LABEL_12;
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    a1,
    &SRWLock);
  v3 = *(volatile signed __int32 **)(a1 + 304);
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = *(void **)(a1 + 304);
        if ( v4 )
        {
          wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      *(_QWORD *)(a1 + 304) = 0LL;
    }
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v2 )
  {
LABEL_12:
    v5 = *(_DWORD **)(a1 + 48);
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      v7 = v5[18];
      if ( (int)v5[21] < 0 )
        v6 = v5[21];
      if ( v7 < 1 )
        __fastfail(7u);
      if ( (int)v5[19] >= 0 )
        v5[19] = v6;
      v5[18] = v7 - 1;
      wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ReportStopActivity(
        a1,
        (unsigned int)v5[19]);
    }
  }
}
