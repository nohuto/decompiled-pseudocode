/*
 * XREFs of AlpcUnregisterCompletionList @ 0x18008AD10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcUnregisterCompletionList(HANDLE PortHandle)
{
  return ZwAlpcSetInformation(PortHandle, AlpcUnregisterCompletionListInformation, 0LL, 0);
}
