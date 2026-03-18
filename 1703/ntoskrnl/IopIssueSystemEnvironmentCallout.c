/*
 * XREFs of IopIssueSystemEnvironmentCallout @ 0x1406910F0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 */

void __fastcall IopIssueSystemEnvironmentCallout(PVOID Parameter)
{
  *((_DWORD *)Parameter + 4) = IofCallDriver(*(PDEVICE_OBJECT *)Parameter, *((PIRP *)Parameter + 1));
}
