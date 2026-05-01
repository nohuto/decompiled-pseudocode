/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x18017A3C0
 * Callers:
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x180178EEC (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 *     ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x180179AA0 (-GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEA.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        int *a3)
{
  int v3; // ebx
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 *i; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rdx
  __int64 *v20; // r8
  int v22; // [rsp+8h] [rbp+8h]

  v3 = *a3;
  v7 = 0xCBF29CE484222325uLL;
  if ( *a3 == 1 )
  {
    v8 = 0LL;
    v22 = a3[2];
    do
    {
      v9 = *((unsigned __int8 *)&v22 + v8++);
      v7 = 0x100000001B3LL * (v9 ^ v7);
    }
    while ( v8 < 4 );
  }
  else
  {
    v10 = 0LL;
    v22 = a3[1];
    do
    {
      v11 = *((unsigned __int8 *)&v22 + v10++);
      v7 = 0x100000001B3LL * (v11 ^ v7);
    }
    while ( v10 < 4 );
  }
  v12 = v7 & a1[6];
  v13 = a1[3];
  v14 = 2 * v12;
  v15 = 2 * v12;
  v16 = a1[1];
  for ( i = *(__int64 **)(v13 + 8 * v14); ; i = (__int64 *)*i )
  {
    v18 = *(_QWORD *)(v13 + 8 * v15) == v16 ? (__int64 *)a1[1] : **(__int64 ***)(v13 + 8 * v15 + 8);
    if ( i == v18 )
      break;
    if ( *((_DWORD *)i + 4) == v3
      && (!*((_DWORD *)i + 4) && *((_DWORD *)i + 5) == a3[1] || *((_DWORD *)i + 4) == 1 && *((_DWORD *)i + 6) == a3[2]) )
    {
      v19 = i;
      while ( 1 )
      {
        v20 = *(_QWORD *)(v13 + 8 * v15) == v16 ? (__int64 *)a1[1] : **(__int64 ***)(v13 + 8 * v15 + 8);
        if ( i == v20
          || v3 != *((_DWORD *)i + 4)
          || (v3 || a3[1] != *((_DWORD *)i + 5)) && (v3 != 1 || a3[2] != *((_DWORD *)i + 6)) )
        {
          break;
        }
        i = (__int64 *)*i;
      }
      if ( v19 != i )
      {
        *a2 = v19;
        a2[1] = i;
        return a2;
      }
      break;
    }
  }
  *a2 = v16;
  a2[1] = v16;
  return a2;
}
