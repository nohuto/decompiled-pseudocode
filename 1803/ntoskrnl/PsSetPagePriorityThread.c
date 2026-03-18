/*
 * XREFs of PsSetPagePriorityThread @ 0x140043C14
 * Callers:
 *     IoApplyPriorityInfoThread @ 0x140043B70 (IoApplyPriorityInfoThread.c)
 *     CcPerformReadAhead @ 0x140045EB4 (CcPerformReadAhead.c)
 *     SmSetThreadPagePriority @ 0x14009725C (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x14059B270 (NtSetInformationThread.c)
 *     MiInitSystem @ 0x14089C128 (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x1402AF09C (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1744);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}
