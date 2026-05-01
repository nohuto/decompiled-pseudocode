/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA@XZ @ 0x1801C8600
 * Callers:
 *     ??1?$unordered_multimap@UHostIdentifierKey@@IU?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@@std@@QEAA@XZ @ 0x1801C8770 (--1-$unordered_multimap@UHostIdentifierKey@@IU-$hash@UHostIdentifierKey@@@std@@U-$equal_to@UHost.c)
 *     ??1ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA@XZ @ 0x1801C87A0 (--1ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::~_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>(
        _QWORD *a1)
{
  char *v2; // rcx
  char **v3; // rax
  char *v4; // r9
  char *v5; // rcx
  char *v6; // rbx

  v2 = (char *)a1[3];
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(a1[5] - (_QWORD)v2) >> 3, 8uLL);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v3 = (char **)a1[1];
  v4 = *v3;
  *v3 = (char *)v3;
  *(_QWORD *)(a1[1] + 8LL) = a1[1];
  a1[2] = 0LL;
  v5 = (char *)a1[1];
  if ( v4 != v5 )
  {
    do
    {
      v6 = *(char **)v4;
      std::_Deallocate(v4, 1uLL, 0x20uLL);
      v5 = (char *)a1[1];
      v4 = v6;
    }
    while ( v6 != v5 );
  }
  std::_Deallocate(v5, 1uLL, 0x20uLL);
}
