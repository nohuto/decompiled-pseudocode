/*
 * XREFs of ??1CPlaneCaptureRenderTargetEngine@@EEAA@XZ @ 0x1801461A0
 * Callers:
 *     ??_GCPlaneCaptureRenderTarget@@EEAAPEAXI@Z @ 0x180146D10 (--_GCPlaneCaptureRenderTarget@@EEAAPEAXI@Z.c)
 *     ??_ECPlaneCaptureRenderTargetEngine@@EEAAPEAXI@Z @ 0x180146D60 (--_ECPlaneCaptureRenderTargetEngine@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPlaneCaptureRenderTargetEngine::~CPlaneCaptureRenderTargetEngine(
        CPlaneCaptureRenderTargetEngine *this)
{
  HMODULE v2; // rcx

  *(_QWORD *)this = &CPlaneCaptureRenderTargetEngine::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CPlaneCaptureRenderTargetEngine::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 14) = &CPlaneCaptureRenderTargetEngine::`vftable';
  v2 = (HMODULE)*((_QWORD *)this + 52);
  if ( v2 )
    FreeLibrary(v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 54);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 53);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
