/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x18004096C
 * Callers:
 *     ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x180040AEC (--_ECDrawingContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180031C44 (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18004083C (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009E998 (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180177C88 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  CVisual *v2; // rcx
  _QWORD *i; // rbx
  __int64 v4; // rcx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CDrawingContext::Uninitialize((CContentBounder **)this);
  for ( i = (_QWORD *)((char *)this + 6648);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v2, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  v4 = *((_QWORD *)this + 505);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 6672);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 6616);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawingContext *)((char *)this + 4048));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 3432);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 3400);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 3368);
  WPF::ProcessHeapImpl::Free(*((void **)this + 415));
  WPF::ProcessHeapImpl::Free(*((void **)this + 400));
  WPF::ProcessHeapImpl::Free(*((void **)this + 390));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  WPF::ProcessHeapImpl::Free(*((void **)this + 386));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1840);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1008);
  WPF::ProcessHeapImpl::Free(*((void **)this + 124));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 912);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 672));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 608);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 544);
  WPF::ProcessHeapImpl::Free(*((void **)this + 66));
  WPF::ProcessHeapImpl::Free(*((void **)this + 62));
  WPF::ProcessHeapImpl::Free(*((void **)this + 58));
  CResource::~CResource((CDrawingContext *)((char *)this + 16));
}
