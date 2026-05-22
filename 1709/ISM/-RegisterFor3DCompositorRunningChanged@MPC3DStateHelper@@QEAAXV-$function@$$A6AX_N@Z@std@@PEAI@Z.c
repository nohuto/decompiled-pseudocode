/*
 * XREFs of ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007D08
 * Callers:
 *     ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x18006677C (-RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z.c)
 *     ?Initialize@MPCHeadUpdateListener@@AEAAXXZ @ 0x180069334 (-Initialize@MPCHeadUpdateListener@@AEAAXXZ.c)
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x1800A8B3C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??$?4AEAV?$function@$$A6AX_N@Z@std@@X@?$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z @ 0x18000886C (--$-4AEAV-$function@$$A6AX_N@Z@std@@X@-$function@$$A6AX_N@Z@std@@QEAAAEAV01@AEAV01@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180008CF8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008D3C (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(PSRWLOCK SRWLock, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rdx
  _QWORD *Ptr; // rax
  __int64 *v8; // rcx
  _DWORD *v9; // rbx
  void *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h]
  PSRWLOCK v15; // [rsp+80h] [rbp+18h]

  v14 = a2;
  AcquireSRWLockExclusive(SRWLock);
  v15 = SRWLock;
  *a3 = LODWORD(SRWLock[2].Ptr)++;
  Ptr = SRWLock[4].Ptr;
  v8 = (__int64 *)Ptr[1];
  v9 = Ptr;
  if ( !*((_BYTE *)v8 + 25) )
  {
    v6 = (unsigned int)*a3;
    do
    {
      if ( *((_DWORD *)v8 + 8) >= (unsigned int)v6 )
      {
        v9 = v8;
        v8 = (__int64 *)*v8;
      }
      else
      {
        v8 = (__int64 *)v8[2];
      }
    }
    while ( !*((_BYTE *)v8 + 25) );
  }
  if ( v9 == (_DWORD *)Ptr || *a3 < v9[8] )
  {
    v13 = a3;
    v10 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                    &SRWLock[4],
                    v6,
                    &v13);
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      (_DWORD)SRWLock + 32,
      v10);
    v9 = v13;
  }
  std::function<void (bool)>::operator=<std::function<void (bool)> &,void>(v9 + 10, a2);
  ReleaseSRWLockExclusive(SRWLock);
  v12 = *(_QWORD *)(a2 + 56);
  if ( v12 )
  {
    LOBYTE(v11) = v12 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 32LL))(v12, v11);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
}
