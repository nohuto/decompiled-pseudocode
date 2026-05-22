/*
 * XREFs of ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18002CC34
 * Callers:
 *     ?OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x18002BCD0 (-OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18002C150 (-OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 *     ?OnClear@ViewHierarchy@@UEAAJPEAUIMessageList@@@Z @ 0x18002C4A0 (-OnClear@ViewHierarchy@@UEAAJPEAUIMessageList@@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  return std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
           a1,
           8LL);
}
