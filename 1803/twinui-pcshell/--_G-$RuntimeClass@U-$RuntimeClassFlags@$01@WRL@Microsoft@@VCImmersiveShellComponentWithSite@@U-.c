/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180267100
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithSite@@U?$ChainInterfaces@UITabletModePositionerManagerPriv@@UITabletModePositionerManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@WBI@EAAPEAXI@Z @ 0x1800ADBD0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1800ADBD0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18014CC88 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 */

CWinRTApplicationView **__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<ITabletModePositionerManagerPriv,ITabletModePositionerManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IWindowManagementShowMoveSizeEvents>::`scalar deleting destructor'(
        CWinRTApplicationView **Block,
        char a2)
{
  *((_DWORD *)Block + 27) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
