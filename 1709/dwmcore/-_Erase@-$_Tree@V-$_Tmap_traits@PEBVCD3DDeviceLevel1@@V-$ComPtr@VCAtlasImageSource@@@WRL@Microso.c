/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180071FC4
 * Callers:
 *     ??1CGradientSource@@MEAA@XZ @ 0x180071B44 (--1CGradientSource@@MEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180071FC4 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microso.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180071FC4 (-_Erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@V-$ComPtr@VCAtlasImageSource@@@WRL@Microso.c)
 *     ?InternalRelease@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BC190 (-InternalRelease@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::_Erase(
        __int64 a1,
        char *a2)
{
  char *v2; // rbx
  char *i; // rdi

  v2 = a2;
  for ( i = a2; !i[25]; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,Microsoft::WRL::ComPtr<CAtlasImageSource>,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>,0>>::_Erase(
      a1,
      *((_QWORD *)i + 2));
    i = *(char **)i;
    Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalRelease(v2 + 40);
    WPF::ProcessHeapImpl::Free(v2);
  }
}
