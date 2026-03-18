/*
 * XREFs of ?PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ @ 0x1801F777C
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801F74B0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180021CF0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x180021E58 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 */

void __fastcall CHwVidMemTextureManager::PrepareForNewRealization(CHwVidMemTextureManager *this)
{
  CMILPoolResource *v2; // rcx

  ReleaseInterfaceNoNULL<CD3DSurface>(*((_QWORD *)this + 1));
  v2 = (CMILPoolResource *)*((_QWORD *)this + 2);
  if ( v2 )
    CMILPoolResource::Release(v2);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  memset_0((char *)this + 40, 0, 0x2CuLL);
}
