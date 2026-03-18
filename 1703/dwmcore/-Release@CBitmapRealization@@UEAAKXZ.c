/*
 * XREFs of ?Release@CBitmapRealization@@UEAAKXZ @ 0x180036BA0
 * Callers:
 *     ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18007641C (-Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180076E90 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ??$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z @ 0x1800C2EB4 (--$ReplaceInterface@VCBitmapRealization@@V1@@@YAXAEAPEAVCBitmapRealization@@PEAV0@@Z.c)
 *     ??$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z @ 0x1800C6348 (--$ReleaseInterface@VCBitmapRealization@@@@YAXAEAPEAVCBitmapRealization@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x1800C671C (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     ?Release@CBitmapRealization@@WBA@EAAKXZ @ 0x1800D5A60 (-Release@CBitmapRealization@@WBA@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WGI@EAAKXZ @ 0x1800D5A70 (-Release@CBitmapRealization@@WGI@EAAKXZ.c)
 *     ?Release@CBitmapRealization@@WHA@EAAKXZ @ 0x1800D5A80 (-Release@CBitmapRealization@@WHA@EAAKXZ.c)
 * Callees:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x18007A380 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
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
