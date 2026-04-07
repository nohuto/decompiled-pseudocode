/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800326E8
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180005FA4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180025418 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x180032598 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180033FD8 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180070084 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800701C0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__ea_1800701C0.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x1800316A0 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x180049154 (atexit.c)
 *     _Init_thread_footer @ 0x180049178 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800491E4 (_Init_thread_header.c)
 */

struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_1800CA264 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800CA264);
    if ( dword_1800CA264 == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_1800CA264);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_1800CA000;
}
