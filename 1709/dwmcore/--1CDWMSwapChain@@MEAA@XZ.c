/*
 * XREFs of ??1CDWMSwapChain@@MEAA@XZ @ 0x1801AFAEC
 * Callers:
 *     ??_GCDWMSwapChainDDA@@UEAAPEAXI@Z @ 0x1801AFB80 (--_GCDWMSwapChainDDA@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z @ 0x1800BE440 (--$SAFE_DELETE_ARRAY@W4D2D1_POLYGON_EDGE_FLAG@@@@YAXAEAPEAW4D2D1_POLYGON_EDGE_FLAG@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ @ 0x1801B0760 (-ReleaseMultiplaneOverlayPresentInfo@CDWMSwapChain@@AEAAXXZ.c)
 */

void __fastcall CDWMSwapChain::~CDWMSwapChain(CDWMSwapChain *this)
{
  __int64 v2; // rcx
  void *v3; // rcx

  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  SAFE_DELETE_ARRAY<enum D2D1_POLYGON_EDGE_FLAG>((void **)this + 71);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 54));
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 53));
  v2 = *((_QWORD *)this + 52);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 58));
  v3 = (void *)*((_QWORD *)this + 57);
  if ( v3 )
    CloseHandle(v3);
  CDWMSwapChain::ReleaseMultiplaneOverlayPresentInfo(this);
  CSwapChainBase::~CSwapChainBase(this);
}
