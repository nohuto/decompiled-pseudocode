/*
 * XREFs of KeSetSystemAffinityThread @ 0x140202B10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemAffinityThreadEx @ 0x140202B30 (KeSetSystemAffinityThreadEx.c)
 */

void __stdcall KeSetSystemAffinityThread(KAFFINITY Affinity)
{
  KeSetSystemAffinityThreadEx(Affinity);
}
