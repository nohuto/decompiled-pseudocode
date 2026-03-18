/*
 * XREFs of PsSetIoPriorityThread @ 0x14004387C
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x140042A4C (CcApplyLowIoPriorityToThread.c)
 *     IoApplyPriorityInfoThread @ 0x140043B70 (IoApplyPriorityInfoThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x140044E50 (IoSetIoPriorityHintIntoThread.c)
 *     CmpSetIoPriorityThread @ 0x1400D1A74 (CmpSetIoPriorityThread.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1400438F8 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x1402AF09C (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1744);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1, v6, a2);
  return v6;
}
