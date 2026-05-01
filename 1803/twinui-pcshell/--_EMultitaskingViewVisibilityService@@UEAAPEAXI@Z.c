/*
 * XREFs of ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x18026B930
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180071D0C (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAX@Z @ 0x180098FA8 (--3@YAXPEAX@Z.c)
 *     ??1CGITRegistrationList@@QEAA@XZ @ 0x18014CC28 (--1CGITRegistrationList@@QEAA@XZ.c)
 */

MultitaskingViewVisibilityService *__fastcall MultitaskingViewVisibilityService::`vector deleting destructor'(
        MultitaskingViewVisibilityService *this,
        char a2)
{
  CGITRegistrationList::~CGITRegistrationList((MultitaskingViewVisibilityService *)((char *)this + 72));
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)this + 16);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
