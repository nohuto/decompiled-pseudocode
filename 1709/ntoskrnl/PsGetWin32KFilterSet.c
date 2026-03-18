/*
 * XREFs of PsGetWin32KFilterSet @ 0x140117F00
 * Callers:
 *     NtQueryInformationProcess @ 0x1404C7870 (NtQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

__int64 PsGetWin32KFilterSet()
{
  return *(unsigned int *)KeGetCurrentThread()->ApcState.Process[2].IdealNode;
}
