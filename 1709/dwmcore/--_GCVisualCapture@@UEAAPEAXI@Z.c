/*
 * XREFs of ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x180078A20
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180078600 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x180079030 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 */

CVisualCapture *__fastcall CVisualCapture::`scalar deleting destructor'(CVisualCapture *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVisualCapture::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHolographicInteropTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable';
  CVisualCapture::UnRegisterNotifiers(this);
  v4 = (void *)*((_QWORD *)this + 47);
  if ( v4 )
    CloseHandle(v4);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
