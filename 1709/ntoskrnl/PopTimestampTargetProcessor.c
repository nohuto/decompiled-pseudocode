/*
 * XREFs of PopTimestampTargetProcessor @ 0x14023A2E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 */

void __fastcall PopTimestampTargetProcessor(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        struct _KEVENT *SystemArgument2)
{
  *SystemArgument1 = __rdtsc();
  KeSetEvent(SystemArgument2, 0, 0);
}
