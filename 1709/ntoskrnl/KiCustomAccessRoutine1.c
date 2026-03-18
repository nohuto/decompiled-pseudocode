/*
 * XREFs of KiCustomAccessRoutine1 @ 0x14018AE00
 * Callers:
 *     IopTimerDispatch @ 0x14012FE30 (IopTimerDispatch.c)
 * Callees:
 *     KiCustomRecurseRoutine1 @ 0x14018ADE0 (KiCustomRecurseRoutine1.c)
 */

__int64 __fastcall KiCustomAccessRoutine1(unsigned int *a1)
{
  return KiCustomRecurseRoutine1(((unsigned __int8)a1 & 3u) + 1, a1);
}
