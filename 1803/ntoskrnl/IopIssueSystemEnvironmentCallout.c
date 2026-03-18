/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x140721DE0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
