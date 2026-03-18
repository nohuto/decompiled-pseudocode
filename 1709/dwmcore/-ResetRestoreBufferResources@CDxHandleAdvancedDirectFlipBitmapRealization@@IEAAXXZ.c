/*
 * XREFs of ?ResetRestoreBufferResources@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAXXZ @ 0x1801D25A0
 * Callers:
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ @ 0x1801D1D8C (--1CDxHandleAdvancedDirectFlipBitmapRealization@@MEAA@XZ.c)
 *     ?ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1801D24A0 (-ProcessRestoreContent@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJPEAVIRenderTargetDispl.c)
 *     ?ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ @ 0x1801D2580 (-ResetAdvancedDirectFlipState@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::ResetRestoreBufferResources(
        CDxHandleAdvancedDirectFlipBitmapRealization *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx

  v1 = (__int64 *)((char *)this + 424);
  v3 = *((_QWORD *)this + 53);
  if ( v3 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 352LL))(v3, 0LL);
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 52);
  ReleaseInterface<ID2D1Geometry>(v1);
  ReleaseInterface<CRemoteApplicationWindow>((__int64 *)this + 54);
  *((_BYTE *)this + 441) = 0;
}
