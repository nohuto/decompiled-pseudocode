/*
 * XREFs of ?MoveConstruct@PropertyMap@Input@@UEAAPEAVPropertyNode@2@XZ @ 0x180031FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x18001EA44 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ??4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z @ 0x180031870 (--4PropertyMap@Input@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
struct Input::PropertyNode *__fastcall Input::PropertyMap::MoveConstruct(Input::PropertyMap *this)
{
  char *v3; // [rsp+50h] [rbp+8h]

  v3 = (char *)operator new(0x30uLL);
  *(_OWORD *)(v3 + 8) = 0uLL;
  *((_QWORD *)v3 + 3) = 0LL;
  *(_QWORD *)v3 = &Input::PropertyMap::`vftable';
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *((_QWORD *)v3 + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  Input::PropertyMap::operator=((__int64)v3, (__int64)this);
  return (struct Input::PropertyNode *)v3;
}
