/*
 * XREFs of KdPowerTransition @ 0x14023E870
 * Callers:
 *     PopHandleNextState @ 0x140473200 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140473E20 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x14023E890 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
