/*
 * XREFs of ??0ControllerNavigationManager@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x18002EC30
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z @ 0x180022894 (--0InputSystem@@QEAA@PEAVBamoConnection@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z @ 0x18000AD9C (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBamoConnection@Bamo@2@@Z.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180016C94 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 */

// Hidden C++ exception states: #wind=6
ControllerNavigationManager *__fastcall ControllerNavigationManager::ControllerNavigationManager(
        ControllerNavigationManager *this,
        struct Microsoft::Bamo::BamoConnection *a2)
{
  char *v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &BamoControllerNavigationManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoControllerNavigationManagerPrincipal::`vftable'{for `IControllerNavigationManagerPrincipal'};
  v3 = (char *)this + 16;
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((ControllerNavigationManager *)((char *)this + 16), a2);
  *(_QWORD *)v3 = &BamoImpl::BamoControllerNavigationManagerPrincipalImpl::`vftable';
  *((_WORD *)v3 + 20) = 0;
  *(_QWORD *)this = &ControllerNavigationManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoControllerNavigationManagerPrincipal::`vftable'{for `IControllerNavigationManagerPrincipal'};
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 9) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                            v4,
                            0LL,
                            0LL);
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 16) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)this + 8,
    8LL);
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 17) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                             v5,
                             0LL,
                             0LL);
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 32) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)this + 16,
    8LL);
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 228) = 1;
  return this;
}
