/*
 * XREFs of ZwQuerySystemTime_0 @ 0x18007DB60
 * Callers:
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemTime_0(PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = MEMORY[0x7FFE0014];
  return 0;
}
