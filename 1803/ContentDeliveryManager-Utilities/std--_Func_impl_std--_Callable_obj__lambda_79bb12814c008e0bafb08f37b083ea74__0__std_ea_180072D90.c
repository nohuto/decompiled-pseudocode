/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_79bb12814c008e0bafb08f37b083ea74__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_&___ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_&___ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180072D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerInternal@2TargetedContent@Services@5@_N@Z @ 0x180066188 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E108 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall std::_Func_impl_std::_Callable_obj__lambda_79bb12814c008e0bafb08f37b083ea74__0__std::allocator_std::_Func_class_bool_CreativeFramework::Triggers::PropertySetHelper_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_CreativeFramework::Triggers::PropertySetHelper_____ptr64_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        Windows::Services::TargetedContent::Internal *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  int TriggerRegistrationFromSetting; // eax
  __int64 v5; // r8
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                     a2,
                                     (struct CreativeFramework::Triggers::PropertySetHelper *)&v9,
                                     a3);
  if ( TriggerRegistrationFromSetting < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1AE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)TriggerRegistrationFromSetting);
    __debugbreak();
  }
  v5 = v9;
  v9 = 0LL;
  v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::InsertAtInternal(
         *(_QWORD *)(a1 + 8),
         0,
         v5,
         1);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1AF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180072E14LL);
  }
  return 1;
}
