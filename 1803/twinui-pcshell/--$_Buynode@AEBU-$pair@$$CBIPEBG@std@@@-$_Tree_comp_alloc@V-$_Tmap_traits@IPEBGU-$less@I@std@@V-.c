/*
 * XREFs of ??$_Buynode@AEBU?$pair@$$CBIPEBG@std@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEBU?$pair@$$CBIPEBG@1@@Z @ 0x18024614C
 * Callers:
 *     ??0?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBIPEBG@std@@@1@@Z @ 0x1802470A0 (--0-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V-$initializer_li.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$com_ptr_t@UIApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@2@@std@@PEAX@2@XZ @ 0x18023849C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$com_ptr_t@UIApplicationView@@Uerr_exception_pol.c)
 */

char *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Buynode<std::pair<unsigned int const,unsigned short const *> const &>(
        _QWORD *a1,
        _OWORD *a2)
{
  char *result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>,std::less<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>>,std::allocator<std::pair<wil::com_ptr_t<IApplicationView,wil::err_exception_policy> const,wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    *((_OWORD *)result + 2) = *a2;
  }
  catch ( ... )
  {
    std::_Deallocate(result, 1uLL, 0x30uLL);
    throw;
  }
  return result;
}
