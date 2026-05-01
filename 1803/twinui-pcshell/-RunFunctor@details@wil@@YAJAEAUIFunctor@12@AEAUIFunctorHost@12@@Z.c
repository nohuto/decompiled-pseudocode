/*
 * XREFs of ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180089B74
 * Callers:
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800227EC (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@W4PositionerOptions@@PEAPEAUI.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x180062350 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180076730 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     wil::details::RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64_ @ 0x180145538 (wil--details--RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64_.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::RunFunctor(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3)
{
  struct wil::details::IFunctorHost *retaddr; // [rsp+0h] [rbp+0h]

  if ( !wil::details::g_pfnRunFunctorWithExceptionFilter )
    return (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *, struct wil::details::IFunctorHost *))a2)(
             a2,
             this,
             a3);
  if ( (char *)wil::details::g_pfnRunFunctorWithExceptionFilter == (char *)wil::details::RunFunctorWithExceptionFilter )
    return wil::details::RunFunctorWithExceptionFilter(this, a2, retaddr, a2);
  return wil::details::g_pfnRunFunctorWithExceptionFilter(this, a2, retaddr);
}
