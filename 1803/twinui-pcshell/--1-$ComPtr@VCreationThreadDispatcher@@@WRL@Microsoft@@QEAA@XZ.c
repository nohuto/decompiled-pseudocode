/*
 * XREFs of ??1?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@QEAA@XZ @ 0x18018D1BC
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27____::_1_::dtor$1 @ 0x18018CE67 (_CreationThreadDispatcher--RunAsync__lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_5671f6d4fec33abe381e1d9c920ba336____::_1_::dtor$0 @ 0x1801ABA90 (_CreationThreadDispatcher--RunAsync__lambda_5671f6d4fec33abe381e1d9c920ba336____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883____::_1_::dtor$1 @ 0x18021A01D (_CreationThreadDispatcher--RunAsync__lambda_0a797daff9b242b959bbd8d51d98a883____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_49f034628129c0f6bb6239b08c86aef5____::_1_::dtor$1 @ 0x18021A141 (_CreationThreadDispatcher--RunAsync__lambda_49f034628129c0f6bb6239b08c86aef5____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____::_1_::dtor$1 @ 0x18021A264 (_CreationThreadDispatcher--RunAsync__lambda_69db3e9761c77a5f5df8b9f478688ffa____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae____::_1_::dtor$1 @ 0x18021A385 (_CreationThreadDispatcher--RunAsync__lambda_8fc5e3e8e4215e3f9514c32427d8c9ae____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____::_1_::dtor$1 @ 0x18021A4A9 (_CreationThreadDispatcher--RunAsync__lambda_e0b48c6444b1fd29cc3c2664eb3161bf____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf____::_1_::dtor$1 @ 0x18022236B (_CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf____--_1_--dtor$1.c)
 *     _wil::MakeAndInitializeOrThrow_CreationThreadDispatcher__::_1_::dtor$0 @ 0x180222F1F (_wil--MakeAndInitializeOrThrow_CreationThreadDispatcher__--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562____::_1_::dtor$1 @ 0x18022303E (_CreationThreadDispatcher--RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5____::_1_::dtor$1 @ 0x18022315A (_CreationThreadDispatcher--RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_0f869028d2211307d6500fcb06deb8db____::_1_::dtor$0 @ 0x1802576F7 (_CreationThreadDispatcher--RunAsync__lambda_0f869028d2211307d6500fcb06deb8db____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d____::_1_::dtor$0 @ 0x1802577DC (_CreationThreadDispatcher--RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d____--_1_--dtor$0.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e____::_1_::dtor$0 @ 0x1802578BD (_CreationThreadDispatcher--RunAsync__lambda_49edb9179b1ba6407f235e88a6b30a0e____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CreationThreadDispatcher>::~ComPtr<CreationThreadDispatcher>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1);
}
