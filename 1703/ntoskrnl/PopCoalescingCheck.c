/*
 * XREFs of PopCoalescingCheck @ 0x14022D878
 * Callers:
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 * Callees:
 *     PopCheckForWork @ 0x140070144 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x1400701C0 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopCoalescingCheck(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = a2;
  if ( a1 )
  {
    if ( a3 )
    {
      if ( a2 > a1 )
        return a1 / 0x3E8 + 1;
    }
    else if ( MEMORY[0xFFFFF78000000008] - PopCoalescingLastFlushTime >= 10000000
                                                                       * (unsigned __int64)(unsigned int)PopCoalescingFlushInterval )
    {
      PopGetPolicyWorker(32);
      PopCheckForWork();
    }
  }
  return v3;
}
