/*
 * XREFs of ?RunFunctorWithExceptionFilter@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@PEAX@Z @ 0x180089BB0
 * Callers:
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180089B74 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 * Callees:
 *     ?Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z @ 0x180089C00 (-Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunFunctorWithExceptionFilter(
        wil::details *this,
        __int64 (__fastcall ***a2)(wil::details::FeatureFunctorHost *__hidden this, struct wil::details::IFunctor *),
        struct wil::details::IFunctorHost *a3,
        void *a4)
{
  __int64 (__fastcall *v4)(wil::details::FeatureFunctorHost *__hidden, struct wil::details::IFunctor *); // rax
  __int64 result; // rax

  try
  {
    v4 = **a2;
    if ( v4 == wil::details::FeatureFunctorHost::Run )
      result = wil::details::FeatureFunctorHost::Run((wil::details::FeatureFunctorHost *)a2, this);
    else
      result = v4((wil::details::FeatureFunctorHost *)a2, this);
  }
  catch ( ... )
  {
    return (unsigned int)(*a2)[1]((struct wil::details::IFunctor *)a2, a3);
  }
  return result;
}
