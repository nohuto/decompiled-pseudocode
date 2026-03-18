/*
 * XREFs of ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800498E0
 * Callers:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18004735C (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180082BA8 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x180082E60 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ?Release@CBitmapRealization@@WBA@EAAKXZ @ 0x1800DE850 (-Release@CBitmapRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WFI@EAAKXZ @ 0x1800DE860 (-Release@CBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WJA@EAAKXZ @ 0x1800DE870 (-Release@CBitmapRealization@@WJA@EAAKXZ.c)
 * Callees:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x180045720 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::Release(CBitmapRealization *this)
{
  unsigned __int32 v1; // ebx
  CDxHandleBitmapRealization *(__fastcall *v3)(CDxHandleBitmapRealization *, char); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(CDxHandleBitmapRealization *(__fastcall **)(CDxHandleBitmapRealization *, char))(*(_QWORD *)this + 24LL);
    if ( v3 == CDxHandleBitmapRealization::`vector deleting destructor' )
      CDxHandleBitmapRealization::`vector deleting destructor'(this, 1);
    else
      v3(this, 1);
  }
  return v1;
}
