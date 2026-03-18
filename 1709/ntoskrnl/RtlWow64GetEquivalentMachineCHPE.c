/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1400E5A10
 * Callers:
 *     PspAllocateProcess @ 0x140489D0C (PspAllocateProcess.c)
 *     PsWow64IsMachineSupported @ 0x14053D92C (PsWow64IsMachineSupported.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140543168 (LdrImageDirectoryEntryToLoadConfig.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlWow64GetEquivalentMachineCHPE(__int16 a1)
{
  __int16 result; // ax

  result = 332;
  if ( a1 != 14948 )
    return a1;
  return result;
}
