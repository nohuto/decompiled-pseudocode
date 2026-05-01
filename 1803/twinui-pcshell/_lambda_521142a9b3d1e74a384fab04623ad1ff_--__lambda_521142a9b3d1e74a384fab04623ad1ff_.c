/*
 * XREFs of _lambda_521142a9b3d1e74a384fab04623ad1ff_::__lambda_521142a9b3d1e74a384fab04623ad1ff_ @ 0x18022268C
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf____::_1_::dtor$2 @ 0x180222377 (_CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf____--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_521142a9b3d1e74a384fab04623ad1ff_::__lambda_521142a9b3d1e74a384fab04623ad1ff_(__int64 a1)
{
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 24));
  return lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(a1);
}
