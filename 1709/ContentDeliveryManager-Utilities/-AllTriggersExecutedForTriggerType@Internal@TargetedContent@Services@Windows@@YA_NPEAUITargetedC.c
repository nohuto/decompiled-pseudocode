/*
 * XREFs of ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180062C0C
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x18005968C (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002F6D0 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180061BF4 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062404 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b___ @ 0x1800652B0 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_5382d.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2)
{
  char v2; // di
  int v4; // eax
  const WCHAR *RootRegistrationSettingsForTriggerContainer; // rdx
  int v6; // ecx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  _QWORD *v9; // rax
  char v10; // di
  __int64 v11; // rbx
  _QWORD v13[3]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v14; // [rsp+38h] [rbp-48h] BYREF
  WCHAR v15; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp-30h]
  WCHAR v17; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int32 *v18; // [rsp+60h] [rbp-20h]
  __int64 v19[3]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  char v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+B0h] [rbp+30h]
  int v23; // [rsp+B8h] [rbp+38h] BYREF

  v13[1] = -2LL;
  v2 = (char)a2;
  v22 = 0;
  v4 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal *, int *))(*(_QWORD *)this + 80LL))(
         this,
         &v23);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  if ( v2 )
  {
    RootRegistrationSettingsForTriggerContainer = Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
                                                    &v17,
                                                    v23);
    v6 = 1;
  }
  else
  {
    RootRegistrationSettingsForTriggerContainer = Windows::Services::TargetedContent::Internal::GetTriggerSettingsContainer(
                                                    &v15,
                                                    (__int64)this);
    v6 = 2;
  }
  v22 = v6;
  v14 = 0LL;
  if ( &v14 != (__int128 *)RootRegistrationSettingsForTriggerContainer )
  {
    *((_QWORD *)&v14 + 1) = *((_QWORD *)RootRegistrationSettingsForTriggerContainer + 1);
    *((_QWORD *)RootRegistrationSettingsForTriggerContainer + 1) = 0LL;
    *(_QWORD *)&v14 = *(_QWORD *)RootRegistrationSettingsForTriggerContainer;
    *(_QWORD *)RootRegistrationSettingsForTriggerContainer = 0LL;
  }
  if ( (v6 & 2) != 0 )
  {
    v6 &= ~2u;
    v22 = v6;
    v7 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
      LOBYTE(v6) = v22;
    }
  }
  if ( (v6 & 1) != 0 )
  {
    v8 = v18;
    if ( v18 )
    {
      if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
  }
  v21 = 1;
  v9 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
         v19,
         (__int64 *)&v14);
  v13[0] = &v21;
  Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_5382da3890646396393a702566025a7b___(
    v9,
    v13);
  v10 = v21;
  if ( *((_QWORD *)&v14 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL)) )
    {
      v11 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  return v10;
}
