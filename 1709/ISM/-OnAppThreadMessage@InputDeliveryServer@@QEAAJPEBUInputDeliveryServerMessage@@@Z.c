/*
 * XREFs of ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18007EC0C
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIPEBX0I@Z @ 0x1800815B0 (-OnItemMessage@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJIIPEBX0I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBI@Z @ 0x18007FC88 (--A-$unordered_map@IV-$ComPtr@VInputThread@@@WRL@Microsoft@@U-$hash@I@std@@U-$equal_to@I@5@V-$al.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18007FD94 (-erase@-$_Hash@V-$_Umap_traits@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_dele.c)
 *     ??$_Insert@AEAU?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x180080CB8 (--$_Insert@AEAU-$pair@$$CBUtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VI.c)
 *     ??$_Buynode@AEBUtagInputRoutingInfo@@V?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@std@@@?$_List_buy@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@1@PEAU21@0AEBUtagInputRoutingInfo@@$$QEAV?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@1@@Z @ 0x18008142C (--$_Buynode@AEBUtagInputRoutingInfo@@V-$unique_ptr@VInputAttemptedTarget@@U-$default_delete@VInp.c)
 *     ??0InputTarget@@IEAA@AEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x180081AD4 (--0InputTarget@@IEAA@AEBV-$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z.c)
 *     ??0InputAttemptedTarget@@QEAA@AEBV?$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x180081C38 (--0InputAttemptedTarget@@QEAA@AEBV-$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV-$ComPtr.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall InputDeliveryServer::OnAppThreadMessage(
        InputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2)
{
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r10
  _QWORD *i; // r8
  _QWORD *v15; // rax
  int v16; // edi
  __int64 v17; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // eax
  _BYTE v29[24]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v30; // [rsp+50h] [rbp-30h] BYREF
  __int128 v31; // [rsp+60h] [rbp-20h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  void (__fastcall ***v34)(_QWORD, __int64); // [rsp+B0h] [rbp+30h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+38h] BYREF

  v4 = *(_QWORD *)std::unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputThread>>::operator[](
                    (char *)this + 528,
                    (char *)a2 + 4);
  v35 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  switch ( *(_DWORD *)a2 )
  {
    case 0:
      v22 = operator new(0x48uLL);
      v34 = (void (__fastcall ***)(_QWORD, __int64))v22;
      InputTarget::InputTarget(v22, &v35, (char *)a2 + 8);
      *v22 = &InputTargetWithHostRegistration::`vftable';
      v23 = *((_QWORD *)this + 7);
      v22[8] = v23;
      if ( v23 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
      v34 = (void (__fastcall ***)(_QWORD, __int64))v22;
      v24 = **((_QWORD **)this + 59);
      v25 = std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<tagInputRoutingInfo const &,std::unique_ptr<InputAttemptedTarget>>(
              v23,
              v24,
              *(_QWORD *)(v24 + 8),
              (int)a2 + 8,
              (__int64)&v34);
      v26 = *((_QWORD *)this + 60);
      if ( v26 == 0x38E38E38E38E38DLL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 60) = v26 + 1;
      *(_QWORD *)(v24 + 8) = v25;
      **(_QWORD **)(v25 + 8) = v25;
      std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::_Insert<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>(
        (char *)this + 464,
        v29,
        **((_QWORD **)this + 59) + 16LL);
      v30 = *((_OWORD *)a2 + 1);
      v31 = *((_OWORD *)a2 + 2);
      v32 = *((_QWORD *)a2 + 6);
      v27 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 24LL))(
              *((_QWORD *)this + 7),
              &v30,
              *((unsigned int *)a2 + 15),
              *((unsigned int *)a2 + 16));
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1DB,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
          (const char *)(unsigned int)v27);
      v21 = v34;
      if ( !v34 )
        break;
LABEL_41:
      (**v34)(v21, 1LL);
      break;
    case 1:
      v34 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x58uLL);
      v16 = (_DWORD)a2 + 8;
      v34 = (void (__fastcall ***)(_QWORD, __int64))InputAttemptedTarget::InputAttemptedTarget(
                                                      (_DWORD)v34,
                                                      (int)this + 592,
                                                      *((_DWORD *)a2 + 14),
                                                      (unsigned int)&v35,
                                                      (__int64)a2 + 8);
      v17 = **((_QWORD **)this + 59);
      v19 = std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<tagInputRoutingInfo const &,std::unique_ptr<InputAttemptedTarget>>(
              v18,
              v17,
              *(_QWORD *)(v17 + 8),
              v16,
              (__int64)&v34);
      v20 = *((_QWORD *)this + 60);
      if ( v20 == 0x38E38E38E38E38DLL )
        std::_Xlength_error("list<T> too long");
      *((_QWORD *)this + 60) = v20 + 1;
      *(_QWORD *)(v17 + 8) = v19;
      **(_QWORD **)(v19 + 8) = v19;
      std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::_Insert<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>(
        (char *)this + 464,
        v29,
        **((_QWORD **)this + 59) + 16LL);
      v21 = v34;
      if ( !v34 )
        break;
      goto LABEL_41;
    case 2:
      v12 = *((unsigned int *)a2 + 3);
      v13 = *((_QWORD *)this + 61);
      for ( i = *(_QWORD **)(v13
                           + 16 * (*((_QWORD *)this + 64) & (v12 | ((unsigned __int64)*((unsigned int *)a2 + 2) << 32))));
            ;
            i = (_QWORD *)*i )
      {
        v15 = *(_QWORD *)(v13
                        + 16 * (*((_QWORD *)this + 64) & (v12 | ((unsigned __int64)*((unsigned int *)a2 + 2) << 32)))) == *((_QWORD *)this + 59)
            ? (_QWORD *)*((_QWORD *)this + 59)
            : **(_QWORD ***)(v13
                           + 16 * (*((_QWORD *)this + 64) & (v12 | ((unsigned __int64)*((unsigned int *)a2 + 2) << 32)))
                           + 8);
        if ( i == v15 )
          break;
        if ( *((_QWORD *)a2 + 1) == i[2] )
          goto LABEL_27;
      }
      i = (_QWORD *)*((_QWORD *)this + 59);
LABEL_27:
      if ( i == *((_QWORD **)this + 59) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1EE,
          (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
          (const char *)this + 464);
        __debugbreak();
      }
      std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::erase(
        (char *)this + 464,
        &v34);
      break;
    case 3:
      v6 = *((unsigned int *)a2 + 3);
      v7 = *((_QWORD *)this + 61);
      v8 = *(_QWORD **)(v7 + 16 * (*((_QWORD *)this + 64) & (v6 | ((unsigned __int64)*((unsigned int *)a2 + 2) << 32))));
      v9 = (_QWORD *)*((_QWORD *)this + 59);
      while ( 1 )
      {
        v10 = *(_QWORD **)(v7
                         + 16 * (*((_QWORD *)this + 64) & (v6 | ((unsigned __int64)*((unsigned int *)a2 + 2) << 32)))) == v9
            ? (_QWORD *)*((_QWORD *)this + 59)
            : **(_QWORD ***)(v7
                           + 16 * (*((_QWORD *)this + 64) & (v6 | ((unsigned __int64)*((unsigned int *)a2 + 2) << 32)))
                           + 8);
        if ( v8 == v10 )
          break;
        if ( *((_QWORD *)a2 + 1) == v8[2] )
          goto LABEL_16;
        v8 = (_QWORD *)*v8;
      }
      v8 = (_QWORD *)*((_QWORD *)this + 59);
LABEL_16:
      if ( v8 != v9 )
      {
        v30 = *((_OWORD *)a2 + 1);
        v31 = *((_OWORD *)a2 + 2);
        v32 = *((_QWORD *)a2 + 6);
        v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 32LL))(
                *((_QWORD *)this + 7),
                &v30,
                *((unsigned int *)a2 + 15),
                *((unsigned int *)a2 + 16));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1FA,
            (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
            (const char *)(unsigned int)v11);
      }
      break;
    default:
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x202,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        v5);
      __debugbreak();
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
