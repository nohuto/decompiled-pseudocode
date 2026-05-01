/*
 * XREFs of ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@V?$allocator@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@V?$com_ptr_t@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@XZ @ 0x18015E3B8
 * Callers:
 *     ?AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIThumbnailInteropDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x18015DAB4 (-AppViewDataSource_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewIconLo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180194A2C (--2@YAPEAX_K@Z.c)
 */

_QWORD *std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Buyheadnode()
{
  _QWORD *result; // rax
  _QWORD *v1; // rcx

  result = operator new(0x30uLL);
  try
  {
    if ( result )
      *result = result;
    if ( result != (_QWORD *)-8LL )
      result[1] = result;
    v1 = result + 2;
    if ( result != (_QWORD *)-16LL )
      *v1 = result;
  }
  catch ( ... )
  {
    std::_Tree_comp_alloc<std::_Tmap_traits<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>,std::less<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem *>,std::allocator<std::pair<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem * const,wil::com_ptr_t<WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItem,wil::err_exception_policy>>>,0>>::_Freenode0(
      (__int64)v1,
      (char *)result);
    throw;
  }
  *((_WORD *)result + 12) = 257;
  return result;
}
