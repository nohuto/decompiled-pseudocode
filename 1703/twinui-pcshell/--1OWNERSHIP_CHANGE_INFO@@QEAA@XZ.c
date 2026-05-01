/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x180005734
 * Callers:
 *     ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1800CA850 (--_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationBehavior@@VNil@Details@23@V6723@V6723@V6723@V6723@V6723@V6723@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800CB590 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationB.c)
 *     ??_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z @ 0x1800D3514 (--_ETaskFlowImmersiveShellBroker@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@VNil@Details@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800D4C50 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIUserActivityMonitor@UserActivities@.c)
 *     _CApplicationManager::_HandleWindowBecameUnowned_::_1_::dtor$0 @ 0x180198901 (_CApplicationManager--_HandleWindowBecameUnowned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x180198919 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x180198955 (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CFrameApplicationPresentation::CFrameApplicationPresentation_::_1_::dtor$1 @ 0x18019A772 (_CFrameApplicationPresentation--CFrameApplicationPresentation_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
