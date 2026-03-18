/*
 * XREFs of ?Release@CBitmapRealization@@UEAAKXZ @ 0x18002B2F0
 * Callers:
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180076684 (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800769EC (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x180076A28 (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     ?Release@CBitmapRealization@@WBA@EAAKXZ @ 0x1800C7150 (-Release@CBitmapRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WFI@EAAKXZ @ 0x1800C7160 (-Release@CBitmapRealization@@WFI@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WJA@EAAKXZ @ 0x1800C7170 (-Release@CBitmapRealization@@WJA@EAAKXZ.c)
 * Callees:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x18004D2D0 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::Release(CBitmapRealization *this)
{
  unsigned __int32 v1; // ebx
  void *(__fastcall *v3)(CDxHandleBitmapRealization *__hidden, unsigned int); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    v3 = *(void *(__fastcall **)(CDxHandleBitmapRealization *__hidden, unsigned int))(*(_QWORD *)this + 24LL);
    if ( v3 == CDxHandleBitmapRealization::`vector deleting destructor' )
      CDxHandleBitmapRealization::`vector deleting destructor'(this, 1u);
    else
      v3(this, 1u);
  }
  return v1;
}
