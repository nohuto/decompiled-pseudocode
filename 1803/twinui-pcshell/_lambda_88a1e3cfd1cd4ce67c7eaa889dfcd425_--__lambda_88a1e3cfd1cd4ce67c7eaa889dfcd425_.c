/*
 * XREFs of _lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425_::__lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425_ @ 0x180257E98
 * Callers:
 *     _CreationThreadDispatcher::RunAsync__lambda_5671f6d4fec33abe381e1d9c920ba336____::_1_::dtor$1 @ 0x1801ABA9C (_CreationThreadDispatcher--RunAsync__lambda_5671f6d4fec33abe381e1d9c920ba336____--_1_--dtor$1.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d____::_1_::dtor$1 @ 0x1802577E8 (_CreationThreadDispatcher--RunAsync__lambda_3811e63994a6acdbea5f41d0f15c3e3d____--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425_::__lambda_88a1e3cfd1cd4ce67c7eaa889dfcd425_(__int64 a1)
{
  return Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease((__int64 *)(a1 + 16));
}
