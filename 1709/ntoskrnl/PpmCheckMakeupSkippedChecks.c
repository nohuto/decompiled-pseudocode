/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x140090AF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x14008D0A4 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x14008F8D0 (KeEnumerateNextProcessor.c)
 *     PpmPerfMinimumPerfReached @ 0x1401252E4 (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x140127524 (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14024B8B4 (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d
  unsigned __int16 i; // dx
  __int64 v4; // rax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  ULONG v7; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v5[1] = (unsigned __int16 *)qword_140358788[0];
      v5[0] = (unsigned __int16 *)&PpmCheckRegistered;
      v6 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v5) )
      {
        v1 = *(_QWORD **)(KeGetPrcb(v7) + 24168);
        if ( v1 )
        {
          v1[1] = v1[3];
          *v1 = v1[4];
        }
      }
      v2 = PpmParkNumNodes;
      for ( i = 0; i < v2; *(_QWORD *)(PpmParkNodes + 248 * v4 + 88) = *(_QWORD *)(PpmParkNodes + 248 * v4 + 80) )
        v4 = i++;
      PpmCheckMakeupCount = 0;
    }
    else
    {
      PpmEventTraceMakeupPerfCheck();
      --PpmCheckMakeupCount;
      PpmCheckPipelineIndex = 4;
    }
  }
  return 1;
}
