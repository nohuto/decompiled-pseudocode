/*
 * XREFs of PsGetWin32KFilterSet @ 0x14006CEC0
 * Callers:
 *     NtQueryInformationProcess @ 0x1404F9480 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return *(unsigned int *)KeGetCurrentThread()->ApcState.Process[2].IdealNode;
}
