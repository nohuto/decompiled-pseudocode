/*
 * XREFs of _lambda_4d8c3aefd165ae46a39c8fe585e6dd35_::operator() @ 0x18006FF10
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_4d8c3aefd165ae46a39c8fe585e6dd35__0__std::allocator_std::_Func_class_bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180072D00 (std--_Func_impl_std--_Callable_obj__lambda_4d8c3aefd165ae46a39c8fe585e6dd35__0__std_ea_180072D00.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x180032A18 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@W4TargetedContentTriggerState@1234@@Z @ 0x18006C050 (-SetTriggerState@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsContainer.c)
 *     ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006E108 (-CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVProperty.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A45F0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_4d8c3aefd165ae46a39c8fe585e6dd35_::operator()(__int64 a1, HSTRING a2, int a3, int a4)
{
  LPCWCH *v7; // rbx
  const WCHAR *StringRawBuffer; // rax
  RTL_SRWLOCK *v9; // rsi
  struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **v10; // r8
  int TriggerRegistrationFromSetting; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 *v14; // rax
  const char *v15; // r9
  int v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v19[4]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  int v21; // [rsp+80h] [rbp+8h] BYREF

  v19[2] = -2LL;
  v7 = *(LPCWCH **)a1;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, *v7, -1, 1) != 2 || **(_DWORD **)(a1 + 8) != a3 )
    return 1;
  try
  {
    v9 = *(RTL_SRWLOCK **)(a1 + 16);
    AcquireSRWLockExclusive(v9);
    v19[3] = v9;
    v18 = 0LL;
    TriggerRegistrationFromSetting = Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
                                       *(Windows::Services::TargetedContent::Internal **)(a1 + 24),
                                       (struct CreativeFramework::Triggers::PropertySetHelper *)&v18,
                                       v10);
    if ( TriggerRegistrationFromSetting < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)TriggerRegistrationFromSetting);
    }
    else
    {
      v21 = a4;
      v17 = a3;
      v12 = v18;
      v19[0] = v18;
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
      if ( v13 )
      {
        (*(void (__fastcall **)(__int64, _QWORD *, int *, int *))(*(_QWORD *)v13 + 16LL))(v13, v19, &v17, &v21);
        v14 = std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                v19,
                *(__int64 **)(a1 + 40));
        Windows::Services::TargetedContent::Internal::SetTriggerState(v14, v12, a4);
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        if ( v9 )
          ReleaseSRWLockExclusive(v9);
        return 1;
      }
    }
    std::_Xbad_function_call();
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x243,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      v15);
  }
  return 1;
}
