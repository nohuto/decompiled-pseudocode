/*
 * XREFs of ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x18005F1FC
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_b1678f9b9404a342b907309c6392cb38___ @ 0x18005B830 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_b1678f9b9404a342b90.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_c1333ba9be4c29c31379dbf137a12c84___ @ 0x18005BE20 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_c1333ba9be4c29c3137.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de9e0eff18a9873___ @ 0x18005C400 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_5ae508c06f66cfbd3de.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18005C9FC (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 *     ?GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F548 (-GetTaskNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_.c)
 *     ?GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentKnownTrigger@1234@@Z @ 0x180061BF4 (-GetRootRegistrationSettingsForTriggerContainer@Internal@TargetedContent@Services@Windows@@YA-AV.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180063984 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800166CC (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DB1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

wchar_t *__fastcall Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(int a1)
{
  wchar_t **v1; // rax
  unsigned int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (wchar_t **)&unk_18015C610;
  while ( *(_DWORD *)v1 != a1 )
  {
    v1 += 2;
    if ( v1 == &off_18015C6C0 )
    {
      v3 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x83,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)v3);
      JUMPOUT(0x18005F249LL);
    }
  }
  return v1[1];
}
