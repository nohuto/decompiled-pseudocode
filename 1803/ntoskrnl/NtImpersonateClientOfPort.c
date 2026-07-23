/*
 * XREFs of NtImpersonateClientOfPort @ 0x1407470C4
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcImpersonateClientOfPort @ 0x1404CED50 (NtAlpcImpersonateClientOfPort.c)
 */

NTSTATUS __stdcall NtImpersonateClientOfPort(HANDLE PortHandle, PPORT_MESSAGE ClientMessage)
{
  NTSTATUS result; // eax

  result = NtAlpcImpersonateClientOfPort(PortHandle, ClientMessage, 0LL);
  if ( result == -1073740030 )
    return -1073741281;
  return result;
}
