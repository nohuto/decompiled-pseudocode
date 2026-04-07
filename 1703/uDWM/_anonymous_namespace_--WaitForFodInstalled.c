/*
 * XREFs of _anonymous_namespace_::WaitForFodInstalled @ 0x18007499C
 * Callers:
 *     ?EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ @ 0x18001036C (-EnsureHolographicDisplay@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180074AC4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolWork@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_WORK@@@Z @ 0x180074C54 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_WORK@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThreadP.c)
 */

void anonymous_namespace_::WaitForFodInstalled()
{
  PTP_WORK ThreadpoolWork; // rax
  __int64 v1; // rcx
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !pwk )
  {
    ThreadpoolWork = CreateThreadpoolWork((PTP_WORK_CALLBACK)anonymous_namespace_::FodWaiter, 0LL, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_WORK *,void (*)(_TP_WORK *),&public: static void wil::details::DestroyThreadPoolWork<0>::Destroy(_TP_WORK *),wistd::integral_constant<unsigned __int64,0>,_TP_WORK *,0,std::nullptr_t>>::reset(
      v1,
      ThreadpoolWork);
    if ( !pwk )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x77,
        (unsigned int)"windows\\dwm\\udwm\\analogcompositormanager.cpp",
        v2);
      __debugbreak();
    }
    SubmitThreadpoolWork(pwk);
  }
}
