/*
 * XREFs of ?UnregisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F3D8 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x180061DB4 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180068FB8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006A934 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006B3B8 (-ResolveTriggerCleanupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJP.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x18006DB48 (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 *     ?RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180075070 (-RemoveRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCr.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x180075804 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall Windows::Services::TargetedContent::Internal::UnregisterTrigger(
        Windows::Services::TargetedContent::Internal *this,
        __int64 *a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  unsigned int v8; // eax
  char v9; // bl
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *v10; // rdx
  bool v11; // r8
  int v12; // eax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  volatile signed __int32 *v16; // rbx
  wil::details::in1diag3 *v17; // rcx
  volatile signed __int32 *v18; // rbx
  _BYTE *v19; // rdx
  volatile signed __int32 *v20; // rbx
  unsigned int v22; // [rsp+38h] [rbp-49h] BYREF
  __int64 v23; // [rsp+40h] [rbp-41h] BYREF
  volatile signed __int32 *v24; // [rsp+48h] [rbp-39h]
  __int64 v25; // [rsp+50h] [rbp-31h]
  __int64 *v26; // [rsp+58h] [rbp-29h]
  __int64 v27; // [rsp+60h] [rbp-21h] BYREF
  __int64 v28; // [rsp+70h] [rbp-11h] BYREF
  __int64 v29; // [rsp+80h] [rbp-1h] BYREF
  __int64 v30; // [rsp+90h] [rbp+Fh] BYREF
  volatile signed __int32 *v31; // [rsp+98h] [rbp+17h]
  _BYTE v32[24]; // [rsp+A0h] [rbp+1Fh] BYREF
  _BYTE *v33; // [rsp+B8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v25 = -2LL;
  v26 = a2;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, unsigned int *))(*(_QWORD *)this + 80LL))(
         this,
         &v22);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  Windows::Services::TargetedContent::Internal::ResolveTriggerCleanupHandler(v32, v22);
  v5 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v27,
         a2);
  v6 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
         v32,
         this,
         v5);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_26;
  v8 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v22);
  v9 = v8;
  v10 = (struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *)(v8 >> 8);
  LOBYTE(v10) = BYTE1(v8) & 1;
  LOBYTE(v12) = Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(this, v10, v11);
  if ( !(_BYTE)v12 )
    goto LABEL_18;
  if ( (v9 & 1) != 0 && (v9 & 4) == 0 )
  {
    v13 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
            &v28,
            a2);
    v12 = Windows::Services::TargetedContent::Internal::UnRegisterTriggerTask(this, v13);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x87,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_28;
    }
  }
  if ( (v9 & 0x20) == 0 )
    goto LABEL_18;
  v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          &v29,
          a2);
  CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v23, v14);
  v15 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v30, (__int64)this);
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule(v23, v15);
  v16 = v31;
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  LOBYTE(v12) = v23;
  if ( *(_BYTE *)(v23 + 24) )
  {
    v12 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    v17 = retaddr;
    if ( v12 < 0 )
    {
LABEL_28:
      wil::details::in1diag3::Throw_Hr(
        v17,
        (void *)0x15A1,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        (const char *)(unsigned int)v12);
      JUMPOUT(0x18005FB86LL);
    }
  }
  if ( v24 )
  {
    v12 = _InterlockedDecrement(v24 + 2);
    if ( !v12 )
    {
      v18 = v24;
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      v12 = _InterlockedDecrement(v18 + 3);
      if ( !v12 )
        LOBYTE(v12) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
LABEL_18:
  if ( v33 )
  {
    v19 = v32;
    LOBYTE(v19) = v33 != v32;
    LOBYTE(v12) = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v19);
    v33 = 0LL;
  }
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 )
  {
    v12 = _InterlockedDecrement(v20 + 2);
    if ( !v12 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      v12 = _InterlockedDecrement(v20 + 3);
      if ( !v12 )
        LOBYTE(v12) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  return v12;
}
