/*
 * XREFs of ??_GContentManagementService@ContentManagement@@UEAAPEAXI@Z @ 0x180025530
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180016CE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWnfNameResolver.c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x180030C58 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
ContentManagement::ContentManagementService *__fastcall ContentManagement::ContentManagementService::`scalar deleting destructor'(
        ContentManagement::ContentManagementService *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &ContentManagement::ContentManagementService::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 5) = &ContentManagement::ContentManagementService::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 6) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 7) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessLockScreenEvent'};
  *((_QWORD *)this + 8) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 9) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::IProcessContextualSuggestionsEvent'};
  *((_QWORD *)this + 10) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>'};
  *((_QWORD *)this + 11) = &ContentManagement::ContentManagementService::`vftable'{for `ContentManagement::ILockScreenRegistrySettingProvider'};
  *((_QWORD *)this + 12) = &ContentManagement::ContentManagementService::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,ContentManagement::ITaskBarAppProperties>'};
  ContentManagement::ContentManagementService::CloseConnection(this);
  v4 = *((_QWORD *)this + 20);
  if ( v4 )
  {
    *((_QWORD *)this + 20) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 19);
  if ( v5 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 18);
  if ( v6 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 16);
  if ( v7 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 14);
  if ( v8 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWnfNameResolver>::Release((volatile signed __int32 *)(2 * v8));
  v9 = *((_QWORD *)this + 4);
  if ( v9 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
