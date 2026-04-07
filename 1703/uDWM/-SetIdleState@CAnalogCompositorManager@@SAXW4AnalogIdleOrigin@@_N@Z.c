/*
 * XREFs of ?SetIdleState@CAnalogCompositorManager@@SAXW4AnalogIdleOrigin@@_N@Z @ 0x1800102E4
 * Callers:
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_83c7ca59d1c53b82e1b987045eea254d__0__wistd::details::function_allocator_wistd::_Func_class_void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____void_unsigned_long_const_&___ptr64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18000E130 (wistd--_Func_impl_wistd--_Callable_obj__lambda_83c7ca59d1c53b82e1b987045eea254d__0__wistd--detai.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x1800302A0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     _lambda_855ca075e0ac3c7a60546b478bdcde3e_::_lambda_invoker_cdecl_ @ 0x1800728D0 (_lambda_855ca075e0ac3c7a60546b478bdcde3e_--_lambda_invoker_cdecl_.c)
 *     ?OnUserPresenceChanged@CAnalogCompositorManager@@AEAAJPEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Z @ 0x180073D70 (-OnUserPresenceChanged@CAnalogCompositorManager@@AEAAJPEAUIHolographicDisplayInternal@Internal@H.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180012FF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18001341C (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x1800231E4 (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnalogCompositorManager::SetIdleState(char a1, char a2)
{
  struct CAnalogCompositorManager *Instance; // rdi
  int v5; // edx
  __int64 v6; // rcx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+40h] [rbp+18h] BYREF

  Instance = CAnalogCompositorManager::GetInstance();
  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 1 << a1;
  if ( a2 )
    *((_DWORD *)Instance + 42) |= v5;
  else
    *((_DWORD *)Instance + 42) &= ~v5;
  v6 = *((_QWORD *)Instance + 13);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 64LL))(v6, *((_DWORD *)Instance + 42) != 0 ? 8 : 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 21) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21));
  }
  else if ( !*((_DWORD *)Instance + 42) && *((_DWORD *)Instance + 40) )
  {
    CDesktopManager::ModeChangeImpl(CDesktopManager::s_pDesktopManagerInstance);
  }
  return CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
}
