/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x18000AE2C
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x18000AD10 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x18000AD40 (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWarpLockSubresource::~CWarpLockSubresource(CWarpLockSubresource *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 6) == 0LL;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  if ( !v1 )
    CWarpLockSubresource::Unlock(this);
  ReleaseInterfaceNoNULL<CManipulationManager>(*((_QWORD *)this + 4));
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)(v4 + 472));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
