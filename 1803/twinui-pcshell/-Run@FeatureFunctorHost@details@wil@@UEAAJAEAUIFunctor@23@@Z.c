/*
 * XREFs of ?Run@FeatureFunctorHost@details@wil@@UEAAJAEAUIFunctor@23@@Z @ 0x180089C00
 * Callers:
 *     ?RunFunctorWithExceptionFilter@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@PEAX@Z @ 0x180089BB0 (-RunFunctorWithExceptionFilter@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::FeatureFunctorHost::Run(
        wil::details::FeatureFunctorHost *this,
        __int64 (__fastcall ***a2)(struct wil::details::IFunctor *))
{
  __int64 (__fastcall *v2)(struct wil::details::IFunctor *); // rax

  v2 = **a2;
  if ( (char *)v2 == (char *)wil::details::functor_wrapper_void__lambda_2ecfb1edd99be80c777c6c32d24effa2______ptr64_::Run )
    return wil::details::functor_wrapper_void__lambda_2ecfb1edd99be80c777c6c32d24effa2______ptr64_::Run(a2);
  if ( (char *)v2 == (char *)wil::details::functor_wrapper_void__lambda_053d61a7963efcca289c130717ec5f8b______ptr64_::Run )
    return wil::details::functor_wrapper_void__lambda_053d61a7963efcca289c130717ec5f8b______ptr64_::Run(a2);
  if ( (char *)v2 == (char *)wil::details::functor_wrapper_void__lambda_576aa915576816ac157655134c5675a7______ptr64_::Run )
    return wil::details::functor_wrapper_void__lambda_576aa915576816ac157655134c5675a7______ptr64_::Run(a2);
  return v2((struct wil::details::IFunctor *)a2);
}
