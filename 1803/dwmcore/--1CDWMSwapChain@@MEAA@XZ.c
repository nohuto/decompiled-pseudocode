/*
 * XREFs of ??1CDWMSwapChain@@MEAA@XZ @ 0x1800D875C
 * Callers:
 *     ??_GCDWMSwapChain@@MEAAPEAXI@Z @ 0x1800D87E0 (--_GCDWMSwapChain@@MEAAPEAXI@Z.c)
 *     ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x1801EAD60 (--_GCDWMSwapChainDDA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1800D86DC (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMSwapChain::~CDWMSwapChain(CDWMSwapChain *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 55));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 54));
  v2 = *((_QWORD *)this + 53);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 59));
  v3 = (void *)*((_QWORD *)this + 58);
  if ( v3 )
    CloseHandle(v3);
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  CSwapChainBase::~CSwapChainBase(this);
}
