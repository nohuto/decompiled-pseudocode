/*
 * XREFs of ??1?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18001727C
 * Callers:
 *     _CApplicationManager::_HandleViewCreation_EnsureApplicationView_::_1_::dtor$2 @ 0x1801E6DE2 (_CApplicationManager--_HandleViewCreation_EnsureApplicationView_--_1_--dtor$2.c)
 *     _CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition_::_1_::dtor$1 @ 0x1801E6E06 (_CApplicationManager--_HandleViewCreation_SynchronizeInitialPosition_--_1_--dtor$1.c)
 *     _NotificationDispatcher::WndProc_::_1_::dtor$0 @ 0x1801E9B6B (_NotificationDispatcher--WndProc_--_1_--dtor$0.c)
 *     _wistd::_Func_impl_wistd::_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd::details::function_allocator_wistd::_Func_class_void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_enum_Windows::Internal::Shell::Holographic::ShellState_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call_::_1_::dtor$0 @ 0x1801ED91A (_wistd--_Func_impl_wistd--_Callable_obj__lambda_cfd27ea05118e91876b01966f7f941a5__0__wistd--deta.c)
 *     _XamlTaskbarManager::_scalar_deleting_destructor__::_1_::dtor$5 @ 0x1801F025B (_XamlTaskbarManager--_scalar_deleting_destructor__--_1_--dtor$5.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____::_1_::dtor$1 @ 0x1801F0BAE (_CreationThreadDispatcher--RunAsync__lambda_e5d643bc643c8a09454132ff8d011188____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____::_1_::dtor$1 @ 0x1801F4F07 (_CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____::_1_::dtor$1 @ 0x1801F4F37 (_CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____::_1_::dtor$1 @ 0x1801F533A (_CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____--_1_--dtor$1.c)
 *     _XamlBaseViewController::XamlBaseViewController_::_1_::dtor$7 @ 0x1801F53E2 (_XamlBaseViewController--XamlBaseViewController_--_1_--dtor$7.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd____::_1_::dtor$1 @ 0x1801F546B (_CreationThreadDispatcher--RunAsync__lambda_509b9a9f35e2a008debf118f8fd212fd____--_1_--dtor$1.c)
 *     _AccessibilityExperienceManager::NotifyWorkspaceRect_::_1_::dtor$0 @ 0x1801F6B72 (_AccessibilityExperienceManager--NotifyWorkspaceRect_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<NotificationDispatcher>::~ComPtr<NotificationDispatcher>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
