/*
 * XREFs of PsSetIoPriorityThread @ 0x1400669C4
 * Callers:
 *     CmpSetIoPriorityThread @ 0x14003B93C (CmpSetIoPriorityThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x1400668F0 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x140066920 (IoApplyPriorityInfoThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x1400AB33C (CcApplyLowIoPriorityToThread.c)
 *     NtSetInformationThread @ 0x14047D650 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140066A40 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x140253A4C (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1736);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1736), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1);
  return v6;
}
