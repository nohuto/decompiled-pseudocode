/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800E35A0
 * Callers:
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServiceProvider@@VCImmersiveShellComponentWithGITSite@@@WRL@Microsoft@@WDA@EAAPEAXI@Z @ 0x1800E35E0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UILockScreenDirectorServ_ea_1800E35E0.c)
 * Callees:
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x180018554 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ILockScreenDirectorServiceProvider,CImmersiveShellComponentWithGITSite>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  Block[31] = -1073741823;
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite((CImmersiveShellComponentWithGITSite *)(Block + 2));
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
