/*
 * XREFs of ??0ControllerNavigationManager@@AEAA@XZ @ 0x18003BE08
 * Callers:
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003BFD0 (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18003CDB8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

// Hidden C++ exception states: #wind=3
ControllerNavigationManager *__fastcall ControllerNavigationManager::ControllerNavigationManager(
        ControllerNavigationManager *this)
{
  _QWORD *v2; // rdi
  char *v3; // rbx
  __int64 v4; // rdi

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &ControllerNavigationManager::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 2) = &ControllerNavigationManager::`vftable'{for `IRemoteControllerNavigation'};
  v2 = (_QWORD *)((char *)this + 24);
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                            this,
                            0LL,
                            0LL);
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    v2,
    8LL);
  *((_WORD *)this + 44) = 0;
  *((_BYTE *)this + 90) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 156) = 1;
  v3 = (char *)this + 160;
  v4 = 5LL;
  do
  {
    memset(v3, 0, 0x28uLL);
    *((_DWORD *)v3 + 10) = 0;
    *(_QWORD *)(v3 + 44) = 0LL;
    *(_QWORD *)(v3 + 52) = 0LL;
    *(_QWORD *)(v3 + 60) = 0LL;
    v3 += 72;
    --v4;
  }
  while ( v4 );
  return this;
}
