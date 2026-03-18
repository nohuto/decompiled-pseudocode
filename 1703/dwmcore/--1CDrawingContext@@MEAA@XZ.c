/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x1800A9A7C
 * Callers:
 *     ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x1800A9C18 (--_ECDrawingContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180035060 (-Release@CHolographicInteropTaskQueue@@UEAAKXZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x1800932E0 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800A9948 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C539C (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180160DDC (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this, __int64 a2, __int64 a3)
{
  CVisual *v4; // rcx
  _QWORD *i; // rbx
  CHolographicInteropTaskQueue *v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rcx
  CMILCOMBase *v9; // rcx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CDrawingContext::Uninitialize(this, a2, a3);
  for ( i = (_QWORD *)((char *)this + 6584);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v4, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 4);
  v7 = *(void (**)(void))(*(_QWORD *)v6 + 8LL);
  if ( (char *)v7 == (char *)CHolographicInteropTaskQueue::Release )
    CHolographicInteropTaskQueue::Release(v6);
  else
    v7();
  v8 = *((_QWORD *)this + 497);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = (CMILCOMBase *)*((_QWORD *)this + 9);
  if ( v9 )
    CMILCOMBase::InternalRelease(v9);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 826);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 819);
  CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawingContext *)((char *)this + 3984));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 417);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 413);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 409);
  WPF::ProcessHeapImpl::Free(*((void **)this + 403));
  WPF::ProcessHeapImpl::Free(*((void **)this + 388));
  WPF::ProcessHeapImpl::Free(*((void **)this + 378));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 912));
  WPF::ProcessHeapImpl::Free(*((void **)this + 374));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 218);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 114);
  WPF::ProcessHeapImpl::Free(*((void **)this + 112));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 102);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 664));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 75);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 67);
  WPF::ProcessHeapImpl::Free(*((void **)this + 65));
  WPF::ProcessHeapImpl::Free(*((void **)this + 61));
  WPF::ProcessHeapImpl::Free(*((void **)this + 57));
  CResource::~CResource((CDrawingContext *)((char *)this + 16));
}
