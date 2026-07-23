/*
 * XREFs of AlpcRundownCompletionList @ 0x18008ACF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl AlpcRundownCompletionList(HANDLE PortHandle)
{
  return ZwAlpcSetInformation(PortHandle, AlpcCompletionListRundownInformation, 0LL, 0);
}
