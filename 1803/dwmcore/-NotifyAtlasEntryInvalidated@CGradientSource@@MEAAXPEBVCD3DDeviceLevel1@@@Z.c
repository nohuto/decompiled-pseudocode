/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801BDA20
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@AEBQEBVCD3DDeviceLevel1@@@Z @ 0x180012B8C (-find@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDevi.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@std@@@std@@@2@@Z @ 0x1801900B0 (-erase@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3DDev.c)
 */

void __fastcall CGradientSource::NotifyAtlasEntryInvalidated(CGradientSource *this, const struct CD3DDeviceLevel1 *a2)
{
  _QWORD *v2; // rbx
  char *v3; // r8
  __int64 v4; // rax
  char *v5; // [rsp+30h] [rbp+8h] BYREF
  const struct CD3DDeviceLevel1 *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (_QWORD *)((char *)this + 8);
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::find(
    (__int64 *)this + 1,
    (__int64 **)&v5,
    (unsigned __int64 *)&v6);
  v3 = v5;
  v4 = *((_QWORD *)v5 + 5);
  if ( v4 )
    *(_QWORD *)(v4 + 40) = 0LL;
  std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::erase(
    v2,
    (__int64 *)&v5,
    v3);
}
