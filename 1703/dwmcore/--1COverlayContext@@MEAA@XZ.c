/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x180071DDC
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x180071470 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180071BB8 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180073580 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180075968 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &COverlayContext::`vftable';
  COverlayContext::Reset(this);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 2));
  v2 = *((_QWORD *)this + 9);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 131);
  FastRegion::CRegion::FreeMemory((COverlayContext *)((char *)this + 976));
  *((_QWORD *)this + 108) = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 864));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 34);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 30);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 26);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 22);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
