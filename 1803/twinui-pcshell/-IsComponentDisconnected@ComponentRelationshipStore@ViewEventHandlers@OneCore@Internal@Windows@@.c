/*
 * XREFs of ?IsComponentDisconnected@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAE@Z @ 0x180030940
 * Callers:
 *     ?IsComponentDisconnected@ViewEventDispatcher@@UEAAJIPEAE@Z @ 0x1800341D0 (-IsComponentDisconnected@ViewEventDispatcher@@UEAAJIPEAE@Z.c)
 * Callees:
 *     ?_End@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1800729F8 (-_End@-$_Hash@V-$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCo.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::IsComponentDisconnected(
        RTL_SRWLOCK *this,
        int a2,
        bool *a3)
{
  RTL_SRWLOCK *v3; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  _QWORD *i; // r10
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  _DWORD *v12; // r10
  _QWORD *Ptr; // r11
  _QWORD *v14; // r10
  __int64 v15; // rax
  _QWORD *v17; // rax
  char v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+58h] [rbp+10h] BYREF
  char v20; // [rsp+60h] [rbp+18h] BYREF

  v19 = a2;
  v3 = this + 10;
  AcquireSRWLockShared(this + 10);
  v7 = (unsigned __int64)this[33].Ptr & std::_Hash_bytes((const unsigned __int8 *)&v19, 4uLL);
  for ( i = (_QWORD *)*((_QWORD *)this[30].Ptr + 2 * v7); ; i = *(_QWORD **)v12 )
  {
    v10 = i;
    v11 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                      &this[27],
                      &v18,
                      v7,
                      v8);
    if ( v12 == (_DWORD *)*v11 )
      goto LABEL_3;
    if ( v12[4] == a2 )
      break;
  }
  do
    v17 = (_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::_End(
                      &this[27],
                      &v20,
                      v7,
                      v8);
  while ( v14 != (_QWORD *)*v17 && a2 == *((_DWORD *)v14 + 4) );
  if ( v10 == v14 )
  {
LABEL_3:
    Ptr = this[28].Ptr;
    v14 = Ptr;
  }
  v15 = 0LL;
  while ( Ptr != v14 )
  {
    Ptr = (_QWORD *)*Ptr;
    ++v15;
  }
  *a3 = v15 != 0;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
