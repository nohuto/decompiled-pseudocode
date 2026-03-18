/*
 * XREFs of EtwpOpenConsumer @ 0x1404521B4
 * Callers:
 *     EtwpRealtimeConnect @ 0x140451D24 (EtwpRealtimeConnect.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 */

NTSTATUS __fastcall EtwpOpenConsumer(PHANDLE Handle)
{
  return ObOpenObjectByPointer(
           KeGetCurrentThread()->ApcState.Process,
           0x200u,
           0LL,
           0x28u,
           (POBJECT_TYPE)PsProcessType,
           0,
           Handle);
}
