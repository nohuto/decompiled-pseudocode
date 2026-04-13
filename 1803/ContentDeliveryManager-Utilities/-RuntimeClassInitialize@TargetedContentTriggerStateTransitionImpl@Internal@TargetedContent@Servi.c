/*
 * XREFs of ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x180059C40
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_3f61723cca9ee14616220b7598fa5ec3__0__std::allocator_std::_Func_class_bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_______ptr64_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180072EF0 (std--_Func_impl_std--_Callable_obj__lambda_3f61723cca9ee14616220b7598fa5ec3__0__std_ea_180072EF0.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
        __int64 a1,
        HSTRING a2,
        int a3,
        const char *a4)
{
  int v4; // r14d
  HSTRING *v8; // rdi
  HRESULT v9; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (int)a4;
  try
  {
    v8 = (HSTRING *)(a1 + 64);
    v9 = 0;
    if ( !a2 || a2 != *v8 )
    {
      WindowsDeleteString(*v8);
      *v8 = 0LL;
      v9 = WindowsDuplicateString(a2, v8);
    }
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x180059CD3LL);
    }
    *(_DWORD *)(a1 + 72) = a3;
    *(_DWORD *)(a1 + 76) = v4;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12C,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
                           a4);
  }
  return result;
}
