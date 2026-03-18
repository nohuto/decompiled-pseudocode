/*
 * XREFs of ?GetHDR10MetaData@CCompositionSurfaceInfo@@QEBA_NPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1801751E0
 * Callers:
 *     ?NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ @ 0x18006BF08 (-NotifyPowerManagerContentType@CHwndRenderTarget@@QEAAXXZ.c)
 *     ?UpdateHDRMetaData@COverlayContext@@AEAA_NXZ @ 0x18015214C (-UpdateHDRMetaData@COverlayContext@@AEAA_NXZ.c)
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
