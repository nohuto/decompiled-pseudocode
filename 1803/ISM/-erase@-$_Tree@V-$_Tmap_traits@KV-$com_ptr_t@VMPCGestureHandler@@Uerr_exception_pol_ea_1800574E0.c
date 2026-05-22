/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@0@Z @ 0x1800574E0
 * Callers:
 *     ?ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z @ 0x180055424 (-ReturnGestureHandlerForWorkspaceToPool@MPCGestureHandlerManager@@AEAAXK@Z.c)
 *     ??1?$map@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@@std@@QEAA@XZ @ 0x180057600 (--1-$map@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U-$less@K@std@@V-$al.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x180057664 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180056FD4 (-_Erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wi.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180057038 (-erase@-$_Tree@V-$_Tmap_traits@KV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 *v12; // r8
  __int64 **v13; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 *v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == (__int64 *)**a1 && a4 == v8 )
  {
    v9 = (__int64 *)v8[1];
    v10 = v9;
    if ( !*((_BYTE *)v9 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Erase(
          (__int64)a1,
          (_QWORD *)v10[2]);
        v10 = (__int64 *)*v10;
        v11 = v9[5];
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        operator delete(v9);
        v9 = v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
      v8 = *a1;
    }
    v8[1] = (__int64)v8;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    a1[1] = 0LL;
    *a2 = (__int64 *)**a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v12 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v13 = (__int64 **)v5[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          v5 = (__int64 *)v5[2];
          for ( j = *v13; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v5 = j;
        }
      }
      std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
        a1,
        &v17,
        v12);
    }
    *a2 = v5;
  }
  return a2;
}
