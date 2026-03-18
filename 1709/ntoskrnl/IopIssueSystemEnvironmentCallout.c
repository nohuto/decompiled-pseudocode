/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x1406BCE30
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
