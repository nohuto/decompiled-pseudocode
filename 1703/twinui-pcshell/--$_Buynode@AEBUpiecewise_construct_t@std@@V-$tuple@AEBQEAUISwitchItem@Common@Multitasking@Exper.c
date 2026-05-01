/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180160344
 * Callers:
 *     ?InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@IEAAXPEAUISwitchItem@23456@@Z @ 0x180160E8C (-InternalAddSwitchItem@SwitchItemDataSourceBase@Common@Multitasking@Experiences@ComposableShell@.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18015E70C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@Co.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const &>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD **a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // rcx

  result = std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buynode0(a1);
  *((_WORD *)result + 12) = 0;
  try
  {
    if ( result != (_QWORD *)-32LL )
    {
      v5 = *a3;
      result[4] = **a3;
      result[5] = 0LL;
    }
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Freenode0(
      (__int64)v5,
      (char *)result);
    throw;
  }
  return result;
}
