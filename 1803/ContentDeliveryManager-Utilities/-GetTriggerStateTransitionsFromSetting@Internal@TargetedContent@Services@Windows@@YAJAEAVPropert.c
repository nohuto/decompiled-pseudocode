/*
 * XREFs of ?GetTriggerStateTransitionsFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006DFA4
 * Callers:
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E108 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdentityManager@ContentManagement@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180014860 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIIdent.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180015FF0.c)
 *     ?Make@?$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@$0A@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x18005A088 (-Make@-$AgileVector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18006C6FC (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x18006DD2C (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTriggerStateTransitionsFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *a3)
{
  HSTRING *v5; // r9
  const char *v6; // r9
  __int64 result; // rax
  int v8; // eax
  volatile signed __int64 *v9; // rbx
  char *StringRawBuffer; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+70h] [rbp+18h] BYREF
  volatile signed __int64 *v16; // [rsp+78h] [rbp+20h] BYREF

  try
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            this,
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
            (const wchar_t *)&string,
            v5) )
    {
      WindowsDeleteString(string);
      return 0LL;
    }
    v16 = 0LL;
    v8 = Windows::Foundation::Collections::Internal::AgileVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,0>::Make((__int64 *)&v16);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x151,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v8);
    }
    else
    {
      v9 = v16;
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef((__int64)v16);
      v13[0] = off_1800D9D58;
      v13[1] = v9;
      v13[3] = v13;
      StringRawBuffer = (char *)WindowsGetStringRawBuffer(string, 0LL);
      Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(StringRawBuffer, (__int64)v13);
      v11 = (*(__int64 (__fastcall **)(struct CreativeFramework::Triggers::PropertySetHelper *, volatile signed __int64 *))(*(_QWORD *)a2 + 312LL))(
              a2,
              v9);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        if ( v9 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v9);
        WindowsDeleteString(string);
        return 0LL;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x15B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18006E0E5LL);
  }
  catch ( ... )
  {
    LODWORD(string) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x15E,
                        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                        v6);
    return (unsigned int)string;
  }
  return result;
}
