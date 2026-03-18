/*
 * XREFs of ??1CWarpLockSubresource@@MEAA@XZ @ 0x180018FD8
 * Callers:
 *     ??_GCWarpLockSubresource@@MEAAPEAXI@Z @ 0x180018EB0 (--_GCWarpLockSubresource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Unlock@CWarpLockSubresource@@IEAAJXZ @ 0x180018F70 (-Unlock@CWarpLockSubresource@@IEAAJXZ.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  ReleaseInterfaceNoNULL<IWICBitmap>(*((_QWORD *)this + 4));
  v3 = *((_QWORD *)this + 3);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    CMILPoolResource::Release((CMILPoolResource *)(v4 + 472));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
