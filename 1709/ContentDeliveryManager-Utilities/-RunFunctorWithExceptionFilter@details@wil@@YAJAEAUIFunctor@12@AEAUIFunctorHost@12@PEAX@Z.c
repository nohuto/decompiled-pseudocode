/*
 * XREFs of ?RunFunctorWithExceptionFilter@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@PEAX@Z @ 0x1800026D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RunFunctorWithExceptionFilter(
        wil::details *this,
        struct wil::details::IFunctor *a2,
        struct wil::details::IFunctorHost *a3,
        void *a4)
{
  __int64 result; // rax

  try
  {
    result = (**(__int64 (__fastcall ***)(struct wil::details::IFunctor *, wil::details *))a2)(a2, this);
  }
  catch ( ... )
  {
    return (*(unsigned int (__fastcall **)(struct wil::details::IFunctor *, struct wil::details::IFunctorHost *))(*(_QWORD *)a2 + 8LL))(
             a2,
             a3);
  }
  return result;
}
