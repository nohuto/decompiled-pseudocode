/*
 * XREFs of ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190
 * Callers:
 *     ?GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIImageSource@@@Z @ 0x180071BC0 (-GetImageSource@CGradientSource@@QEAAJPEAVCDrawingContext@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$_Insert_at@AEAU?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@1@1@Z @ 0x180071E70 (--$_Insert_at@AEAU-$pair@QEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@st.c)
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180071EE8 (--$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@-$_Tree@V-.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180071FC4 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microso.c)
 *     ?Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800727E4 (-Create@CAtlasImageSource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1801675F8 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microsof.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x180027A60 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(CGdiSpriteBitmap **a1)
{
  __int64 result; // rax
  CGdiSpriteBitmap *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CGdiSpriteBitmap::Release )
      return CGdiSpriteBitmap::Release(v3);
    else
      return v4();
  }
  return result;
}
