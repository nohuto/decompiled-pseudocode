/*
 * XREFs of KeIsAttachedProcess @ 0x140128220
 * Callers:
 *     NtClose @ 0x1405A2660 (NtClose.c)
 * Callees:
 *     <none>
 */

bool KeIsAttachedProcess()
{
  return KeGetCurrentThread()->ApcStateIndex == 1;
}
