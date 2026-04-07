/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C
 * Callers:
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x18000FB28 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z @ 0x1800102E4 (-SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     _lambda_855ca075e0ac3c7a60546b478bdcde3e_::_lambda_invoker_cdecl_ @ 0x1800728D0 (_lambda_855ca075e0ac3c7a60546b478bdcde3e_--_lambda_invoker_cdecl_.c)
 *     ?GetHMDStatus@CAnalogCompositorManager@@SAJPEAUMILCMD_DWM_REDIRECTION_GETHMDSTATUS@@@Z @ 0x1800736B4 (-GetHMDStatus@CAnalogCompositorManager@@SAJPEAUMILCMD_DWM_REDIRECTION_GETHMDSTATUS@@@Z.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800745E8 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__wistd::details::function_allocator_wistd::_Func_class_void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180074A40 (wistd--_Func_impl_wistd--_Callable_obj__lambda_1fe009015b5481886de644cd00cd9360__0__ea_180074A40.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x18004D034 (atexit.c)
 */

struct CAnalogCompositorManager *__fastcall CAnalogCompositorManager::GetInstance(CAnalogCompositorManager *a1)
{
  if ( (dword_1800C0EA4 & 1) == 0 )
  {
    dword_1800C0EA4 |= 1u;
    CAnalogCompositorManager::CAnalogCompositorManager(a1);
    atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
  }
  return (struct CAnalogCompositorManager *)&qword_1800C0EB0;
}
