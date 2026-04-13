/*
 * XREFs of _lambda_14acc09073ccfc16760233ebaab8e057_::operator() @ 0x18005A03C
 * Callers:
 *     Windows::Internal::COperationLambda0_Windows::Internal::CCallAsyncLambda__lambda_14acc09073ccfc16760233ebaab8e057____Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_____ptr64_____::Run @ 0x18005D240 (Windows--Internal--COperationLambda0_Windows--Internal--CCallAsyncLambda__lambda_14acc09073ccfc1.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E8C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x180055DF0 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x180055EF0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180055F80 (--1-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$0A@$0A@$04U.c)
 *     ??0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAA@AEBV0123@@Z @ 0x1800579E0 (--0TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@Co.c)
 *     ?Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXIPEBD@Z @ 0x180057CC4 (-Stop@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background.c)
 *     ?Destroy@?$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18005A504 (-Destroy@-$ActivityBase@VContentDeliveryManagerLogging@Background@ContentDeliveryManager@@$00$0A.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800628A4 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x180063788 (-GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettings.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800B4307 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall lambda_14acc09073ccfc16760233ebaab8e057_::operator()(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  int TriggeredRegistration; // eax
  int AgileReference; // edi
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rsi
  __int64 v18; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v19; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v23; // [rsp+50h] [rbp-B8h]
  __int64 v24; // [rsp+58h] [rbp-B0h]
  RTL_SRWLOCK *v25; // [rsp+60h] [rbp-A8h]
  __int64 v26; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v27[32]; // [rsp+78h] [rbp-90h] BYREF
  __int128 v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h]
  __int64 v31; // [rsp+B8h] [rbp-50h]
  _QWORD v32[6]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+240h] [rbp+138h]

  v24 = -2LL;
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::TriggerManagerGetTriggeredItemsForStateActivity(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v32,
    (const struct ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)(a1 + 6));
  if ( *(_DWORD *)v33 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v27,
      (struct wil::details::IFailureCallback *)v32,
      (const struct wil::details::StoredCallContextInfo *)(v33 + 40));
  }
  else
  {
    memset_0(v27, 0, sizeof(v27));
    v28 = 0LL;
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
  }
  AcquireSRWLockShared(&`anonymous namespace'::g_triggerManagerLock);
  v25 = &`anonymous namespace'::g_triggerManagerLock;
  v20 = 0LL;
  Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainerFromName(&v22, a1[2], a1[4]);
  v4 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v26,
         &v22);
  TriggeredRegistration = Windows::Services::TargetedContent::Internal::GetTriggeredRegistration(v4, &v20);
  AgileReference = TriggeredRegistration;
  v7 = v20;
  if ( TriggeredRegistration < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x130,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)TriggeredRegistration);
    goto LABEL_26;
  }
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 64LL))(v20, &v18);
  AgileReference = v8;
  if ( v8 < 0 )
  {
    v9 = 306LL;
LABEL_21:
    v14 = (unsigned int)v8;
    goto LABEL_22;
  }
  v10 = v18;
  v11 = v18;
  v12 = *(_QWORD *)(a2 + 16);
  if ( v12 )
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v10 = v18;
  }
  if ( v11 )
  {
    v19 = 0LL;
    AgileReference = RoGetAgileReference(0LL, &GUID_825906ff_fa5d_5af8_83b4_3bba69c98b1e, v11, &v19);
    if ( AgileReference < 0 )
    {
      v13 = v19;
    }
    else
    {
      v13 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a2 + 16) = v19;
      v19 = v13;
    }
    if ( v13 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( AgileReference < 0 )
    {
      v14 = (unsigned int)AgileReference;
      v9 = 307LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v9,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)v14);
      goto LABEL_24;
    }
    v10 = v18;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 56LL))(v10, &v21);
  AgileReference = v8;
  if ( v8 < 0 )
  {
    v9 = 310LL;
    goto LABEL_21;
  }
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::Stop(
    (ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity *)v32,
    v21,
    (const char *)(a1[45] + 8LL));
  AgileReference = 0;
LABEL_24:
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_26:
  v16 = v23;
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
    v7 = v20;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  ReleaseSRWLockShared(&`anonymous namespace'::g_triggerManagerLock);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v27);
  v32[0] = &ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerGetTriggeredItemsForStateActivity::`vftable';
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v32);
  wil::ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ContentDeliveryManager::Background::ContentDeliveryManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v32);
  return (unsigned int)AgileReference;
}
