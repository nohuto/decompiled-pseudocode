/*
 * XREFs of ??_GTabletModePositionerManager@@UEAAPEAXI@Z @ 0x1802C2950
 * Callers:
 *     ??_ETabletModePositionerManager@@WBI@EAAPEAXI@Z @ 0x1800AF460 (--_ETabletModePositionerManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1SmartCookie@@QEAA@XZ @ 0x18013A728 (--1SmartCookie@@QEAA@XZ.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18014CC28 (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18014CC88 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 */

TabletModePositionerManager *__fastcall TabletModePositionerManager::`scalar deleting destructor'(
        TabletModePositionerManager *this,
        char a2)
{
  SmartCookie::~SmartCookie((TabletModePositionerManager *)((char *)this + 176));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 20);
  CGITRegistrationList::~CGITRegistrationList((TabletModePositionerManager *)((char *)this + 112));
  *((_DWORD *)this + 27) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite((CWinRTApplicationView **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
