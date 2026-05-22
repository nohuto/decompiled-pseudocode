/*
 * XREFs of ??0Win32kInterop@@QEAA@XZ @ 0x18000AFA8
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x18000EC74 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800122E0 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
Win32kInterop *__fastcall Win32kInterop::Win32kInterop(Win32kInterop *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx

  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &Win32kInterop::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &Win32kInterop::`vftable'{for `IDisplayBindingObserver'};
  *((_QWORD *)this + 2) = &Win32kInterop::`vftable'{for `IInputBuffer'};
  *((_QWORD *)this + 3) = &Win32kInterop::`vftable'{for `IPointerInfoAdapterClient'};
  *((_QWORD *)this + 4) = &Win32kInterop::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 22) = 0;
  v2 = operator new[](0x10uLL);
  *((_QWORD *)this + 9) = v2;
  v3 = *((unsigned int *)this + 22);
  *v2 = v3;
  *((_QWORD *)this + 10) = 1LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>::_Buynode0(
                             v3,
                             0LL,
                             0LL);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 24) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    (_QWORD *)this + 12,
    8LL);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  return this;
}
