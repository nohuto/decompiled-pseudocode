/*
 * XREFs of KdPowerTransition @ 0x1401FBA80
 * Callers:
 *     PopSaveHiberContext @ 0x140405800 (PopSaveHiberContext.c)
 *     PopHandleNextState @ 0x1404063E0 (PopHandleNextState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
