/*
 * XREFs of ?OnDisconnected@ViewHierarchy@@UEAAJPEAUIMessageProxy@@@Z @ 0x180083500
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveListListenerReference@ViewHierarchy@@AEAAXXZ @ 0x1800841F4 (-RemoveListListenerReference@ViewHierarchy@@AEAAXXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180084238 (-clear@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnDisconnected(ViewHierarchy *this, struct IMessageProxy *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( *((struct IMessageProxy **)this + 8) == a2 )
  {
    ViewHierarchy::RemoveListListenerReference(this);
    v3 = *((_QWORD *)this + 9);
    if ( v3 )
    {
      *((_QWORD *)this + 9) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = *((_QWORD *)this + 8);
    if ( v4 )
    {
      *((_QWORD *)this + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::clear((char *)this + 96);
  }
  return 0LL;
}
