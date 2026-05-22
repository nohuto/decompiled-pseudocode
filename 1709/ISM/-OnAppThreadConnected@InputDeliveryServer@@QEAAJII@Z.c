/*
 * XREFs of ?OnAppThreadConnected@InputDeliveryServer@@QEAAJII@Z @ 0x18007F038
 * Callers:
 *     ?OnPeerConnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIIPEAPEAX@Z @ 0x180081590 (-OnPeerConnected@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x180080EA8 (--$_Insert@AEAU-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$_List_unchecked_iterator@.c)
 *     ??$_Buynode@AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@Z @ 0x180081488 (--$_Buynode@AEAIAEAV-$ComPtr@VInputThread@@@WRL@Microsoft@@@-$_List_buy@U-$pair@$$CBIV-$ComPtr@V.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InputDeliveryServer::OnAppThreadConnected(
        InputDeliveryServer *this,
        unsigned int a2,
        unsigned int a3)
{
  _DWORD *v6; // rbx
  int v7; // edi
  int v8; // esi
  _DWORD *v9; // rsi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  _DWORD *v16; // rcx
  char v18[24]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  _QWORD *v20; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+50h] BYREF
  _DWORD *v22; // [rsp+C8h] [rbp+58h]

  v21 = a3;
  v22 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = -2147024882;
  if ( v6 )
  {
    v6[3] = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &InputQueue::`vftable';
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_QWORD *)v6 + 10) = 0LL;
    *((_QWORD *)v6 + 11) = 0LL;
    *((_QWORD *)v6 + 12) = 0LL;
    *((_QWORD *)v6 + 13) = 0LL;
    v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD))(*(_QWORD *)v6 + 32LL))(
           v6,
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
           a3);
    if ( v8 >= 0 )
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
      v22 = v6;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
      v8 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v8 = -2147024882;
  }
  if ( v8 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x216,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v8);
  v9 = v22;
  v20 = 0LL;
  v10 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    *((_DWORD *)v10 + 3) = 1;
    *v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v11 = &InputThread::`vftable';
    v11[3] = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _DWORD *))(*v11 + 32LL))(v11, a3, a2, v9);
    if ( v7 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      v20 = v11;
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v7 = 0;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
    }
  }
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x21E,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v12 = **((_QWORD **)this + 67);
  v13 = std::_List_buy<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::_Buynode<unsigned int &,Microsoft::WRL::ComPtr<InputThread> &>(
          (_DWORD)retaddr,
          v12,
          *(_QWORD *)(v12 + 8),
          (unsigned int)&v21,
          (__int64)&v20);
  v14 = *((_QWORD *)this + 68);
  if ( v14 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  *((_QWORD *)this + 68) = v14 + 1;
  *(_QWORD *)(v12 + 8) = v13;
  **(_QWORD **)(v13 + 8) = v13;
  std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Insert<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>>(
    (char *)this + 528,
    v18,
    **((_QWORD **)this + 67) + 16LL);
  v15 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
  }
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return 0LL;
}
