/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x1800368F8
 * Callers:
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x180017F28 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180032C08 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x18006943C (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180069570 (wistd--_Func_impl_wistd--_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__ea_180069570.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x18003E504 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x180045494 (atexit.c)
 *     _Init_thread_footer @ 0x180045628 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180045688 (_Init_thread_header.c)
 */

struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_1800C1A14 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800C1A14);
    if ( dword_1800C1A14 == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_1800C1A14);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_1800C1A20;
}
