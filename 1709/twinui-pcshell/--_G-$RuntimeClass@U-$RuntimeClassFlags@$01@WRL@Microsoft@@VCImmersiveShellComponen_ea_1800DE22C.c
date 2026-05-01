/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800DE22C
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIRemoteLauncherForegroundHandler@@VFtmBase@23@@WRL@Microsoft@@WCI@EAAPEAXI@Z @ 0x1800DE360 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1800DE360.c)
 * Callees:
 *     ??1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ @ 0x1800059F4 (--1ACTIVATION_STACK_DATA@CApplicationManager@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

CImmersiveShellComponentWithGITSite *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IRemoteLauncherForegroundHandler,Microsoft::WRL::FtmBase>::`scalar deleting destructor'(
        CImmersiveShellComponentWithGITSite *this,
        char a2)
{
  *((_DWORD *)this + 41) = -1073741823;
  CApplicationManager::ACTIVATION_STACK_DATA::~ACTIVATION_STACK_DATA((CImmersiveShellComponentWithGITSite *)((char *)this + 120));
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
