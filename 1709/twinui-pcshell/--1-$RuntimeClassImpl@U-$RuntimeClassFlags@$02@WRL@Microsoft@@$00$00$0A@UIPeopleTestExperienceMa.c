/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIPeopleTestExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180073CB8
 * Callers:
 *     ??_ECSplashScreen@@UEAAPEAXI@Z @ 0x180071DA0 (--_ECSplashScreen@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIObjectProvider@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180072C00 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIObjectProvider@@VFtmBase@23@@WRL@Mi.c)
 *     ??_GCPeopleTestExperienceManager@@UEAAPEAXI@Z @ 0x1800B2A70 (--_GCPeopleTestExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UIViewCUIEventStore@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800B2AE4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIComponentRelationshipStore@ViewEvent.c)
 *     ??_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z @ 0x1801183E0 (--_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_GApplicationViewWrapper@@UEAAPEAXI@Z @ 0x180190FA0 (--_GApplicationViewWrapper@@UEAAPEAXI@Z.c)
 *     ??_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z @ 0x1801A17D0 (--_GTabTipAdapterPolicy@KeyboardHosting@@UEAAPEAXI@Z.c)
 *     ??_GVirtualDesktopController@@UEAAPEAXI@Z @ 0x1801B8530 (--_GVirtualDesktopController@@UEAAPEAXI@Z.c)
 *     ??_GTrayInfoTipDisplayInfo@SystemTray@@EEAAPEAXI@Z @ 0x1801BC340 (--_GTrayInfoTipDisplayInfo@SystemTray@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 72);
  if ( v2 < 0 )
  {
    v3 = (volatile signed __int32 *)(2 * v2);
    result = (unsigned int)_InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      if ( v3 )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v3 + 32LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
