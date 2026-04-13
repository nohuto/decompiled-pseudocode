/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x18004502C
 * Callers:
 *     ?Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x1800479E0 (-Activate@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_I.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  void *retaddr; // [rsp+0h] [rbp+0h]

  if ( wil::details::g_pfnRunFunctorWithExceptionFilter )
    return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
  else
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
}
