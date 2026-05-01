/*
 * XREFs of ??$_Try_emplace@AEBQEAUHWND__@@$$V@?$map@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHWND__@@@Z @ 0x1802392B4
 * Callers:
 *     ?SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU?$IVectorView@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@PEAPEAU2345@@Z @ 0x18023A640 (-SortItems@AppViewSwitchItemZOrderSort@@UEAAJPEAU-$IVectorView@PEAUISwitchItem@Multitasking@Comp.c)
 * Callees:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUHWND__@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUHWND__@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180238CE4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUHWND__@@@2@V-$tuple@$$V@2@@-$_Tree_co.c)
 *     ??$_Insert_hint@AEAU?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUHWND__@@@std@@V?$allocator@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@1@PEAU?$_Tree_node@U?$pair@QEAUHWND__@@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180238EE4 (--$_Insert_hint@AEAU-$pair@QEAUHWND__@@V-$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@In.c)
 */

unsigned __int64 __fastcall std::map<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Try_emplace<HWND__ * const &,>(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // r10
  char *v10; // rax
  unsigned __int64 *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = a2;
  v6 = *a1;
  v7 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v7 + 25) )
    goto LABEL_12;
  a2 = *a3;
  do
  {
    v8 = *(_QWORD *)(v7 + 32);
    v9 = v7;
    if ( v8 >= a2 )
      v7 = *(_QWORD *)v7;
    else
      v7 = *(_QWORD *)(v7 + 16);
    if ( v8 >= a2 )
      v6 = v9;
  }
  while ( !*(_BYTE *)(v7 + 25) );
  if ( v6 == v3 || a2 < *(_QWORD *)(v6 + 32) )
  {
LABEL_12:
    v12 = a3;
    v10 = std::_Tree_comp_alloc<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<HWND__ * const &>,std::tuple<>>(
            a1,
            a2,
            &v12);
    std::_Tree<std::_Tmap_traits<HWND__ *,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>>,0>>::_Insert_hint<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>> &,std::_Tree_node<std::pair<HWND__ * const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>,void *> *>(
      a1,
      (__int64 *)&v12,
      v6,
      (unsigned __int64 *)v10 + 4,
      (__int64)v10);
    *(_QWORD *)v4 = v12;
    *(_BYTE *)(v4 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v4 = v6;
    *(_BYTE *)(v4 + 8) = 0;
  }
  return v4;
}
