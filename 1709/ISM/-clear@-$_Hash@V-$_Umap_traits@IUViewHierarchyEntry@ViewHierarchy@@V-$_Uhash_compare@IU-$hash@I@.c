/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180084238
 * Callers:
 *     ?OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083500 (-OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180083980 (-OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?OnClear@ViewHierarchy@@UEAAJPEAUIMessageList@@@Z @ 0x180083CC0 (-OnClear@ViewHierarchy@@UEAAJPEAUIMessageList@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::clear(
        _QWORD *a1)
{
  _QWORD **v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  v2 = (_QWORD **)a1[1];
  v3 = *v2;
  *v2 = v2;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  if ( v3 != (_QWORD *)a1[1] )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != (_QWORD *)a1[1] );
  }
  return std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
           a1,
           8LL);
}
