/*
 * XREFs of ??1CaptureBitsResponse@@UEAA@XZ @ 0x18007F960
 * Callers:
 *     ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x18007F930 (--_GCaptureBitsResponse@@UEAAPEAXI@Z.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x18013B914 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x18014A210 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CaptureBitsResponse::~CaptureBitsResponse(CaptureBitsResponse *this)
{
  const void *v2; // rcx
  void *v3; // rcx
  CMILRefCountBase *v4; // rcx
  CMILRefCountBase *v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CaptureBitsResponse::`vftable';
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 17));
  v2 = (const void *)*((_QWORD *)this + 15);
  if ( v2 )
    UnmapViewOfFile(v2);
  v3 = (void *)*((_QWORD *)this + 14);
  if ( v3 )
    CloseHandle(v3);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 9));
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 8);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  v5 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v5 )
    CMILRefCountBase::Release(v5);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
