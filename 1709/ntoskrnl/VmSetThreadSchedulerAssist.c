/*
 * XREFs of VmSetThreadSchedulerAssist @ 0x140278270
 * Callers:
 *     <none>
 * Callees:
 *     KeSetThreadSchedulerAssist @ 0x140209F5C (KeSetThreadSchedulerAssist.c)
 */

void __fastcall VmSetThreadSchedulerAssist(__int64 a1, __int64 a2, char a3)
{
  KeSetThreadSchedulerAssist(a1, a2, a3);
}
