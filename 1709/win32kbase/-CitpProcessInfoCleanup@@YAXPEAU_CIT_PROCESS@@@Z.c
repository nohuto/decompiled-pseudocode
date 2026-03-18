/*
 * XREFs of ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C001C878
 * Callers:
 *     CitProcessCallout @ 0x1C0024344 (CitProcessCallout.c)
 * Callees:
 *     ?CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z @ 0x1C001C8C0 (-CitpProgramIdCleanup@@YAXPEAU_CIT_PROGRAM_ID@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C001C8FC (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 *     ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C0091ABC (-CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z.c)
 *     ?CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@@Z @ 0x1C0154F88 (-CitpInteractionSummaryGetOutstanding@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_PROCESS@@@Z.c)
 */

void __fastcall CitpProcessInfoCleanup(struct _CIT_PROCESS *a1)
{
  struct _CIT_INTERACTION_SUMMARY *Outstanding; // rdi
  char v3; // r10

  if ( *((_BYTE *)a1 + 88) || *((_BYTE *)a1 + 89) )
  {
    Outstanding = CitpInteractionSummaryGetOutstanding(a1);
    if ( v3 )
    {
      PsUpdateComponentPower(**((_QWORD **)a1 + 1), 10LL);
      if ( Outstanding )
        CitpAudioStatDecrementStreams(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 96),
          *((_BYTE *)a1 + 88));
    }
    if ( *((_BYTE *)a1 + 89) )
    {
      PsUpdateComponentPower(**((_QWORD **)a1 + 1), 11LL);
      if ( Outstanding )
        CitpAudioStatDecrementStreams(
          (struct _CIT_INTERACTION_SUMMARY *)((char *)Outstanding + 104),
          *((_BYTE *)a1 + 89));
    }
  }
  CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)a1 + 2);
  CitpProgramIdCleanup((struct _CIT_PROCESS *)((char *)a1 + 32));
}
