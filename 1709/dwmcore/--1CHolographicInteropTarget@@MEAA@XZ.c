/*
 * XREFs of ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801C15A4
 * Callers:
 *     ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x1801C1610 (--_GCHolographicInteropTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEAA@XZ @ 0x18011DEC4 (--1-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1801C0DC0 (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTarget::~CHolographicInteropTarget(CHolographicInteropTarget *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  CHolographicManager::ReleaseResourcesForDisplayChange(*((CHolographicManager **)this + 14));
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 21);
  if ( v3 )
    CloseHandle(v3);
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::~ComPtr<CD3DDeviceLevel1>((__int64 *)this + 15);
  CRenderTarget::~CRenderTarget(this);
}
