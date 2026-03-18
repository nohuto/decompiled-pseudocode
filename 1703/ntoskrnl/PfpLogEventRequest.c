/*
 * XREFs of PfpLogEventRequest @ 0x1405762E0
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1405630D4 (PfSetSuperfetchInformation.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1400448EC (MmGetDefaultPagePriority.c)
 *     PfTSetTracingPriority @ 0x140419968 (PfTSetTracingPriority.c)
 *     PfGenerateTrace @ 0x1405761CC (PfGenerateTrace.c)
 *     MmIssueMemoryListCommand @ 0x14057CB60 (MmIssueMemoryListCommand.c)
 */

__int64 __fastcall PfpLogEventRequest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi
  __int64 v7; // rcx
  int DefaultPagePriority; // ecx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x1Fu) - 2 <= 1 )
  {
    v7 = *(_QWORD *)(a1 + 8);
    *(_OWORD *)v7 = xmmword_14036DC10;
    *(_QWORD *)(v7 + 16) = unk_14036DC20;
    if ( (*(_DWORD *)a1 & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v7 + 24) >> 5) & 7;
    else
      DefaultPagePriority = MmGetDefaultPagePriority();
    PfTSetTracingPriority(DefaultPagePriority);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_140382C14, 0xFFFFFFFE);
  v5 = dword_14036DE5C
     + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
       + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v9 = ((unsigned __int8)*(_DWORD *)a1 >> 6) & 1;
    MmIssueMemoryListCommand(&v9, 4LL, 0LL, a4);
    PfGenerateTrace((__int64)&Thread, 0);
  }
  return PfLogEvent(*(_DWORD *)a1 & 0x1F, v5, *(const void **)(a1 + 8), *(_DWORD *)a1 >> 7);
}
