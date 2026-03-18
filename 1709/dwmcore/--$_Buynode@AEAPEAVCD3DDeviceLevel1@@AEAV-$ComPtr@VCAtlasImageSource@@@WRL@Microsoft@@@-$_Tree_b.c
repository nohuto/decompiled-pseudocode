/*
 * XREFs of ??$_Buynode@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree_buy@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@PEAX@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180072750
 * Callers:
 *     ??$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@V?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAPEAVCD3DDeviceLevel1@@AEAV?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@Z @ 0x180071EE8 (--$emplace@AEAPEAVCD3DDeviceLevel1@@AEAV-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@@-$_Tree@V-.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ @ 0x1800BC15C (-InternalAddRef@-$ComPtr@VCAtlasImageSource@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::_Tree_buy<std::pair<CD3DDeviceLevel1 const * const,Microsoft::WRL::ComPtr<CAtlasImageSource>>>::_Buynode<CD3DDeviceLevel1 * &,Microsoft::WRL::ComPtr<CAtlasImageSource> &>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = operator new(0x30uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v6 = *a1;
  if ( v6 != (_QWORD *)-8LL )
    v6[1] = *a1;
  if ( v6 != (_QWORD *)-16LL )
    v6[2] = *a1;
  *((_WORD *)v6 + 12) = 0;
  if ( v6 != (_QWORD *)-32LL )
  {
    v6[4] = *a2;
    v6[5] = *a3;
    Microsoft::WRL::ComPtr<CAtlasImageSource>::InternalAddRef();
  }
  return v6;
}
