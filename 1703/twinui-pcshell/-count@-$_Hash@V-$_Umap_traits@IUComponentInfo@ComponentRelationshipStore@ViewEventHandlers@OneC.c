/*
 * XREFs of ?count@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x18017A1DC
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801789F0 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ?IsComponentRegistered@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x180179560 (-IsComponentRegistered@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::count(
        _QWORD *a1,
        int *a2)
{
  __int64 v2; // r10
  unsigned __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rbx
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  int v13; // r11d
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx

  v2 = 0LL;
  v4 = 0LL;
  v5 = 0xCBF29CE484222325uLL;
  do
  {
    v6 = *((unsigned __int8 *)a2 + v4++);
    v5 = 0x100000001B3LL * (v6 ^ v5);
  }
  while ( v4 < 4 );
  v7 = a1[3];
  v8 = v5 & a1[6];
  v9 = (_QWORD *)a1[1];
  v10 = 2 * v8;
  for ( i = *(_QWORD **)(v7 + 16 * v8); ; i = (_QWORD *)*i )
  {
    v12 = *(_QWORD **)(v7 + 8 * v10) == v9 ? (_QWORD *)a1[1] : **(_QWORD ***)(v7 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( *((_DWORD *)i + 4) == *a2 )
    {
      v13 = *a2;
      v14 = i;
      while ( 1 )
      {
        v15 = *(_QWORD **)(v7 + 8 * v10) == v9 ? v9 : **(_QWORD ***)(v7 + 8 * v10 + 8);
        if ( i == v15 || v13 != *((_DWORD *)i + 4) )
          break;
        i = (_QWORD *)*i;
      }
      if ( v14 != i )
        goto LABEL_19;
      break;
    }
  }
  i = v9;
  v14 = v9;
  while ( v14 != i )
  {
LABEL_19:
    v14 = (_QWORD *)*v14;
    ++v2;
  }
  return v2;
}
