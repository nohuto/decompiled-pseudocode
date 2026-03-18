/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x140036B10
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140034620 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x140036E98 (KeGetPrcb.c)
 *     PpmPerfMinimumPerfReached @ 0x1400C062C (PpmPerfMinimumPerfReached.c)
 *     PpmParkMaximumCoresParked @ 0x1400C44AC (PpmParkMaximumCoresParked.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x14028182C (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d
  unsigned __int16 i; // dx
  __int64 v4; // rax
  unsigned __int16 *v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v6; // [rsp+30h] [rbp-18h]
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckMakeupCount )
  {
    if ( (unsigned __int8)PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v5[1] = (unsigned __int16 *)qword_14039BD78[0];
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
