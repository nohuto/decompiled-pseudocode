/*
 * XREFs of _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_ @ 0x18019CE30
 * Callers:
 *     <none>
 * Callees:
 *     ??_GLockScreenServiceLogging@@UEAAPEAXI@Z @ 0x18016B170 (--_GLockScreenServiceLogging@@UEAAPEAXI@Z.c)
 */

void __fastcall lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_()
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( InitOnceBeginInitialize(&`PrivilegedOperationsTraceLogging::Instance'::`2'::wrapper, 1u, &fPending, &Context) )
  {
    if ( !fPending )
      LockScreenServiceLogging::`scalar deleting destructor'((LockScreenServiceLogging *)Context, 0);
  }
}
