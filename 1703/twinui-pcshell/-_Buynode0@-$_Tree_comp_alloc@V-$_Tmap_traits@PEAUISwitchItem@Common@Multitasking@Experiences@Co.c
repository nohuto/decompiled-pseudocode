/*
 * XREFs of ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18015E70C
 * Callers:
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@U?$less@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@23@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18015E494 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAV-$ComPtr@UIApplicationView@@@WRL@Micro.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180160344 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAUISwitchItem@Common@Multitasking@Exper.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buynode0(
        _QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx

  result = operator new(0x30uLL);
  try
  {
    if ( result )
      *result = *a1;
    if ( result != (_QWORD *)-8LL )
      result[1] = *a1;
    v3 = result + 2;
    if ( result != (_QWORD *)-16LL )
      *v3 = *a1;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Freenode0(
      (__int64)v3,
      (char *)result);
    throw;
  }
  return result;
}
