/*
 * XREFs of ?PrepareForNewRealization@CHwVidMemTextureManager@@QEAAXXZ @ 0x1801A3358
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801A30A0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18004C100 (-Release@CMILPoolResource@@UEAAKXZ.c)
 */

void __fastcall CHwVidMemTextureManager::PrepareForNewRealization(CHwVidMemTextureManager *this)
{
  CMILPoolResource *v2; // rcx
  CMILPoolResource *v3; // rcx

  v2 = (CMILPoolResource *)*((_QWORD *)this + 1);
  if ( v2 )
    CMILPoolResource::Release(v2);
  v3 = (CMILPoolResource *)*((_QWORD *)this + 2);
  if ( v3 )
    CMILPoolResource::Release(v3);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  memset_0((char *)this + 40, 0, 0x2CuLL);
}
