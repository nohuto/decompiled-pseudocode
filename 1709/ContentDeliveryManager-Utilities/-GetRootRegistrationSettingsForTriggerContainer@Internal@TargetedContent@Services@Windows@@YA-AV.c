/*
 * XREFs of ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180061BF4
 * Callers:
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180062404 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800628A4 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedContentTriggerInternal@1234@_N@Z @ 0x180062C0C (-AllTriggersExecutedForTriggerType@Internal@TargetedContent@Services@Windows@@YA_NPEAUITargetedC.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018B48 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18005F1FC (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800619F8 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     ?CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@_N@Z @ 0x1800962D0 (-CreateContainer@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VISetting.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
const WCHAR *__fastcall Windows::Services::TargetedContent::Internal::GetRootRegistrationSettingsForTriggerContainer(
        const WCHAR *a1,
        int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r9
  volatile signed __int32 *v6; // rbx
  const WCHAR *v8[3]; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v9[8]; // [rsp+40h] [rbp-48h] BYREF
  volatile signed __int32 *v10; // [rsp+48h] [rbp-40h]
  _BYTE v11[24]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h]

  v8[1] = (const WCHAR *)-2LL;
  v8[2] = a1;
  v8[0] = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(a2);
  v3 = *(_QWORD *)Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer((__int64)v9);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v11, v8);
  LOBYTE(v5) = 1;
  CreativeFramework::CommonHelper::SettingsContainer::CreateContainer(v3, a1, *(_QWORD *)(v4 + 24), v5, 0);
  v12 = 0LL;
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a1;
}
