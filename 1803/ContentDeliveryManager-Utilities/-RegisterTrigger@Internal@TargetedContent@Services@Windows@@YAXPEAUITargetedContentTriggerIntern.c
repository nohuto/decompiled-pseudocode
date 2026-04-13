/*
 * XREFs of ?RegisterTrigger@Internal@TargetedContent@Services@Windows@@YAXPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18005F600
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F3D8 (-CreateCreativeRule@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VCreativeRule@R.c)
 *     ??R?$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@U_Nil@7@U87@U87@U87@U87@@std@@QEBAJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@1@@Z @ 0x180061DB4 (--R-$_Func_class@JPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@.c)
 *     ?ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA?AW4TriggerRegistrationOption@1234@W4TargetedContentKnownTrigger@1234@@Z @ 0x180068FB8 (-ResolveTriggerRegistrationOption@Internal@TargetedContent@Services@Windows@@YA-AW4TriggerRegist.c)
 *     ?ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TriggerRegistrationOption@1234@@Z @ 0x18006AAC0 (-ResolveRegisterTaskHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AJPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x18006B330 (-ResolveTriggerSetupHandler@Internal@TargetedContent@Services@Windows@@YA-AV-$function@$$A6AJPEA.c)
 *     ?AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@@Z @ 0x180074A00 (-AddRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@UEAAXAEBV-$shared_ptr@VCreat.c)
 *     ?MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA?AV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@std@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@4@@Z @ 0x180075804 (-MakeDiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@YA-AV-$shared_ptr@VIRuleSetHandl.c)
 *     __security_check_cookie @ 0x1800C0A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Services::TargetedContent::Internal::RegisterTrigger(__int64 a1, __int64 *a2)
{
  int v4; // eax
  unsigned int v5; // eax
  char v6; // bl
  _QWORD *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  _BYTE *v10; // rdx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  volatile signed __int32 *v13; // rbx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  volatile signed __int32 *v16; // rbx
  _QWORD *v17; // rax
  __int64 result; // rax
  wil::details::in1diag3 *v19; // rcx
  _BYTE *v20; // rdx
  volatile signed __int32 *v21; // rbx
  _DWORD v22[4]; // [rsp+38h] [rbp-79h] BYREF
  __int64 v23; // [rsp+48h] [rbp-69h] BYREF
  volatile signed __int32 *v24; // [rsp+50h] [rbp-61h]
  __int64 v25; // [rsp+58h] [rbp-59h]
  __int64 *v26; // [rsp+60h] [rbp-51h]
  __int64 v27; // [rsp+68h] [rbp-49h] BYREF
  __int64 v28; // [rsp+78h] [rbp-39h] BYREF
  __int64 v29; // [rsp+88h] [rbp-29h] BYREF
  volatile signed __int32 *v30; // [rsp+90h] [rbp-21h]
  __int64 v31; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v32[24]; // [rsp+A8h] [rbp-9h] BYREF
  _BYTE *v33; // [rsp+C0h] [rbp+Fh]
  _BYTE v34[24]; // [rsp+C8h] [rbp+17h] BYREF
  _BYTE *v35; // [rsp+E0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v25 = -2LL;
  v26 = a2;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a1 + 80LL))(a1, v22);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_26;
  }
  v5 = Windows::Services::TargetedContent::Internal::ResolveTriggerRegistrationOption(v22[0]);
  v6 = v5;
  if ( (v5 & 8) == 0 )
    goto LABEL_6;
  Windows::Services::TargetedContent::Internal::ResolveRegisterTaskHandler(v34, v5);
  v7 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         &v27,
         a2);
  v8 = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
         v34,
         a1,
         v7);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x6C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_27;
  }
  if ( v35 )
  {
    v10 = v34;
    LOBYTE(v10) = v35 != v34;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v35 + 32LL))(v35, v10);
  }
LABEL_6:
  if ( (v6 & 0x20) == 0 )
    goto LABEL_17;
  v11 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          &v28,
          a2);
  CreativeFramework::RuleSetHandlers::MakeDiagTrackRuleSetHandler(&v23, v11);
  v12 = Windows::Services::TargetedContent::Internal::CreateCreativeRule(&v29, a1);
  CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::AddRule(v23, v12);
  v13 = v30;
  if ( v30 )
  {
    if ( _InterlockedExchangeAdd(v30 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *(_BYTE *)(v23 + 24) )
  {
    v14 = RtlPublishWnfStateData(WNF_SHEL_SOFTLANDING_RULES_UPDATED, 0LL, 0LL, 0LL, 0LL) | 0x10000000;
    v15 = retaddr;
    if ( v14 < 0 )
    {
LABEL_27:
      wil::details::in1diag3::Throw_Hr(
        v15,
        (void *)0x15A1,
        (__int64)"internal\\sdk\\inc\\wil\\resource.h",
        (const char *)(unsigned int)v14);
      goto LABEL_28;
    }
  }
  if ( v24 )
  {
    if ( !_InterlockedDecrement(v24 + 2) )
    {
      v16 = v24;
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( !_InterlockedDecrement(v16 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
LABEL_17:
  Windows::Services::TargetedContent::Internal::ResolveTriggerSetupHandler(v32, v22[0]);
  v17 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
          &v31,
          a2);
  result = std::_Func_class<long,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::operator()(
             v32,
             a1,
             v17);
  v19 = retaddr;
  if ( (int)result < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x77,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)result);
    JUMPOUT(0x18005F8C7LL);
  }
  if ( v33 )
  {
    v20 = v32;
    LOBYTE(v20) = v33 != v32;
    result = (*(__int64 (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v33 + 32LL))(v33, v20);
    v33 = 0LL;
  }
  v21 = (volatile signed __int32 *)a2[1];
  if ( v21 )
  {
    result = (unsigned int)_InterlockedDecrement(v21 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
      result = (unsigned int)_InterlockedDecrement(v21 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return result;
}
