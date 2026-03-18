/*
 * XREFs of KeSetSystemAffinityThread @ 0x140186D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemAffinityThreadEx @ 0x140186D80 (KeSetSystemAffinityThreadEx.c)
 */

void __stdcall KeSetSystemAffinityThread(KAFFINITY Affinity)
{
  KeSetSystemAffinityThreadEx(Affinity);
}
