/*
 * XREFs of _lambda_70ef6d486f3f96eaef07ad25d0a0dd07_::__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_ @ 0x18021B7C4
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____::_1_::dtor$2 @ 0x18021A270 (_CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_70ef6d486f3f96eaef07ad25d0a0dd07_::__lambda_70ef6d486f3f96eaef07ad25d0a0dd07_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 4);
  __abi_winrt_ptr_dtor(a1[1]);
  return __abi_winrt_ptr_dtor(*a1);
}
