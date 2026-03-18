/*
 * XREFs of ?Release@CRenderTargetImageSource@@UEAAKXZ @ 0x1800167F0
 * Callers:
 *     ??1CBrushRenderingEffect@@UEAA@XZ @ 0x180016290 (--1CBrushRenderingEffect@@UEAA@XZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C4938 (-InternalRelease@-$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z @ 0x1800C4A14 (--$ReleaseInterfaceNoNULL@VIImageSource@@@@YAXPEAVIImageSource@@@Z.c)
 *     ?Release@CRenderTargetImageSource@@W7EAAKXZ @ 0x1800D59D0 (-Release@CRenderTargetImageSource@@W7EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WBI@EAAKXZ @ 0x1800D59E0 (-Release@CRenderTargetImageSource@@WBI@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WHA@EAAKXZ @ 0x1800D59F0 (-Release@CRenderTargetImageSource@@WHA@EAAKXZ.c)
 *     ?Release@CRenderTargetImageSource@@WHI@EAAKXZ @ 0x1800D5A00 (-Release@CRenderTargetImageSource@@WHI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Release(CRenderTargetImageSource *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 8);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
