/*
 * XREFs of ?AcknowledgeExpired@InputDeliveryServer@@UEAAJI@Z @ 0x18007F980
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18008003C (-erase@-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V-$_Uhash_compare@I.c)
 */

__int64 __fastcall InputDeliveryServer::AcknowledgeExpired(__int64 **this, int a2)
{
  __int64 v3; // r8
  _QWORD *v4; // rcx
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r11
  __int64 *v10; // rbx
  __int64 *j; // r8
  __int64 *v12; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h]

  v15 = a2;
  v3 = 0xCBF29CE484222325uLL;
  v4 = this + 49;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)&v15 + i);
    v3 = 0x100000001B3LL * (v6 ^ v3);
  }
  v7 = v4[3];
  v8 = v3 & v4[6];
  v9 = 2 * v8;
  v10 = *(__int64 **)(v7 + 16 * v8);
  for ( j = v10; ; j = (__int64 *)*j )
  {
    v12 = v10 == (__int64 *)v4[1] ? (__int64 *)v4[1] : **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( j == v12 )
      break;
    if ( *((_DWORD *)j + 4) == a2 )
      goto LABEL_11;
  }
  j = (__int64 *)v4[1];
LABEL_11:
  if ( j != this[50] )
    std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
      v4,
      &v14,
      j);
  return 0LL;
}
