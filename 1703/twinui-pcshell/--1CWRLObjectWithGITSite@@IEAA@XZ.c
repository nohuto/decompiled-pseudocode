/*
 * XREFs of ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001EAF0
 * Callers:
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1800173E4 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x180030570 (--_ECImmersiveMode@@MEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIActiveZBand@@UIImmersiveSystemMode@@UIImmersiveSystemModeInternal@@U6@VIImmersiveSystemModeNotificationServicePrivate@@VIActiveZBandNotificationServicePrivate@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIImmersiveMonitorNotification@@UIDesktopVisibilityService@@UIDesktopVisibilityChangesNotification@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180032800 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U.c)
 *     ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180034480 (--_GCClassicWindowManager@@MEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@UIClassicWindowManagerPrivate@@UIApplicationActivationHistory@@UIClassicWindowManager@@UIClassicWindowPresentation@@UIClassicWindowCollectionRefresh@@UITaskListChangeListener@@UIClassicWindowOwnershipQuery@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180038060 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_180038060.c)
 *     ??_GCRotationManagerSync@@UEAAPEAXI@Z @ 0x180039450 (--_GCRotationManagerSync@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRealmActivationHistory@@UIRealmActivationHistoryInternal@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@23@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18003A1F0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@VCWRLObjectW_ea_18003A1F0.c)
 *     ??_GCRealmActivationHistory@@EEAAPEAXI@Z @ 0x18004A0E0 (--_GCRealmActivationHistory@@EEAAPEAXI@Z.c)
 *     ??_ECApplicationFrameService@@UEAAPEAXI@Z @ 0x18004B360 (--_ECApplicationFrameService@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAA@XZ @ 0x18004B4E0 (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U-$ChainInterf.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18004E070 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@U-$ChainInter.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$InterfaceList@VCWRLObjectWithGITSite@@U?$InterfaceList@UIImmersiveApplication@@U?$InterfaceList@UIImmersiveApplicationHolographic@@U?$InterfaceList@UIImmersiveApplicationInternal@@U?$InterfaceList@UIObjectWithWindow@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@VObjectWithVisibility@ViewManagerInterop@Desktop@Shell@Internal@Windows@@U?$InterfaceList@V?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@U?$InterfaceList@UIServiceProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$00@Details@WRL@Microsoft@@QEAA@XZ @ 0x18005AA18 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@U-$InterfaceList@VCWRLObjectWithGI.c)
 * Callees:
 *     ?s_Retrieve@GlobalInterfaceTable@@CAJXZ @ 0x180025614 (-s_Retrieve@GlobalInterfaceTable@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWRLObjectWithGITSite::~CWRLObjectWithGITSite(CWRLObjectWithGITSite *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  *(_QWORD *)this = &CWRLObjectWithGITSite::`vftable';
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    if ( (int)GlobalInterfaceTable::s_Retrieve() >= 0 )
      ((void (__fastcall *)(struct IGlobalInterfaceTable *, _QWORD))GlobalInterfaceTable::s_pGlobalInterfaceTable->lpVtbl->RevokeInterfaceFromGlobal)(
        GlobalInterfaceTable::s_pGlobalInterfaceTable,
        v2);
    *((_DWORD *)this + 4) = 0;
  }
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
  {
    *((_QWORD *)this + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
