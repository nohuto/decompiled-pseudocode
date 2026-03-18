/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x18009F534
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18009F5F0 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800B4DE0 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C539C (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COcclusionContext::~COcclusionContext(COcclusionContext *this, unsigned int a2)
{
  CContentBounder *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &COcclusionContext::`vftable';
  v3 = (CContentBounder *)*((_QWORD *)this + 131);
  if ( v3 )
    CContentBounder::`scalar deleting destructor'(v3, a2);
  v4 = *((_QWORD *)this + 38);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 38) = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 132);
  WPF::ProcessHeapImpl::Free(*((void **)this + 129));
  WPF::ProcessHeapImpl::Free(*((void **)this + 125));
  WPF::ProcessHeapImpl::Free(*((void **)this + 121));
  FastRegion::CRegion::FreeMemory((void **)this + 109);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 39);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 152));
  WPF::ProcessHeapImpl::Free(*((void **)this + 17));
  WPF::ProcessHeapImpl::Free(*((void **)this + 11));
  WPF::ProcessHeapImpl::Free(*((void **)this + 3));
}
