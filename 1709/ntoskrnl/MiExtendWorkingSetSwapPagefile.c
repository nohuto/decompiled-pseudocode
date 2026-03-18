/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x1406EC81C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140014900 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x140230E70 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x1402266AC (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, 0LL, a3) == 0
       ? 0xC0000099
       : 0;
}
