/*
 * XREFs of ??1CHolographicViewerContent@@MEAA@XZ @ 0x1801A4E7C
 * Callers:
 *     ??_ECHolographicViewerContent@@MEAAPEAXI@Z @ 0x1801A4F40 (--_ECHolographicViewerContent@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B3698 (-InternalRelease@-$ComPtr@UID3DDeviceContextState@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ @ 0x1801A592C (-UnregisterSourceLocked@CHolographicViewerContent@@AEAAJXZ.c)
 */

void __fastcall CHolographicViewerContent::~CHolographicViewerContent(CHolographicViewerContent *this)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v3; // rcx

  *(_QWORD *)this = &CHolographicViewerContent::`vftable'{for `CContent'};
  v2 = (RTL_SRWLOCK *)((char *)this + 136);
  *((_QWORD *)this + 7) = &CHolographicViewerContent::`vftable'{for `IHolographicViewerContent'};
  AcquireSRWLockExclusive((PSRWLOCK)this + 17);
  if ( *((_QWORD *)this + 9) )
    CHolographicViewerContent::UnregisterSourceLocked(this);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    CMILPoolResource::Release((CMILPoolResource *)(v3 + 488));
    *((_QWORD *)this + 8) = 0LL;
  }
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 11);
  ReleaseSRWLockExclusive(v2);
  Microsoft::WRL::ComPtr<ID3DDeviceContextState>::InternalRelease((__int64 *)this + 12);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 11);
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 10);
  CResource::~CResource(this);
}
