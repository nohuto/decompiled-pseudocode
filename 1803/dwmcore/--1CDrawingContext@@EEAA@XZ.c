/*
 * XREFs of ??1CDrawingContext@@EEAA@XZ @ 0x18006E594
 * Callers:
 *     ??_ECDrawingContext@@EEAAPEAXI@Z @ 0x18006E794 (--_ECDrawingContext@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18006313C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18006E2EC (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180070288 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z @ 0x1800B8C88 (--$ReleaseInterfaceNoNULL@VCPolygon@@@@YAXPEAVCPolygon@@@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C22F0 (--1CLightStack@@QEAA@XZ.c)
 *     ??$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z @ 0x1800C68A0 (--$SAFE_DELETE@VCOcclusionContext@@@@YAXAEAPEAVCOcclusionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x1801A8848 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(CDrawingContext *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v5; // rcx
  CContentBounder *v6; // rcx
  CVisual *v7; // rcx
  _QWORD *i; // rbx
  __int64 v9; // rcx

  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CDrawingContext::PopAllStacks(this);
  v2 = *((_QWORD *)this + 48);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 443);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  ReleaseInterfaceNoNULL<CPolygon>(*((_QWORD *)this + 393));
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 45));
  v5 = *((_QWORD *)this + 46);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = (CContentBounder *)*((_QWORD *)this + 504);
  if ( v6 )
  {
    CContentBounder::`scalar deleting destructor'(v6, v4);
    *((_QWORD *)this + 504) = 0LL;
  }
  SAFE_DELETE<COcclusionContext>((char *)this + 6752);
  for ( i = (_QWORD *)((char *)this + 6648);
        (_QWORD *)*i != i;
        CVisual::ReleaseMoveRenderPassInfoForContext(v7, this, (struct CMoveRenderPassInfo *)(*i - 104LL)) )
  {
    ;
  }
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 8LL))(*((_QWORD *)this + 4));
  v9 = *((_QWORD *)this + 505);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 6672);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 6616);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawingContext *)((char *)this + 4048));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3432);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3400);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 3368);
  operator delete(*((void **)this + 415));
  operator delete(*((void **)this + 400));
  operator delete(*((void **)this + 390));
  CScopedClipStack::Clear((CDrawingContext *)((char *)this + 1008));
  operator delete(*((void **)this + 386));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 1840);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 1008);
  operator delete(*((void **)this + 124));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 912);
  CLightStack::~CLightStack((CDrawingContext *)((char *)this + 672));
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 608);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 544);
  operator delete(*((void **)this + 66));
  operator delete(*((void **)this + 62));
  operator delete(*((void **)this + 58));
  CResource::~CResource((CDrawingContext *)((char *)this + 16));
}
