/*
 * XREFs of KdPowerTransition @ 0x140201790
 * Callers:
 *     PopSaveHiberContext @ 0x140434F40 (PopSaveHiberContext.c)
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1402017B0 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
