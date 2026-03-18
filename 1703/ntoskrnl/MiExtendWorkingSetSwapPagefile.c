/*
 * XREFs of MiExtendWorkingSetSwapPagefile @ 0x1406BF54C
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiIssuePageExtendRequest @ 0x14021A1F0 (MiIssuePageExtendRequest.c)
 */

__int64 __fastcall MiExtendWorkingSetSwapPagefile(__int64 a1, __int64 a2, unsigned int a3)
{
  return (unsigned int)MiIssuePageExtendRequest(a1, (a2 + 0x7FFF) & 0xFFFFFFFFFFFF8000uLL, a3, 0) == 0 ? 0xC0000099 : 0;
}
