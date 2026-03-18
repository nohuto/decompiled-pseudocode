/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1400767F0
 * Callers:
 *     EtwpEventWriteFull @ 0x1400EFAB0 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404D3060 (EtwpWriteUserEvent.c)
 *     PopCreatePowerRequestObject @ 0x140524250 (PopCreatePowerRequestObject.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     PnpNotifyDriverCallback @ 0x1405E28F8 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x1406129BC (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x1406133D0 (IoGetContainerInformation.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  _KPROCESS *Process; // rdx
  unsigned __int64 v1; // rcx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
