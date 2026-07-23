/*
 * XREFs of ZwQuerySystemTime_0 @ 0x1800783A0
 * Callers:
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemTime_0(PLARGE_INTEGER SystemTime)
{
  SystemTime->QuadPart = MEMORY[0x7FFE0014];
  return 0;
}
