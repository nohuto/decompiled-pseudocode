/*
 * XREFs of _lambda_b54a539cfe46808b00a7528603484502_::__lambda_b54a539cfe46808b00a7528603484502_ @ 0x180223568
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562____::_1_::dtor$2 @ 0x18022304A (_CreationThreadDispatcher--RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562____--_1_--dtor$2.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5____::_1_::dtor$2 @ 0x180223166 (_CreationThreadDispatcher--RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5____--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_b54a539cfe46808b00a7528603484502_::__lambda_b54a539cfe46808b00a7528603484502_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 2);
  __abi_winrt_ptr_dtor(a1[1]);
  return __abi_winrt_ptr_dtor(*a1);
}
