/*
 * XREFs of ?InternalRelease@?$ComPtr@VCCompositionSurfaceBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x180183A1C
 * Callers:
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x180183B74 (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_.c)
 *     ?ReleaseResources@CCompositionCubeMap@@AEAAXXZ @ 0x180183D64 (-ReleaseResources@CCompositionCubeMap@@AEAAXXZ.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x18018EF40 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@PEAPEAV1@@Z @ 0x1801EC500 (-Create@CD2DGenericInk@@SAJPEAVCD2DResourceManager@@PEAUIDCompositionDirectInkWetStrokePartner@@.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CCompositionSurfaceBitmap>::InternalRelease(CMILCOMBase **a1)
{
  CMILCOMBase *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return CMILCOMBase::InternalRelease(v1);
  }
  return result;
}
