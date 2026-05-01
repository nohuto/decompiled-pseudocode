/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA@XZ @ 0x1800FD498
 * Callers:
 *     ??_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z @ 0x1800ED880 (--_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_multimap@UHostIdentifierKey@@IU?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@@std@@QEAA@XZ @ 0x1800ED9D4 (--1-$unordered_multimap@UHostIdentifierKey@@IU-$hash@UHostIdentifierKey@@@std@@U-$equal_to@UHost.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800250A4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::~_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>(
        __int64 a1)
{
  char *v2; // rcx
  char **v3; // rax
  char *v4; // rcx
  char *v5; // rbx

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 40) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v3 = *(char ***)(a1 + 8);
  v4 = *v3;
  *v3 = (char *)v3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v4 != *(char **)(a1 + 8) )
  {
    do
    {
      v5 = *(char **)v4;
      std::_Deallocate(v4, 1uLL, 0x20uLL);
      v4 = v5;
    }
    while ( v5 != *(char **)(a1 + 8) );
  }
  std::_Deallocate(*(char **)(a1 + 8), 1uLL, 0x20uLL);
}
