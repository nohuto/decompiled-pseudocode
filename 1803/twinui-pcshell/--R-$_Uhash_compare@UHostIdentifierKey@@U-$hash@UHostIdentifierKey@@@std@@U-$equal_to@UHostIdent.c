/*
 * XREFs of ??R?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@QEBA_NAEBUHostIdentifierKey@@0@Z @ 0x1800FA710
 * Callers:
 *     ?GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@PEAPEAU?$IVectorView@I@Collections@Foundation@5@@Z @ 0x18002F060 (-GetComponentsForHost@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEA.c)
 *     ?equal_range@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@V12@@2@AEBUHostIdentifierKey@@@Z @ 0x1800FA634 (-equal_range@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 * Callees:
 *     <none>
 */

char __fastcall std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>::operator()(
        __int64 a1,
        int *a2,
        _DWORD *a3)
{
  int v3; // r9d
  char v4; // cl

  v3 = *a2;
  v4 = 1;
  if ( *a2 == *a3 )
  {
    if ( !v3 && a2[1] == a3[1] )
      return 0;
    v4 = 1;
    if ( v3 == 1 )
    {
      v4 = 1;
      if ( a2[2] == a3[2] )
        return 0;
    }
  }
  return v4;
}
