/*
 * XREFs of ??1?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18025CDFC
 * Callers:
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$1 @ 0x180172FEC (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$1.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$2 @ 0x180172FFC (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$3 @ 0x18017300C (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$3.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$4 @ 0x18017301F (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$4.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$5 @ 0x180173032 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$5.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$6 @ 0x180173045 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$7 @ 0x180173058 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$7.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$8 @ 0x18017306B (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$8.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$1 @ 0x18025CD85 (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$1.c)
 * Callees:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180054960 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18009C54C (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // r10
  Microsoft::WRL::Details::EventTargetArray *v3; // r10
  Microsoft::WRL::Details::EventTargetArray *(__fastcall *v4)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *); // rax
  __int64 (*v5)(); // rax

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v2 + 12), a2) )
    {
      v4 = *(Microsoft::WRL::Details::EventTargetArray *(__fastcall **)(Microsoft::WRL::Details::EventTargetArray *, const struct std::nothrow_t *))(*(_QWORD *)v3 + 24LL);
      if ( v4 == Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor' )
        Microsoft::WRL::Details::EventTargetArray::`scalar deleting destructor'(v3, (const struct std::nothrow_t *)1);
      else
        v4(v3, (const struct std::nothrow_t *)1);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
      {
        v5 = *(__int64 (**)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
        if ( v5 == Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount )
          Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::DecrementObjectCount();
        else
          ((void (__fastcall *)(struct Microsoft::WRL::Details::ModuleBase *))v5)(Microsoft::WRL::Details::ModuleBase::module_);
      }
    }
  }
}
