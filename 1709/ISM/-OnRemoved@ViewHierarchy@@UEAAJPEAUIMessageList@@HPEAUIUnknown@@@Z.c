/*
 * XREFs of ?OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x180083980
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18008003C (-erase@-$_Hash@V-$_Umap_traits@IV-$ComPtr@VInputAcknowledge@@@WRL@Microsoft@@V-$_Uhash_compare@I.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180084238 (-clear@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHierarchy::OnRemoved(
        ViewHierarchy *this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 *v11; // rdi
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  struct IUnknownVtbl *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 i; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r11
  _QWORD *v25; // rax
  _QWORD *v26; // r9
  _QWORD *j; // rbx
  _QWORD *v28; // rcx
  _QWORD *v29; // rdi
  _QWORD *v30; // rcx
  _QWORD *v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v35; // [rsp+20h] [rbp-20h] BYREF
  __int64 v36; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v39; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v35 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         &v35);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xB7,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v35 + 64LL))(v35, (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (_QWORD *)*((_QWORD *)this + 21);
  v10 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v10 != v9 )
  {
    do
    {
      if ( *v10 == v35 )
        break;
      ++v10;
    }
    while ( v10 != v9 );
    if ( v10 != v9 )
    {
      v11 = v10 + 1;
      v12 = (__int64 *)*((_QWORD *)this + 21);
      if ( v10 + 1 != v9 )
      {
        do
        {
          v13 = 0LL;
          if ( v37 != v11 )
          {
            v13 = *v11;
            *v11 = 0LL;
          }
          v14 = *(v11 - 1);
          *(v11 - 1) = v13;
          if ( v14 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
          ++v11;
        }
        while ( v11 != v12 );
      }
      v15 = *((_QWORD *)this + 21);
      v16 = *(_QWORD *)(v15 - 8);
      if ( v16 )
      {
        *(_QWORD *)(v15 - 8) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      *((_QWORD *)this + 21) -= 8LL;
    }
  }
  v17 = a4->lpVtbl;
  v36 = 0LL;
  v18 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v17->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v36);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 120LL))(v36, &v39);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x180083C74LL);
  }
  v20 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v22 = *((unsigned __int8 *)&v39 + i);
    v20 = 0x100000001B3LL * (v22 ^ v20);
  }
  v23 = *((_QWORD *)this + 14);
  v24 = 2 * (v20 & *((_QWORD *)this + 17));
  v25 = (_QWORD *)*((_QWORD *)this + 12);
  v26 = *(_QWORD **)(v23 + 16 * (v20 & *((_QWORD *)this + 17)));
  for ( j = v26; ; j = (_QWORD *)*j )
  {
    if ( v26 == v25 )
      v28 = (_QWORD *)*((_QWORD *)this + 12);
    else
      v28 = **(_QWORD ***)(v23 + 8 * v24 + 8);
    if ( j == v28 )
      goto LABEL_37;
    if ( *((_DWORD *)j + 4) == v39 )
      break;
  }
  v29 = j;
  while ( 1 )
  {
    v30 = v26 == v25 ? (_QWORD *)*((_QWORD *)this + 12) : **(_QWORD ***)(v23 + 8 * v24 + 8);
    if ( j == v30 || v39 != *((_DWORD *)j + 4) )
      break;
    j = (_QWORD *)*j;
  }
  if ( v29 == j )
  {
LABEL_37:
    j = (_QWORD *)*((_QWORD *)this + 12);
    v29 = j;
  }
  v37[0] = v29;
  if ( v29 == (_QWORD *)*v25 && j == v25 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::clear((char *)this + 88);
  }
  else
  {
    while ( v29 != j )
    {
      v31 = v29;
      v29 = (_QWORD *)*v29;
      std::_Hash<std::_Umap_traits<unsigned int,Microsoft::WRL::ComPtr<InputAcknowledge>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputAcknowledge>>>,0>>::erase(
        (_QWORD *)this + 11,
        v37,
        v31);
    }
  }
  v32 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
