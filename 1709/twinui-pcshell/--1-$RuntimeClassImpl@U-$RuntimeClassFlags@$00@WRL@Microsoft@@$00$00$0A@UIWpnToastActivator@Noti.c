/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180060524
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180060110 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationCha.c)
 *     ??_EClientWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z @ 0x1800601D0 (--_EClientWindowReadyForPresentationEventArgs@@UEAAPEAXI@Z.c)
 *     ??_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z @ 0x18009D9F0 (--_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UICortanaConversationExperienceManager@Experience@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18009DA40 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UICortanaConversationExperienceManager.c)
 *     ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x1800C0B10 (--_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z.c)
 *     ??_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z @ 0x18010B4A0 (--_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z @ 0x1801B70B0 (--_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x1801BB840 (--_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 64);
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
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
