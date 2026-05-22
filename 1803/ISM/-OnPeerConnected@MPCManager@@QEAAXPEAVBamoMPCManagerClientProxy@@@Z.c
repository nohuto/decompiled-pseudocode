/*
 * XREFs of ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x1800524A0
 * Callers:
 *     ?SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180058C50 (-SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18004D598 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180052CD8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$com_ptr_t@VBamoPeer@Bamo@Microsoft@@.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@1@AEAU?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@PEAX@1@@Z @ 0x180052D18 (--$_Insert_hint@AEAU-$pair@$$CBV-$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCManager::OnPeerConnected(MPCManager *this, struct BamoMPCManagerClientProxy *a2)
{
  __int64 *v3; // r14
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // r9
  unsigned __int64 v10; // r8
  void *v11; // rax
  __int64 v12; // rsi
  void (__fastcall ***v13)(_QWORD); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  int v21; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v25; // [rsp+70h] [rbp+18h]

  v3 = (__int64 *)((char *)a2 + 8);
  v4 = ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL);
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL);
  v23 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 8LL))(v5)
                                                    + 8));
    v5 = v23;
  }
  v6 = (__int64 *)*((_QWORD *)this + 8);
  v7 = (__int64 *)v6[1];
  v8 = v6;
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_12;
  do
  {
    v9 = v7;
    v10 = v7[4];
    if ( v10 >= v5 )
      v7 = (__int64 *)*v7;
    else
      v7 = (__int64 *)v7[2];
    if ( v10 >= v5 )
      v8 = v9;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v8 == v6 || v5 < v8[4] )
  {
LABEL_12:
    v24 = &v23;
    v11 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> &&>,std::tuple<>>(
                    (char *)this + 64,
                    v6,
                    &v24);
    std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::_Insert_hint<std::pair<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>> &,std::_Tree_node<std::pair<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>,void *> *>(
      (_DWORD)this + 64,
      v11);
    v8 = v25;
  }
  v12 = v8[5];
  v8[5] = v4;
  if ( v4 )
    (*(void (__fastcall **)(unsigned __int64, __int64 *, unsigned __int64, __int64 *))(*(_QWORD *)v4 + 8LL))(
      v4,
      v6,
      v10,
      v9);
  if ( v12 )
    (*(void (__fastcall **)(__int64, __int64 *, unsigned __int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, v6, v10, v9);
  if ( v23 )
  {
    v13 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64, __int64 *, unsigned __int64, __int64 *))(*(_QWORD *)v23 + 8LL))(
                                           v23,
                                           v6,
                                           v10,
                                           v9);
    (**v13)(v13);
  }
  MPCHolographicInputManager::GetInstance();
  if ( *(_QWORD *)(v14 + 2000) )
  {
    MPCHolographicInputManager::GetInstance();
    v16 = **(_QWORD **)(v15 + 2224);
    MPCHolographicInputManager::GetInstance();
    v18 = **(_QWORD **)(v17 + 2224);
    v19 = *v3;
    LODWORD(v16) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 112LL))(v16);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 96LL))(v18);
    v21 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v19 + 40))(v3, v20, (unsigned int)v16);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x63,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v21);
  }
}
