/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0005D20
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0005ACC (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary @ 0x1C001FE70 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C0020158 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C0020668 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C0020770 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C0020BD0 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C0020EC8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C0021168 (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C00213A0 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C002185C (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C0021AD4 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C0021CC4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C0021EC8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C00220C0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C00225C8 (ProcLibTracePerfConstraintChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetProcessorNumber(__int64 a1, struct _PROCESSOR_NUMBER *a2)
{
  unsigned int v2; // r8d

  if ( dword_1C00117FC == 1 )
  {
    if ( *(_DWORD *)(a1 + 72) == -1 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v2 = 0;
      a2->Reserved = 0;
      a2->Group = 0;
      a2->Number = *(_BYTE *)(a1 + 72);
    }
  }
  else
  {
    return (unsigned int)KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), a2);
  }
  return v2;
}
