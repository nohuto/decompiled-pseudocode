/*
 * XREFs of ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x180007650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::AddRef(__int64 a1)
{
  return MPCSharedWorldInputTarget::AddRef((MPCSharedWorldInputTarget *)(a1 - 8));
}
