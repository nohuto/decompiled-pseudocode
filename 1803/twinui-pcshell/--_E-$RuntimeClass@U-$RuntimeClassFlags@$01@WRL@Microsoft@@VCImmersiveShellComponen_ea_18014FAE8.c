/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18014FAE8
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UIFullScreenManager@@UIFullScreenManagerPriv@@UIFullScreenNotificationService@@UIFullScreenPositionerNotification@@UIImmersiveMonitorNotification@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x1800A46E0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@UI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18014CC88 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 */

CWinRTApplicationView **__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,IFullScreenManager,IFullScreenManagerPriv,IFullScreenNotificationService,IFullScreenPositionerNotification,IImmersiveMonitorNotification>::`vector deleting destructor'(
        CWinRTApplicationView **Block,
        char a2)
{
  *((_DWORD *)Block + 33) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
