/*
 * XREFs of ??_GShellPositionerManager@@UEAAPEAXI@Z @ 0x1802B8D40
 * Callers:
 *     ??_EShellPositionerManager@@WBI@EAAPEAXI@Z @ 0x1800AEE60 (--_EShellPositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CImmersiveShellComponent@@UEAA@XZ @ 0x1801048B4 (--1CImmersiveShellComponent@@UEAA@XZ.c)
 */

ShellPositionerManager *__fastcall ShellPositionerManager::`scalar deleting destructor'(
        ShellPositionerManager *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  *((_DWORD *)this + 35) = -1073741823;
  CImmersiveShellComponent::~CImmersiveShellComponent((ShellPositionerManager *)((char *)this + 24));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)this + 2);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
