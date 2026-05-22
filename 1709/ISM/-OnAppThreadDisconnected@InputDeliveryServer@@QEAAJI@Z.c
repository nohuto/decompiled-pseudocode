/*
 * XREFs of ?OnAppThreadDisconnected@InputDeliveryServer@@QEAAJI@Z @ 0x18007F328
 * Callers:
 *     ?OnPeerDisconnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIPEBX_N@Z @ 0x180081580 (-OnPeerDisconnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIPEBX_N@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??A?$unordered_map@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBI@Z @ 0x18007FC88 (--A-$unordered_map@IV-$ComPtr@VInputThread@@@WRL@Microsoft@@U-$hash@I@std@@U-$equal_to@I@5@V-$al.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18007FD94 (-erase@-$_Hash@V-$_Umap_traits@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_dele.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18008003C (-erase@-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V-$_Uhash_compare@I.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::OnAppThreadDisconnected(InputDeliveryServer *this, int a2)
{
  _QWORD *v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // r10
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  _QWORD **v11; // rax
  _QWORD **v12; // r9
  _QWORD *v13; // rcx
  _QWORD *v14; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // r14
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // r8
  _QWORD *v20; // rax
  _QWORD *v21; // rbx
  _DWORD *v22; // rdi
  bool v23; // bp
  __int64 v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  _QWORD *v28; // [rsp+60h] [rbp+8h] BYREF
  int v29; // [rsp+68h] [rbp+10h] BYREF

  v29 = a2;
  v3 = (_QWORD *)((char *)this + 528);
  v4 = (_QWORD *)std::unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputThread>>::operator[](
                   (char *)this + 528,
                   &v29);
  v5 = (_QWORD *)*v4;
  if ( *v4 )
    (*(void (__fastcall **)(_QWORD))(*v5 + 8LL))(*v4);
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v29 + i) ^ (unsigned __int64)v6);
  v8 = 2 * (v6 & v3[6]);
  v9 = v3[3];
  v10 = *(_QWORD **)(v9 + 16 * (v6 & v3[6]));
  v11 = (_QWORD **)v3[1];
  v12 = (_QWORD **)v10;
  while ( 1 )
  {
    if ( v12 == v11 )
      v13 = (_QWORD *)v3[1];
    else
      v13 = **(_QWORD ***)(v9 + 8 * v8 + 8);
    if ( v10 == v13 )
      goto LABEL_20;
    if ( *((_DWORD *)v10 + 4) == v29 )
      break;
    v10 = (_QWORD *)*v10;
  }
  v14 = v10;
  while ( 1 )
  {
    v15 = v12 == v11 ? (_QWORD *)v3[1] : **(_QWORD ***)(v9 + 8 * v8 + 8);
    if ( v10 == v15 || v29 != *((_DWORD *)v10 + 4) )
      break;
    v10 = (_QWORD *)*v10;
  }
  if ( v14 == v10 )
  {
LABEL_20:
    v10 = (_QWORD *)v3[1];
    v14 = v10;
  }
  v28 = v14;
  v16 = *v11;
  if ( v14 == *v11 && v10 == v11 )
  {
    *v11 = v11;
    *(_QWORD *)(v3[1] + 8LL) = v3[1];
    v3[2] = 0LL;
    if ( v16 != (_QWORD *)v3[1] )
    {
      do
      {
        v17 = (_QWORD *)*v16;
        v18 = v16[3];
        if ( v18 )
        {
          v16[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        operator delete(v16);
        v16 = v17;
      }
      while ( v17 != (_QWORD *)v3[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      v3,
      8LL);
  }
  else
  {
    while ( v14 != v10 )
    {
      v19 = v14;
      v14 = (_QWORD *)*v14;
      std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
        v3,
        &v28,
        v19);
    }
  }
  v20 = (_QWORD *)*((_QWORD *)this + 59);
  v21 = (_QWORD *)*v20;
  if ( (_QWORD *)*v20 != v20 )
  {
    do
    {
      v22 = *(_DWORD **)(v21[8] + 8LL);
      if ( v22 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22 + 8LL))(*(_QWORD *)(v21[8] + 8LL));
      v23 = v22[4] == v29;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 16LL))(v22);
      if ( v23 )
        v21 = *(_QWORD **)std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::erase(
                            (char *)this + 464,
                            &v28);
      else
        v21 = (_QWORD *)*v21;
    }
    while ( v21 != *((_QWORD **)this + 59) );
  }
  v24 = v5[3];
  if ( v24 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v24 + 8LL))(v5[3]);
  v25 = (_QWORD *)*((_QWORD *)this + 51);
  v26 = (_QWORD *)*v25;
  if ( (_QWORD *)*v25 != v25 )
  {
    do
    {
      if ( *(_QWORD *)(v26[3] + 24LL) == v24 )
        v26 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
                            (char *)this + 400,
                            &v28,
                            v26);
      else
        v26 = (_QWORD *)*v26;
    }
    while ( v26 != *((_QWORD **)this + 51) );
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  return 0LL;
}
