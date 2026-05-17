/*
 * XREFs of AlpcUnregisterCompletionList @ 0x18008AD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcUnregisterCompletionList(__int64 a1)
{
  return ZwAlpcSetInformation(a1, 7LL, 0LL);
}
