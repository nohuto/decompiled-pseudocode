/*
 * XREFs of ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C000A3D8
 * Callers:
 *     NtOpenCompositionSurfaceDirtyRegion @ 0x1C000D000 (NtOpenCompositionSurfaceDirtyRegion.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C0012284 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBufferRealization::OpenLifetimeDirtyRegion(CBufferRealization *this, HRGN *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v5 = (*(__int64 (__fastcall **)(__int64 *))(*((_QWORD *)Global + 219) + 8LL))(&v7);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 48LL))(v7, *((_QWORD *)this + 8), 5LL);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, HRGN *))(*(_QWORD *)v7 + 56LL))(v7, a2);
    (**(void (__fastcall ***)(__int64))v7)(v7);
  }
  return (unsigned int)v5;
}
