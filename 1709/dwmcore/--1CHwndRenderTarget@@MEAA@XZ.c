/*
 * XREFs of ??1CHwndRenderTarget@@MEAA@XZ @ 0x180135A60
 * Callers:
 *     ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x180135B30 (--_GCHwndRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180147698 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180147B04 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseResources@CHwndRenderTarget@@AEAAXXZ @ 0x1800177E4 (-ReleaseResources@CHwndRenderTarget@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x180074928 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18011A048 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ @ 0x1801362FC (-ReleaseWNFHandles@CHwndRenderTarget@@IEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::~CHwndRenderTarget(CHwndRenderTarget *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CHwndRenderTarget::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CHwndRenderTarget::`vftable'{for `IRenderTargetResource'};
  *((_QWORD *)this + 9) = &CHwndRenderTargetDDA::`vftable'{for `IVisualTreeClient'};
  CHwndRenderTarget::ResetMoveOptimizationNodes(this);
  CHwndRenderTarget::ReleaseResources(this);
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 99));
  v2 = *((_QWORD *)this + 14);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CHwndRenderTarget::ReleaseWNFHandles(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 90);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 81);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 61);
  CRenderTarget::~CRenderTarget(this);
}
