/*
 * XREFs of _lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_ @ 0x1801BF110
 * Callers:
 *     <none>
 * Callees:
 *     ??_ECompositorTracing@@UEAAPEAXI@Z @ 0x1801BFAD0 (--_ECompositorTracing@@UEAAPEAXI@Z.c)
 */

void __fastcall lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`CompositorTracing::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      CompositorTracing::`vector deleting destructor'((CompositorTracing *)Context, 0);
  }
}
