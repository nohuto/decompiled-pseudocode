/*
 * XREFs of ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180055424
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x18005569C (--$emplace_back@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     ??A?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBK@Z @ 0x180055A08 (--A-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x1800574E0 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_pol_ea_1800574E0.c)
 */

void __fastcall MPCGestureHandlerManager::ReturnGestureHandlerForWorkspaceToPool(
        MPCGestureHandlerManager *this,
        unsigned int a2)
{
  char *v2; // rbx
  __int64 *v4; // rax
  __int64 *v5; // r9
  __int64 *v6; // r8
  const char *v7; // r9
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // r9
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 *j; // rax
  __int64 **v14; // rcx
  __int64 *v15; // rdx
  __int64 *i; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v18; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v19; // [rsp+38h] [rbp+10h]

  v19 = a2;
  v2 = (char *)this + 8;
  v4 = (__int64 *)*((_QWORD *)this + 1);
  v5 = v4;
  v6 = (__int64 *)v4[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_DWORD *)v6 + 8) >= a2 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( v5 == v4 || a2 < *((_DWORD *)v5 + 8) )
    v5 = (__int64 *)*((_QWORD *)this + 1);
  if ( v5 == v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      (const char *)v5);
    __debugbreak();
  }
  if ( (*(_DWORD *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)this + 8)
                  + 168LL) & 0xFFFFFF7F) != 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandlermanager.cpp",
      v7);
    __debugbreak();
  }
  *(_DWORD *)(*(_QWORD *)std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)v2)
            + 928LL) = 0;
  v8 = std::map<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[]((int)v2);
  std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
    (char *)this + 40,
    v8);
  v9 = *(__int64 **)v2;
  v10 = *(__int64 **)v2;
  v11 = *(__int64 **)(*(_QWORD *)v2 + 8LL);
  v12 = v11;
  while ( !*((_BYTE *)v12 + 25) )
  {
    if ( *((_DWORD *)v12 + 8) >= v19 )
    {
      if ( *((_BYTE *)v10 + 25) && v19 < *((_DWORD *)v12 + 8) )
        v10 = v12;
      v9 = v12;
      v12 = (__int64 *)*v12;
    }
    else
    {
      v12 = (__int64 *)v12[2];
    }
  }
  if ( !*((_BYTE *)v10 + 25) )
    v11 = (__int64 *)*v10;
  while ( !*((_BYTE *)v11 + 25) )
  {
    if ( v19 >= *((_DWORD *)v11 + 8) )
    {
      v11 = (__int64 *)v11[2];
    }
    else
    {
      v10 = v11;
      v11 = (__int64 *)*v11;
    }
  }
  j = v9;
  while ( j != v10 )
  {
    if ( !*((_BYTE *)j + 25) )
    {
      v14 = (__int64 **)j[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v15 = *v14;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v15 + 25); v15 = (__int64 *)*v15 )
          j = v15;
      }
    }
  }
  std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
    v2,
    &v18);
}
