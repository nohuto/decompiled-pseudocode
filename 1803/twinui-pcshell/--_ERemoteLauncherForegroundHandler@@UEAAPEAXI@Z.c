/*
 * XREFs of ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x18018A208
 * Callers:
 *     ??_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z @ 0x1800A5CD0 (--_ERemoteLauncherForegroundHandler@@WCI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071D0C (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CImmersiveShellComponentWithGITSite@@UEAA@XZ @ 0x1801048E8 (--1CImmersiveShellComponentWithGITSite@@UEAA@XZ.c)
 */

RemoteLauncherForegroundHandler *__fastcall RemoteLauncherForegroundHandler::`vector deleting destructor'(
        RemoteLauncherForegroundHandler *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  *((_DWORD *)this + 39) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)this + 120);
  CImmersiveShellComponentWithGITSite::~CImmersiveShellComponentWithGITSite(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
