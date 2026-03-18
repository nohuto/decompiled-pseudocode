/*
 * XREFs of KeRestoreSupervisorState @ 0x1402454C0
 * Callers:
 *     KiFreezeTargetExecution @ 0x1402475A0 (KiFreezeTargetExecution.c)
 *     KdExitDebugger @ 0x140803DB4 (KdExitDebugger.c)
 * Callees:
 *     XRestoreSHelper @ 0x1401B38B0 (XRestoreSHelper.c)
 */

__int64 __fastcall KeRestoreSupervisorState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( a1 )
      return XRestoreSHelper(a1 - 512, MEMORY[0xFFFFF780000005F0] & a2);
  }
  return result;
}
