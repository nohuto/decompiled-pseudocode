/*
 * XREFs of ?OnRemoved@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18002C150
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x180016744 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKV-$ComPtr@VPointerInf.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18002CC34 (-clear@-$_Hash@V-$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
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
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  __int64 *v11; // rdi
  __int64 *v12; // r14
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct IUnknownVtbl *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 i; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r11
  __int64 v27; // rcx
  _QWORD *v28; // r9
  _QWORD *j; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rdi
  _QWORD *v33; // rcx
  _QWORD *v34; // r8
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v38; // [rsp+20h] [rbp-20h] BYREF
  __int64 v39; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v40[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v42; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v38 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         &v38);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v38 + 64LL))(v38, (char *)this + 24);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (_QWORD *)*((_QWORD *)this + 21);
  v10 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v10 != v9 )
  {
    do
    {
      if ( *v10 == v38 )
        break;
      ++v10;
    }
    while ( v10 != v9 );
    if ( v10 != v9 )
    {
      v11 = v10 + 1;
      v12 = (__int64 *)*((_QWORD *)this + 21);
      v13 = v12;
      if ( v10 + 1 != v9 )
      {
        do
        {
          v14 = 0LL;
          if ( v40 != v11 )
          {
            v14 = *v11;
            *v11 = 0LL;
          }
          v15 = *(v11 - 1);
          *(v11 - 1) = v14;
          if ( v15 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
          ++v11;
        }
        while ( v11 != v12 );
        v12 = (__int64 *)*((_QWORD *)this + 21);
        v13 = v12;
      }
      v16 = *(v12 - 1);
      if ( v16 )
      {
        *(v12 - 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        v13 = (__int64 *)*((_QWORD *)this + 21);
      }
      *((_QWORD *)this + 21) = v13 - 1;
    }
  }
  v17 = a4->lpVtbl;
  v39 = 0LL;
  v18 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v17->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v39);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v39 + 120LL))(v39, &v42);
  if ( v19 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
      (const char *)(unsigned int)v19);
    JUMPOUT(0x18002C457LL);
  }
  v20 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v22 = *((unsigned __int8 *)&v42 + i);
    v20 = 0x100000001B3LL * (v22 ^ v20);
  }
  v23 = *((_QWORD *)this + 14);
  v24 = (_QWORD *)*((_QWORD *)this + 12);
  v25 = v20 & *((_QWORD *)this + 17);
  v26 = 2 * v25;
  v27 = 2 * v25;
  v28 = *(_QWORD **)(v23 + 16 * v25);
  for ( j = v28; ; j = (_QWORD *)*j )
  {
    if ( v28 == v24 )
      v30 = (_QWORD *)*((_QWORD *)this + 12);
    else
      v30 = **(_QWORD ***)(v23 + 8 * v27 + 8);
    if ( j == v30 )
      goto LABEL_38;
    if ( *((_DWORD *)j + 4) == v42 )
      break;
  }
  v31 = j;
  v32 = j;
  while ( 1 )
  {
    v33 = v28 == v24 ? (_QWORD *)*((_QWORD *)this + 12) : **(_QWORD ***)(v23 + 8 * v26 + 8);
    if ( j == v33 || v42 != *((_DWORD *)j + 4) )
      break;
    j = (_QWORD *)*j;
  }
  if ( v31 == j )
  {
LABEL_38:
    v32 = (_QWORD *)*((_QWORD *)this + 12);
    j = v32;
  }
  v40[0] = v32;
  if ( v32 == (_QWORD *)*v24 && j == v24 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::clear((char *)this + 88);
  }
  else
  {
    while ( v32 != j )
    {
      v34 = v32;
      v32 = (_QWORD *)*v32;
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>>,void>(
        (_QWORD *)this + 11,
        v40,
        v34);
    }
  }
  v35 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
