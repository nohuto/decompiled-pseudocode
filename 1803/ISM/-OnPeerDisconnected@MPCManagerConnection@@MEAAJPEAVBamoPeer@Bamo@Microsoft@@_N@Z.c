/*
 * XREFs of ?OnPeerDisconnected@MPCManagerConnection@@MEAAJPEAVBamoPeer@Bamo@Microsoft@@_N@Z @ 0x180058B10
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x180053A80 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exceptio_ea_180053A80.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerConnection::OnPeerDisconnected(
        MPCManagerConnection *this,
        struct Microsoft::Bamo::BamoPeer *a2)
{
  __int64 v2; // rdi
  __int64 *v4; // r8
  __int64 *v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 *j; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 i; // rdx
  void (__fastcall ***v14)(_QWORD); // rax
  __int64 *v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 19);
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)((*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoPeer *))(*(_QWORD *)a2 + 8LL))(a2)
                                                    + 8));
  v4 = *(__int64 **)(v2 + 64);
  v5 = v4;
  v6 = v4[1];
  v7 = v6;
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( *(_QWORD *)(v7 + 32) >= (unsigned __int64)a2 )
    {
      if ( *((_BYTE *)v5 + 25) && (unsigned __int64)a2 < *(_QWORD *)(v7 + 32) )
        v5 = (__int64 *)v7;
      v4 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
    else
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  while ( !*(_BYTE *)(v6 + 25) )
  {
    v8 = *(_QWORD *)(v6 + 32);
    v9 = v6;
    if ( (unsigned __int64)a2 >= v8 )
      v6 = *(_QWORD *)(v6 + 16);
    else
      v6 = *(_QWORD *)v6;
    if ( (unsigned __int64)a2 >= v8 )
      v9 = (__int64)v5;
    v5 = (__int64 *)v9;
  }
  j = v4;
  while ( j != v5 )
  {
    if ( !*((_BYTE *)j + 25) )
    {
      v11 = j[2];
      if ( *(_BYTE *)(v11 + 25) )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(__int64 **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (__int64 *)i;
        j = (__int64 *)i;
      }
      else
      {
        v12 = *(_QWORD *)v11;
        for ( j = (__int64 *)j[2]; !*(_BYTE *)(v12 + 25); v12 = *(_QWORD *)v12 )
          j = (__int64 *)v12;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::erase(
    (__int64 **)(v2 + 64),
    &v16,
    v4,
    v5);
  if ( a2 )
  {
    v14 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoPeer *))(*(_QWORD *)a2 + 8LL))(a2);
    (**v14)(v14);
  }
  return 0LL;
}
