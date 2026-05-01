/*
 * XREFs of ??_ECFullScreenManager@@UEAAPEAXI@Z @ 0x18014FB24
 * Callers:
 *     ??_ECFullScreenManager@@WBI@EAAPEAXI@Z @ 0x1800A46F0 (--_ECFullScreenManager@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18014CC28 (--1CGITRegistrationList@@QEAA@XZ.c)
 *     ??1CImmersiveShellComponentWithSite@@UEAA@XZ @ 0x18014CC88 (--1CImmersiveShellComponentWithSite@@UEAA@XZ.c)
 */

CFullScreenManager *__fastcall CFullScreenManager::`vector deleting destructor'(CFullScreenManager *this, char a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 25);
  CGITRegistrationList::~CGITRegistrationList((CFullScreenManager *)((char *)this + 136));
  *((_DWORD *)this + 33) = -1073741823;
  CImmersiveShellComponentWithSite::~CImmersiveShellComponentWithSite((CWinRTApplicationView **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
