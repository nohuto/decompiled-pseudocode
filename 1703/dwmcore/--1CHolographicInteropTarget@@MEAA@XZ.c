/*
 * XREFs of ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801A6624
 * Callers:
 *     ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x1801A6690 (--_GCHolographicInteropTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ @ 0x1801A637C (-ReleaseResourcesForDisplayChange@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTarget::~CHolographicInteropTarget(CHolographicInteropTarget *this)
{
  void *v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHolographicInteropTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  CHolographicManager::ReleaseResourcesForDisplayChange(*((CHolographicManager **)this + 14));
  v2 = (void *)*((_QWORD *)this + 20);
  if ( v2 )
    CloseHandle(v2);
  v3 = (void *)*((_QWORD *)this + 21);
  if ( v3 )
    CloseHandle(v3);
  CRenderTarget::~CRenderTarget(this);
}
