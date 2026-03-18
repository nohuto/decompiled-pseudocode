/*
 * XREFs of ??1COcclusionContext@@QEAA@XZ @ 0x1800A8CF0
 * Callers:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800A8DAC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180070288 (--_GCContentBounder@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180080200 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x1800C22F0 (--1CLightStack@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1152);
  operator delete(*((void **)this + 141));
  operator delete(*((void **)this + 137));
  operator delete(*((void **)this + 133));
  FastRegion::CRegion::FreeMemory((void **)this + 120);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 400);
  CLightStack::~CLightStack((COcclusionContext *)((char *)this + 152));
  operator delete(*((void **)this + 17));
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 3));
}
