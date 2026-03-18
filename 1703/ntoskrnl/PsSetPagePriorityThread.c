/*
 * XREFs of PsSetPagePriorityThread @ 0x140044894
 * Callers:
 *     CcPerformReadAhead @ 0x1400215AC (CcPerformReadAhead.c)
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     IoApplyPriorityInfoThread @ 0x140066920 (IoApplyPriorityInfoThread.c)
 *     SmSetThreadPagePriority @ 0x140121D78 (SmSetThreadPagePriority.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x1408032EC (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1736);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1736), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
