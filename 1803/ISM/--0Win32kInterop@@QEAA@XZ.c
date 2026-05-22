/*
 * XREFs of ??0Win32kInterop@@QEAA@XZ @ 0x18000F304
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x180013740 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180016C94 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x180016CE0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
Win32kInterop *__fastcall Win32kInterop::Win32kInterop(Win32kInterop *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &Win32kInterop::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &Win32kInterop::`vftable'{for `IInputBuffer'};
  *((_QWORD *)this + 2) = &Win32kInterop::`vftable'{for `IPointerInfoAdapterClient'};
  *((_QWORD *)this + 3) = &Win32kInterop::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 20) = 0;
  v2 = operator new[](0x10uLL);
  *((_QWORD *)this + 8) = v2;
  v3 = *((unsigned int *)this + 20);
  *v2 = v3;
  *((_QWORD *)this + 9) = 1LL;
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 12) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>::_Buynode0(
                             v3,
                             0LL,
                             0LL);
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 22) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)this + 11,
    8LL);
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 20) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                             v4,
                             0LL,
                             0LL);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 38) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)this + 19,
    8LL);
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  memset_0((char *)this + 232, 0, 0x6C8uLL);
  *((_DWORD *)this + 64) = 1736;
  *((_BYTE *)this + 1968) = 0;
  *((_QWORD *)this + 248) = 0LL;
  *((_QWORD *)this + 249) = 0LL;
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 254) = 0LL;
  *((_QWORD *)this + 255) = 0LL;
  *((_QWORD *)this + 268) = 0LL;
  *((_QWORD *)this + 269) = 0LL;
  *((_QWORD *)this + 270) = 0LL;
  *((_QWORD *)this + 271) = 0LL;
  *((_QWORD *)this + 284) = 0LL;
  *((_QWORD *)this + 285) = 0LL;
  *((_QWORD *)this + 286) = 0LL;
  *((_QWORD *)this + 287) = 0LL;
  *((_QWORD *)this + 300) = 0LL;
  *((_QWORD *)this + 301) = 0LL;
  *((_QWORD *)this + 302) = 0LL;
  *((_QWORD *)this + 303) = 0LL;
  *((_QWORD *)this + 316) = 0LL;
  return this;
}
