/*
 * XREFs of ?GetWnfStateForTrigger@Internal@TargetedContent@Services@Windows@@YA?AU_WNF_STATE_NAME@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F948
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060150 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060B90 (-SubscribeToFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedCon.c)
 *     ?UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180060DE0 (-UnsubscribeFromFeatureReportingUsage@Internal@TargetedContent@Services@Windows@@YAJPEAUITargete.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18005F394 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x18006C270 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct _WNF_STATE_NAME __fastcall Windows::Services::TargetedContent::Internal::GetWnfStateForTrigger(
        Windows::Services::TargetedContent::Internal *this,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a2)
{
  const WCHAR *StringRawBuffer; // rax
  const struct _WNF_STATE_NAME **v3; // r8
  int WellKnownWnfStateByName; // eax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HSTRING string; // [rsp+48h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+50h] [rbp+18h] BYREF

  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&string, (__int64)this);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  WellKnownWnfStateByName = CreativeFramework::Triggers::GetWellKnownWnfStateByName(
                              StringRawBuffer,
                              (const unsigned __int16 *)&v9,
                              v3);
  if ( WellKnownWnfStateByName < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)WellKnownWnfStateByName);
    __debugbreak();
  }
  v5 = *v9;
  WindowsDeleteString(string);
  return (struct _WNF_STATE_NAME)v5;
}
