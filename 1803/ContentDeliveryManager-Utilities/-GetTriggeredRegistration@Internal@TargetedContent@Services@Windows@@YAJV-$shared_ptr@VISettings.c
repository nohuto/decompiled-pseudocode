/*
 * XREFs of ?GetTriggeredRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAPEAU?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@4@@Z @ 0x18006EA7C
 * Callers:
 *     _lambda_3b51b811795083c8866600a62beaf61a_::operator() @ 0x180061440 (_lambda_3b51b811795083c8866600a62beaf61a_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Make@?$AgileVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180061CCC (-Make@-$AgileVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x18006CEDC (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggeredRegistration(__int64 *a1, __int64 *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rdx
  const char *v8; // r9
  volatile signed __int32 *v9; // rdi
  volatile signed __int32 *v11; // rdi
  __int64 v12; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v13[8]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v16; // [rsp+88h] [rbp+10h]
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h]

  try
  {
    *a2 = 0LL;
    v17 = 0LL;
    v4 = Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,0>::Make(&v17);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1AA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v4);
      JUMPOUT(0x18006EBCDLL);
    }
    v5 = v17;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef(v17);
    v13[0] = off_1800D9C08;
    v13[1] = v5;
    v18 = 0LL;
    v13[3] = v13;
    v6 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
           &v12,
           a1);
    Windows::Services::TargetedContent::Internal::EnumerateTriggersWithStateInContainer(v6, v7, (__int64)v13);
    *a2 = v5;
  }
  catch ( ... )
  {
    v16 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1B6,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
            v8);
    v11 = (volatile signed __int32 *)a1[1];
    if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    return v16;
  }
  v9 = (volatile signed __int32 *)a1[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return 0LL;
}
