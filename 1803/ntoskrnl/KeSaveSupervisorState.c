/*
 * XREFs of KeSaveSupervisorState @ 0x1402454FC
 * Callers:
 *     KeBugCheck2 @ 0x1402429F0 (KeBugCheck2.c)
 *     KiFreezeTargetExecution @ 0x1402475A0 (KiFreezeTargetExecution.c)
 *     KdEnterDebugger @ 0x140803C74 (KdEnterDebugger.c)
 * Callees:
 *     XSaveSHelper @ 0x1401B3890 (XSaveSHelper.c)
 */

__int64 __fastcall KeSaveSupervisorState(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( a1 )
      return XSaveSHelper(a1 - 512, MEMORY[0xFFFFF780000005F0] & a2);
  }
  return result;
}
