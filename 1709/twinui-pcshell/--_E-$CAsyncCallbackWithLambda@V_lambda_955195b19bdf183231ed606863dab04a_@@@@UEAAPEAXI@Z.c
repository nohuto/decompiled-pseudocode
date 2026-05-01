/*
 * XREFs of ??_E?$CAsyncCallbackWithLambda@V_lambda_955195b19bdf183231ed606863dab04a_@@@@UEAAPEAXI@Z @ 0x180155030
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_ @ 0x180153050 (_lambda_e5d643bc643c8a09454132ff8d011188_--__lambda_e5d643bc643c8a09454132ff8d011188_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CAsyncCallbackWithLambda<_lambda_955195b19bdf183231ed606863dab04a_>::`vector deleting destructor'(
        _DWORD *Block,
        char a2)
{
  __int64 v4; // rcx

  lambda_e5d643bc643c8a09454132ff8d011188_::__lambda_e5d643bc643c8a09454132ff8d011188_((__int64)(Block + 14));
  Block[13] = -1073741823;
  v4 = *((_QWORD *)Block + 5);
  if ( v4 )
  {
    *((_QWORD *)Block + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
