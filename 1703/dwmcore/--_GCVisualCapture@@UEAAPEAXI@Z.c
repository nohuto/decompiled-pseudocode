/*
 * XREFs of ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x180026D10
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x180027380 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180027524 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CVisualCapture *__fastcall CVisualCapture::`scalar deleting destructor'(CVisualCapture *this, char a2)
{
  *(_QWORD *)this = &CVisualCapture::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CVisualCapture::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &COffScreenRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &COffScreenRenderTarget::`vftable';
  CVisualCapture::UnRegisterNotifiers(this);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
