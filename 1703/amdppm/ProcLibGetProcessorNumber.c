/*
 * XREFs of ProcLibGetProcessorNumber @ 0x1C0005BD4
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C000597C (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceSummary @ 0x1C001CE90 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C001D178 (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C001D680 (ProcLibTraceCap.c)
 *     ProcLibTraceControlCallback @ 0x1C001D790 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001DBF8 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001DEF0 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001E19C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E3D4 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001E890 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceQueryCapabilities @ 0x1C001EB14 (ProcLibTraceQueryCapabilities.c)
 *     ProcLibTraceGetProcessorIdleStates @ 0x1C001ECF4 (ProcLibTraceGetProcessorIdleStates.c)
 *     ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C001EEF8 (ProcLibTraceGetProcessorIdleStatesV2.c)
 *     ProcLibTracePepPerfCapabilities @ 0x1C001F0F0 (ProcLibTracePepPerfCapabilities.c)
 *     ProcLibTracePerfConstraintChange @ 0x1C001F550 (ProcLibTracePerfConstraintChange.c)
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
