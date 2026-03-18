/*
 * XREFs of KiCustomAccessRoutine1 @ 0x14018B100
 * Callers:
 *     IopTimerDispatch @ 0x14003A410 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x14018B0E0 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
