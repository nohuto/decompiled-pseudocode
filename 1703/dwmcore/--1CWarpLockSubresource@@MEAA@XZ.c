/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x180026B3C
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180026A20 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x180026A50 (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CWarpLockSubresource::~CWarpLockSubresource(CWarpLockSubresource *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 5) == 0LL;
  *(_QWORD *)this = &CWarpLockSubresource::`vftable';
  if ( !v1 )
    CWarpLockSubresource::Unlock(this);
  ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 3));
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
