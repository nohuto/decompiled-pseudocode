/*
 * XREFs of ??_G?$CAsyncCallbackWithLambda@V_lambda_73af3bb2f3d5c91ade250b7343a71e20_@@@@UEAAPEAXI@Z @ 0x180079450
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_73af3bb2f3d5c91ade250b7343a71e20_::__lambda_73af3bb2f3d5c91ade250b7343a71e20_ @ 0x1800786D4 (_lambda_73af3bb2f3d5c91ade250b7343a71e20_--__lambda_73af3bb2f3d5c91ade250b7343a71e20_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CAsyncCallbackWithLambda<_lambda_73af3bb2f3d5c91ade250b7343a71e20_>::`scalar deleting destructor'(
        __int64 *Block,
        char a2)
{
  __int64 v4; // rcx

  lambda_73af3bb2f3d5c91ade250b7343a71e20_::__lambda_73af3bb2f3d5c91ade250b7343a71e20_(Block + 7);
  *((_DWORD *)Block + 13) = -1073741823;
  v4 = Block[5];
  if ( v4 )
  {
    Block[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
