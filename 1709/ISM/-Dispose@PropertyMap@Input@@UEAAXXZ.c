/*
 * XREFs of ?Dispose@PropertyMap@Input@@UEAAXXZ @ 0x180031BA0
 * Callers:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x180016C64 (--1PropertyMap@Input@@UEAA@XZ.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@_K@std@@@std@@@std@@@2@@Z @ 0x18001E5B8 (-erase@-$_Tree@V-$_Tmap_traits@$$CBUtagMsgRoutingInfo@@_KUMsgRoutingInfoComparator@MPCManager@@V.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Input::PropertyMap::Dispose(Input::PropertyMap *this)
{
  __int64 *v2; // r8
  void (__fastcall ***v3)(_QWORD, __int64); // rsi
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  while ( *((_QWORD *)this + 5) )
  {
    v2 = (__int64 *)**((_QWORD **)this + 4);
    v3 = (void (__fastcall ***)(_QWORD, __int64))v2[6];
    std::_Tree<std::_Tmap_traits<tagMsgRoutingInfo const,unsigned __int64,MPCManager::MsgRoutingInfoComparator,std::allocator<std::pair<tagMsgRoutingInfo const,unsigned __int64>>,0>>::erase(
      (_QWORD *)this + 4,
      &v4,
      v2);
    if ( v3 )
      (**v3)(v3, 1LL);
  }
}
