/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F00D8
 * Callers:
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationChangedEventArgs@ViewManagerInterop@Shell@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180159640 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIClientWindowReadyForPresentationCha.c)
 *     ??_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z @ 0x180159680 (--_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1?$EventInvocationContext@$00@details@wil@@UEAA@XZ @ 0x1801ACD38 (--1-$EventInvocationContext@$00@details@wil@@UEAA@XZ.c)
 *     ??_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z @ 0x1801B64D0 (--_GCJumpViewExperienceEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1801B6520 (--_GChainLinkEventArgs@Chaining@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z @ 0x1801B6560 (--_EViewSizePreferencesChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_G?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@UEAAPEAXI@Z @ 0x1801EC140 (--_G-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@deta.c)
 *     ??_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z @ 0x18025D300 (--_GVirtualDesktopCollectionChangedEventArgs@@UEAAPEAXI@Z.c)
 *     ??_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z @ 0x180263150 (--_GTrayInfoTipAppInfo@SystemTray@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
}
