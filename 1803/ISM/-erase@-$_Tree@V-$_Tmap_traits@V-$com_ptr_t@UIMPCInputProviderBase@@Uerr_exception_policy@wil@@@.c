/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA_KAEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180055878
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@std@@@std@@@2@0@Z @ 0x180056E9C (-erase@-$_Tree@V-$_Tmap_traits@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception__ea_180056E9C.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
        __int64 ***a1,
        unsigned __int64 *a2)
{
  __int64 **v2; // r10
  __int64 **v5; // r9
  __int64 *v6; // rax
  __int64 *v7; // r8
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int64 **v10; // rdx
  __int64 *j; // rax
  __int64 v12; // rbx
  __int64 **v13; // rcx
  __int64 *v14; // rdx
  __int64 *i; // rcx
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v5 = *a1;
  v6 = (*a1)[1];
  v7 = v6;
  if ( !*((_BYTE *)v6 + 25) )
  {
    v8 = *a2;
    do
    {
      if ( v7[4] >= v8 )
      {
        if ( *((_BYTE *)v5 + 25) && v8 < v7[4] )
          v5 = (__int64 **)v7;
        v2 = (__int64 **)v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( !*((_BYTE *)v5 + 25) )
    v6 = *v5;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v9 = v6[4];
    v10 = (__int64 **)v6;
    if ( *a2 >= v9 )
      v6 = (__int64 *)v6[2];
    else
      v6 = (__int64 *)*v6;
    if ( *a2 >= v9 )
      v10 = v5;
    v5 = v10;
  }
  j = (__int64 *)v2;
  v12 = 0LL;
  if ( v2 != v5 )
  {
    do
    {
      ++v12;
      if ( !*((_BYTE *)j + 25) )
      {
        v13 = (__int64 **)j[2];
        if ( *((_BYTE *)v13 + 25) )
        {
          for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
            j = i;
          j = i;
        }
        else
        {
          v14 = *v13;
          for ( j = (__int64 *)j[2]; !*((_BYTE *)v14 + 25); v14 = (__int64 *)*v14 )
            j = v14;
        }
      }
    }
    while ( j != (__int64 *)v5 );
  }
  std::_Tree<std::_Tmap_traits<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::erase(
    a1,
    &v17,
    v2);
  return v12;
}
