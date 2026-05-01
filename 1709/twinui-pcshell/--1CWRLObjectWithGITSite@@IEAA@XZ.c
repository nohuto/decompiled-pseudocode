/*
 * XREFs of ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001F820
 * Callers:
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x180031D24 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800341A0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180035AF0 (--_GCClassicWindowManager@@MEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180039810 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x18003A950 (--_GCRotationManagerSync@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003B5D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_18003B5D0.c)
 *     ??_GCRealmActivationHistory@@EEAAPEAXI@Z @ 0x18004C450 (--_GCRealmActivationHistory@@EEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18004CD60 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_18004CD60.c)
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18004D840 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18004D95C (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U-$ChainInterf.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180050730 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U-$ChainInter.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIImmersiveApplication@@UIImmersiveApplicationHolographic@@UIImmersiveApplicationInternal@@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@UIServiceProvider@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18005CA68 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@VCWRLObjectW.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025DC4 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWRLObjectWithGITSite::~CWRLObjectWithGITSite(CWRLObjectWithGITSite *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        v2);
    *((_DWORD *)this + 6) = 0;
  }
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
