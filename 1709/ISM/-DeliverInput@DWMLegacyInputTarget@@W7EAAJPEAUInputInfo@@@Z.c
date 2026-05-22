/*
 * XREFs of ?DeliverInput@DWMLegacyInputTarget@@W7EAAJPEAUInputInfo@@@Z @ 0x1800229A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DWMLegacyInputTarget::DeliverInput(__int64 a1)
{
  return DWMNullInputTarget::GetEndpoint((DWMNullInputTarget *)(a1 - 8));
}
