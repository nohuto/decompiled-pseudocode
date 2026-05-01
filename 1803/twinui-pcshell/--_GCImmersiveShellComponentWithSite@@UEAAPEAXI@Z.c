/*
 * XREFs of ??_GCImmersiveShellComponentWithSite@@UEAAPEAXI@Z @ 0x18014D05C
 * Callers:
 *     ??_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z @ 0x1800A4490 (--_ECImmersiveShellComponentWithSite@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

CWinRTApplicationView **__fastcall CImmersiveShellComponentWithSite::`scalar deleting destructor'(
        CWinRTApplicationView **this,
        char a2)
{
  CImmersiveShellComponent::~CImmersiveShellComponent((CImmersiveShellComponent *)(this + 3));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
