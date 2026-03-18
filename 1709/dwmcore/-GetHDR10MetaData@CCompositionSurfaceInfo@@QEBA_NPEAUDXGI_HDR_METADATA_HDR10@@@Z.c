/*
 * XREFs of ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x18017C1E4
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x180017508 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z @ 0x180144B28 (-UpdateHDRMetaData@COverlayContext@@AEAA_NPEAPEBX@Z.c)
 *     ?UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z @ 0x1801497F8 (-UpdateHDRMetaData@CDirectFlipInfo@@IEAA_NPEAPEBX@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurfaceInfo::GetHDR10MetaData(
        CCompositionSurfaceInfo *this,
        struct DXGI_HDR_METADATA_HDR10 *a2)
{
  int v2; // r8d
  bool result; // al
  __int128 v4; // xmm0
  __int64 v5; // xmm1_8
  int v6; // ecx

  v2 = *((_DWORD *)this + 36);
  result = v2 == 1;
  if ( v2 == 1 )
  {
    v4 = *(_OWORD *)((char *)this + 148);
    v5 = *(_QWORD *)((char *)this + 164);
    v6 = *((_DWORD *)this + 43);
    *(_OWORD *)a2->RedPrimary = v4;
    *(_QWORD *)&a2->MaxMasteringLuminance = v5;
    *(_DWORD *)&a2->MaxContentLightLevel = v6;
  }
  return result;
}
