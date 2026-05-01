/*
 * XREFs of ??1?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA@XZ @ 0x180128678
 * Callers:
 *     ??_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z @ 0x1801183E0 (--_EComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$unordered_multimap@UHostIdentifierKey@@IU?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@@std@@QEAA@XZ @ 0x180118464 (--1-$unordered_multimap@UHostIdentifierKey@@IU-$hash@UHostIdentifierKey@@@std@@U-$equal_to@UHost.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::~_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>(
        __int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = (__int64)(*(_QWORD *)(a1 + 40) - v2) >> 3;
    if ( v3 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      if ( 8 * v3 < 0x1000 )
      {
LABEL_8:
        operator delete((void *)v2);
        *(_QWORD *)(a1 + 24) = 0LL;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = 0LL;
        goto LABEL_9;
      }
      if ( (v2 & 0x1F) == 0 )
      {
        v4 = *(_QWORD *)(v2 - 8);
        if ( v4 < v2 )
        {
          v2 = v2 - v4 - 8;
          if ( v2 <= 0x1F )
          {
            v2 = v4;
            goto LABEL_8;
          }
        }
      }
    }
    _o__invalid_parameter_noinfo_noreturn(v2);
    JUMPOUT(0x18012872BLL);
  }
LABEL_9:
  v5 = *(_QWORD ***)(a1 + 8);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( v6 != *(_QWORD **)(a1 + 8) )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      operator delete(v6);
      v6 = v7;
    }
    while ( v7 != *(_QWORD **)(a1 + 8) );
  }
  operator delete(*(void **)(a1 + 8));
}
