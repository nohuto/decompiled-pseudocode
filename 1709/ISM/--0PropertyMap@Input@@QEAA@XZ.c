/*
 * XREFs of ??0PropertyMap@Input@@QEAA@XZ @ 0x180016B84
 * Callers:
 *     ??0DisplayBinding@@QEAA@XZ @ 0x18001FF54 (--0DisplayBinding@@QEAA@XZ.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAXKK@Z @ 0x180020E80 (--0DWMInputTarget@@IEAA@AEBUtagMsgRoutingInfo@@PEAXKK@Z.c)
 *     ??0DWMInputTarget@@IEAA@_KPEAX@Z @ 0x180020FE4 (--0DWMInputTarget@@IEAA@_KPEAX@Z.c)
 *     ??0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z @ 0x1800210C0 (--0DWMInputTarget@@IEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z @ 0x1800226D8 (-Create@DWMNullInputTarget@@SAJPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x18001EA44 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ?GetDefinition@PropertyNode@Input@@AEAAJXZ @ 0x180030F18 (-GetDefinition@PropertyNode@Input@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
Input::PropertyMap *__fastcall Input::PropertyMap::PropertyMap(Input::PropertyMap *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  *(_QWORD *)this = &Input::PropertyNode::`vftable';
  *(_OWORD *)((char *)this + 8) = 0uLL;
  *((_QWORD *)this + 3) = 0LL;
  Input::PropertyNode::GetDefinition(this);
  *(_QWORD *)this = &Input::PropertyMap::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode(
                            v3,
                            v2,
                            v4);
  return this;
}
