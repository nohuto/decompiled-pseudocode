/*
 * XREFs of PfpLogEventRequest @ 0x1406F257C
 * Callers:
 *     PfSetSuperfetchInformation @ 0x14043E10C (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 *     MmGetDefaultPagePriority @ 0x140126770 (MmGetDefaultPagePriority.c)
 *     PfTSetTracingPriority @ 0x140431444 (PfTSetTracingPriority.c)
 *     MmIssueMemoryListCommand @ 0x1406E275C (MmIssueMemoryListCommand.c)
 *     PfGenerateTrace @ 0x1406F3AD4 (PfGenerateTrace.c)
 */

__int64 __fastcall PfpLogEventRequest(__int64 a1)
{
  __int64 v2; // rcx
  int DefaultPagePriority; // ecx
  int v4; // edi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)a1 & 0x1Fu) - 2 <= 1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_OWORD *)v2 = xmmword_140387B90;
    *(_QWORD *)(v2 + 16) = unk_140387BA0;
    if ( (*(_DWORD *)a1 & 0x1F) == 2 )
      DefaultPagePriority = (*(_DWORD *)(v2 + 24) >> 5) & 7;
    else
      DefaultPagePriority = MmGetDefaultPagePriority();
    PfTSetTracingPriority(DefaultPagePriority);
  }
  if ( (*(_BYTE *)a1 & 0x1F) == 0x1B && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 3) == 1 )
    _InterlockedAnd(&dword_14039E914, 0xFFFFFFFE);
  v4 = dword_14038D2BC
     + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
       + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
  if ( (*(_DWORD *)a1 & 0x20) != 0 )
  {
    v6 = ((unsigned __int8)(*(_DWORD *)a1 >> 5) >> 1) & 1;
    MmIssueMemoryListCommand(&v6, 4u, 0);
    PfGenerateTrace(&Thread, 0LL);
  }
  return PfLogEvent(*(_DWORD *)a1 & 0x1F, v4, *(const void **)(a1 + 8), *(_DWORD *)a1 >> 7);
}
