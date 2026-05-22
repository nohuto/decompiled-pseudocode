/*
 * XREFs of ?DeliverInputToTarget@Win32kInterop@@UEAAJPEAUInputInfo@@PEAUIInputTarget@@@Z @ 0x180014DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z @ 0x1800151E0 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@PEAX@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180016820 (--$_Insert@AEAU-$pair@$$CBKV-$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@V-$_List_uncheck.c)
 *     ??$_Buynode@AEBKPEAVPointerInfoAdapter@@@?$_List_buy@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VPointerInfoAdapter@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBK$$QEAPEAVPointerInfoAdapter@@@Z @ 0x180016D2C (--$_Buynode@AEBKPEAVPointerInfoAdapter@@@-$_List_buy@U-$pair@$$CBKV-$ComPtr@VPointerInfoAdapter@.c)
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180061518 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Win32kInterop::DeliverInputToTarget(
        Win32kInterop *this,
        struct InputInfo *a2,
        struct IInputTarget *a3)
{
  void *v7; // rdx
  int v8; // r13d
  int v9; // r9d
  __int64 v10; // rdx
  unsigned __int64 i; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 *v14; // rax
  __int64 v15; // r8
  __int64 *v16; // r10
  __int64 *v17; // rcx
  PointerInfoAdapter *v18; // rax
  int v19; // ecx
  bool v20; // r8
  PointerInfoAdapter *v21; // rdi
  PointerInfoAdapter *v22; // rax
  __int64 v23; // rdi
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // edi
  __int64 v30; // rcx
  int v31[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v32; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v34; // [rsp+88h] [rbp+38h] BYREF
  __int64 v35; // [rsp+98h] [rbp+48h] BYREF

  v32 = -2LL;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    if ( a3 )
      return (*(__int64 (__fastcall **)(struct IInputTarget *))(*(_QWORD *)a3 + 24LL))(a3);
    return 0LL;
  }
  v35 = 0LL;
  if ( !a3 )
  {
    v7 = 0LL;
    goto LABEL_30;
  }
  if ( (**(int (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
         a3,
         &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631,
         &v35) >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 64LL))(v35);
    if ( v8 )
    {
      v9 = *((_DWORD *)a2 + 1);
      v34 = v9;
      v10 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v34 + i) ^ (unsigned __int64)v10);
      v12 = v10 & *((_QWORD *)this + 24);
      v13 = *((_QWORD *)this + 21);
      v14 = *(__int64 **)(v13 + 16 * v12);
      v15 = 2 * v12;
      v16 = v14;
      while ( 1 )
      {
        v17 = v16 == *((__int64 **)this + 19) ? (__int64 *)*((_QWORD *)this + 19) : **(__int64 ***)(v13 + 8 * v15 + 8);
        if ( v14 == v17 )
          break;
        if ( *((_DWORD *)v14 + 4) == v9 )
          goto LABEL_18;
        v14 = (__int64 *)*v14;
      }
      v14 = (__int64 *)*((_QWORD *)this + 19);
LABEL_18:
      if ( v14 == *((__int64 **)this + 19) )
      {
        v18 = (PointerInfoAdapter *)malloc(0x60uLL);
        v21 = v18;
        if ( v18 )
          memset_0(v18, 0, 0x60uLL);
        *(_QWORD *)v31 = v21;
        if ( v21 )
          v22 = PointerInfoAdapter::PointerInfoAdapter(
                  v21,
                  (struct IPointerInfoAdapterClient *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 8) >> 64)),
                  v20);
        else
          v22 = 0LL;
        *(_QWORD *)v31 = v22;
        v23 = **((_QWORD **)this + 19);
        v24 = *(__int64 **)(v23 + 8);
        v25 = std::_List_buy<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>::_Buynode<unsigned long const &,PointerInfoAdapter *>(
                v19,
                v23,
                (_DWORD)v24,
                (unsigned int)&v34,
                (__int64)v31);
        v26 = *((_QWORD *)this + 20);
        if ( v26 == 0x7FFFFFFFFFFFFFELL )
          std::_Xlength_error("list<T> too long");
        *((_QWORD *)this + 20) = v26 + 1;
        *(_QWORD *)(v23 + 8) = v25;
        *v24 = v25;
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<PointerInfoAdapter>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>,0>>::_Insert<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<PointerInfoAdapter>>>>>>(
          (char *)this + 144,
          v31,
          **((_QWORD **)this + 19) + 16LL);
        v14 = *(__int64 **)v31;
      }
      *((_DWORD *)this + 491) = v8;
      *((_QWORD *)this + 246) = *((_QWORD *)a2 + 4);
      v27 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v14[3] + 24LL))(v14[3], a2);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x56D,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
          (const char *)(unsigned int)v27);
        JUMPOUT(0x1800150BELL);
      }
      *((_DWORD *)this + 491) = 0;
      *((_QWORD *)this + 246) = 0LL;
      goto LABEL_31;
    }
    v7 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 56LL))(v35);
LABEL_30:
    Win32kInterop::RoutePointerFrame(a2, v7);
LABEL_31:
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    return 0LL;
  }
  v29 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a2);
  v30 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  return v29;
}
