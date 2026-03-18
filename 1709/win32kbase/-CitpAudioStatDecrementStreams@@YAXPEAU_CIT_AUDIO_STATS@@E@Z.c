/*
 * XREFs of ?CitpAudioStatDecrementStreams@@YAXPEAU_CIT_AUDIO_STATS@@E@Z @ 0x1C0091ABC
 * Callers:
 *     ?CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z @ 0x1C001C878 (-CitpProcessInfoCleanup@@YAXPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x1C0091950 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 * Callees:
 *     ?CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z @ 0x1C0091AE8 (-CitpAudioStatSnapDelta@@YAXPEAU_CIT_AUDIO_STATS@@@Z.c)
 */

void __fastcall CitpAudioStatDecrementStreams(struct _CIT_AUDIO_STATS *a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // al

  v2 = *((_BYTE *)a1 + 3);
  if ( v2 )
  {
    if ( v2 > a2 )
    {
      *((_BYTE *)a1 + 3) = v2 - a2;
    }
    else
    {
      *((_BYTE *)a1 + 3) = 0;
      CitpAudioStatSnapDelta(a1);
    }
  }
}
