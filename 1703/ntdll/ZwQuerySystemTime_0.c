/*
 * XREFs of ZwQuerySystemTime_0 @ 0x18007DB60
 * Callers:
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQuerySystemTime_0(_QWORD *a1)
{
  *a1 = MEMORY[0x7FFE0014];
  return 0LL;
}
