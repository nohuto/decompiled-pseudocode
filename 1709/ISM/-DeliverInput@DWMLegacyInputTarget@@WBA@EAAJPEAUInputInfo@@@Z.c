/*
 * XREFs of ?DeliverInput@DWMLegacyInputTarget@@WBA@EAAJPEAUInputInfo@@@Z @ 0x180022BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall DWMLegacyInputTarget::DeliverInput(__int64 a1)
{
  return DWMNullInputTarget::GetEndpoint((DWMNullInputTarget *)(a1 - 16));
}
