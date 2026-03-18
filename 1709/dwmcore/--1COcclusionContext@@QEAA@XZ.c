/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18006129C
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005CCCC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180045C5C (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18009E998 (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this)
{
  CContentBounder *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &COcclusionContext::`vftable';
  v2 = (CContentBounder *)*((_QWORD *)this + 143);
  if ( v2 )
    CContentBounder::`scalar deleting destructor'(v2);
  v3 = *((_QWORD *)this + 49);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 49) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1152);
  WPF::ProcessHeapImpl::Free(*((void **)this + 141));
  WPF::ProcessHeapImpl::Free(*((void **)this + 137));
  WPF::ProcessHeapImpl::Free(*((void **)this + 133));
  FastRegion::CRegion::FreeMemory((COcclusionContext *)((char *)this + 960));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 400);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 152));
  WPF::ProcessHeapImpl::Free(*((void **)this + 17));
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  WPF::ProcessHeapImpl::Free(*((void **)this + 3));
}
