/*
 * XREFs of RtlWow64GetEquivalentMachineCHPE @ 0x1400BA024
 * Callers:
 *     PspAllocateProcess @ 0x1404ED888 (PspAllocateProcess.c)
 *     PsWow64IsMachineSupported @ 0x14055FEF0 (PsWow64IsMachineSupported.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1405FAB30 (LdrImageDirectoryEntryToLoadConfig.c)
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
