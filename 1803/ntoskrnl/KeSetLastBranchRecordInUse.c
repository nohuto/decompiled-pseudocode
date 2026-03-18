/*
 * XREFs of KeSetLastBranchRecordInUse @ 0x140741900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeSetLastBranchRecordInUse(char a1)
{
  if ( a1 )
    _interlockedbittestandset(&KiCpuTracingFlags, 2u);
  else
    _interlockedbittestandreset(&KiCpuTracingFlags, 2u);
}
