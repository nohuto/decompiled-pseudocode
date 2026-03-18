/*
 * XREFs of KeIsAttachedProcess @ 0x140061F40
 * Callers:
 *     NtClose @ 0x1404AE620 (NtClose.c)
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
