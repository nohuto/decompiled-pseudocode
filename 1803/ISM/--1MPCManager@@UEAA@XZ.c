/*
 * XREFs of ??1MPCManager@@UEAA@XZ @ 0x180053C04
 * Callers:
 *     ??_EMPCManager@@UEAAPEAXI@Z @ 0x180053BD0 (--_EMPCManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIMPCManagerClientProxy@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x180053A80 (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@VBamoPeer@Bamo@Microsoft@@Uerr_exceptio_ea_180053A80.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCManager::~MPCManager(MPCManager *this)
{
  void **v2; // rbx
  const char *v3; // r9
  __int64 v4; // rcx
  void (__fastcall ***v5)(_QWORD); // rax
  volatile signed __int32 *v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 *v9; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)this = &MPCManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoMPCManagerPrincipal::`vftable'{for `IMPCManagerPrincipal'};
  v2 = (void **)((char *)this + 64);
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>,std::less<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy> const,wil::com_ptr_t<IMPCManagerClientProxy,wil::err_exception_policy>>>,0>>::erase(
    (__int64 **)this + 8,
    &v9,
    **((__int64 ***)this + 8),
    *((__int64 **)this + 8));
  operator delete(*v2);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    (**v5)(v5);
  }
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v6 )
  {
    v7 = _InterlockedDecrement(v6 + 2);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        v3);
      JUMPOUT(0x180053CC5LL);
    }
    if ( !v7 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  }
}
