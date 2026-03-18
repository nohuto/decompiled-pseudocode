/*
 * XREFs of ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801AC5C4
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180061DB0 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007A730 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x180172BB8 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceInfo::GetHDR10MetaData(
        CCompositionSurfaceInfo *this,
        struct DXGI_HDR_METADATA_HDR10 *a2)
{
  bool result; // al
  __int128 v3; // xmm0
  __int64 v4; // xmm1_8
  int v5; // ecx

  result = *((_DWORD *)this + 36) == 1;
  if ( *((_DWORD *)this + 36) == 1 )
  {
    v3 = *(_OWORD *)((char *)this + 148);
    v4 = *(_QWORD *)((char *)this + 164);
    v5 = *((_DWORD *)this + 43);
    *(_OWORD *)a2->RedPrimary = v3;
    *(_QWORD *)&a2->MaxMasteringLuminance = v4;
    *(_DWORD *)&a2->MaxContentLightLevel = v5;
  }
  return result;
}
