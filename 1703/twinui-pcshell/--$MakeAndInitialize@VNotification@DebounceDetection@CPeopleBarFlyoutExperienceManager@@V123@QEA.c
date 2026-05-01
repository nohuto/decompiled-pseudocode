/*
 * XREFs of ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@QEAV23@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@@WRL@Microsoft@@@012@$$QEBQEAVDebounceDetection@CPeopleBarFlyoutExperienceManager@@@Z @ 0x1800A3F40
 * Callers:
 *     ?UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ @ 0x1800A2C58 (-UpdateFocusOnDismiss@CPeopleBarFlyoutExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x1800A2320 (-RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJP.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180194338 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection * const>(
        __int64 *a1,
        struct CPeopleBarFlyoutExperienceManager::DebounceDetection **a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // esi

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  *a1 = 0LL;
  v5 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v5[4] = 1LL;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
    v5[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `IImmersiveRawInputMouseNotification'};
    v5[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v6 = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable';
    v6[1] = &CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::`vftable'{for `IImmersiveRawInputMouseNotification'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IImmersiveRawInputMouseNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::Details::InterfaceList<IWeakReferenceSource,Microsoft::WRL::Details::Nil>,1,0>'};
    v6[5] = 0LL;
    v6[6] = 0LL;
    *((_DWORD *)v6 + 14) = 0;
    v7 = CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(
           (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)v6,
           *a2);
    if ( v7 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
      *a1 = (__int64)v6;
      if ( v6 )
        (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
      return 0;
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    }
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
