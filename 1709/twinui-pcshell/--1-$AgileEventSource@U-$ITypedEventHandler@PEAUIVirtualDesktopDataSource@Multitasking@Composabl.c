/*
 * XREFs of ??1?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x1800614B4
 * Callers:
 *     _Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64____::_1_::dtor$0 @ 0x1801E908C (_Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_0d418b8bc300e25981cc499a36a21cfc__Win.c)
 *     _Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty____::_1_::dtor$0 @ 0x1801EACDF (_Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Wind.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$1 @ 0x1801EB471 (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$1.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$2 @ 0x1801EB481 (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$3 @ 0x1801EB494 (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$3.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$4 @ 0x1801EB4A7 (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$4.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$5 @ 0x1801EB4BA (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$5.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$6 @ 0x1801EB4CD (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$7 @ 0x1801EB4E0 (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$7.c)
 *     _CStartExperienceManager::_CStartExperienceManager_::_1_::dtor$8 @ 0x1801EB4F3 (_CStartExperienceManager--_CStartExperienceManager_--_1_--dtor$8.c)
 *     _CJumpViewExperienceManager::_CJumpViewExperienceManager_::_1_::dtor$1 @ 0x1801EB711 (_CJumpViewExperienceManager--_CJumpViewExperienceManager_--_1_--dtor$1.c)
 *     _CJumpViewExperienceManager::_CJumpViewExperienceManager_::_1_::dtor$2 @ 0x1801EB721 (_CJumpViewExperienceManager--_CJumpViewExperienceManager_--_1_--dtor$2.c)
 *     _VirtualDesktopDataSource_CreateInstance_::_1_::dtor$5 @ 0x1801F6D08 (_VirtualDesktopDataSource_CreateInstance_--_1_--dtor$5.c)
 *     _VirtualDesktopDataSource::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1801F6FCE (_VirtualDesktopDataSource--_scalar_deleting_destructor__--_1_--dtor$1.c)
 *     _VirtualDesktop::_scalar_deleting_destructor__::_1_::dtor$1 @ 0x1801F71C2 (_VirtualDesktop--_scalar_deleting_destructor__--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        volatile signed __int32 **a1)
{
  __int64 result; // rax
  volatile signed __int32 *v2; // rcx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 24LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        return (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                       + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return result;
}
