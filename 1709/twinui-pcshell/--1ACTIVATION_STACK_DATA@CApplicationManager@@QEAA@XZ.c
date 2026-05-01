/*
 * XREFs of ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x1800059F4
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1800DE1C4 (--_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DE22C (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1800DE22C.c)
 *     ??_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z @ 0x1800DE7A0 (--_GCImmersiveShellCreationBehavior@@EEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationBehavior@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DF6D0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIImmersiveShellCreationB.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@VCImmersiveShellComponentWithGITSite@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F7BC4 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@Us.c)
 *     ??_ECActivatedEventArgsBase@@MEAAPEAXI@Z @ 0x1801CD990 (--_ECActivatedEventArgsBase@@MEAAPEAXI@Z.c)
 *     ??1CActivatedEventArgsWithViewIdBase@@MEAA@XZ @ 0x1801CDA18 (--1CActivatedEventArgsWithViewIdBase@@MEAA@XZ.c)
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$3 @ 0x1801E613F (_CApplicationManager--_CApplicationManager_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA(
        CApplicationManager::ACTIVATION_STACK_DATA *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
