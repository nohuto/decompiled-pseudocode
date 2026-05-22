/*
 * XREFs of _RIMRawInputProvider::Initialize_::_1_::dtor$12 @ 0x1800E730A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMRawInputProvider::Initialize_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return std::unique_ptr<SpatialRimDeviceCollection>::~unique_ptr<SpatialRimDeviceCollection>((__int64 *)(a2 + 128));
}
