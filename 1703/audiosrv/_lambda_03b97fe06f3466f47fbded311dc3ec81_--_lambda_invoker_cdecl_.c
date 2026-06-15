/*
 * XREFs of _lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_ @ 0x18002F5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x180026DA4 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  int v4; // eax
  int v5; // eax

  v4 = _Mtx_lock((_Mtx_t)(Context + 8));
  if ( v4 )
    std::_Throw_C_error(v4);
  if ( !*(_DWORD *)Context )
    CSebNotifier::PublishSebEvent((CSebNotifier *)Context, 0);
  v5 = _Mtx_unlock((_Mtx_t)(Context + 8));
  if ( v5 )
    std::_Throw_C_error(v5);
}
