/*
 * XREFs of ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x180071F7C
 * Callers:
 *     ?GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIImageSource@@@Z @ 0x180071BC0 (-GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V?$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4D2D1_EXTEND_MODE@@2@Z @ 0x180071CD8 (-Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V-$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4.c)
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@UEAAXPEBVCD3DDeviceLevel1@@@Z @ 0x180188640 (-NotifyAtlasEntryInvalidated@CGradientSource@@UEAAXPEBVCD3DDeviceLevel1@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::find(
        __int64 **a1,
        __int64 **a2,
        _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax

  v3 = *a1;
  v4 = v3;
  v5 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( (unsigned __int64)v5[4] < *a3 )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  if ( v4 == v3 || *a3 < (unsigned __int64)v4[4] )
    v4 = v3;
  *a2 = v4;
  return a2;
}
