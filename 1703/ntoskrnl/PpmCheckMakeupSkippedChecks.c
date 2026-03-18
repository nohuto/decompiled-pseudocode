/*
 * XREFs of PpmCheckMakeupSkippedChecks @ 0x1400465B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkMaximumCoresParked @ 0x14002D714 (PpmParkMaximumCoresParked.c)
 *     KeEnumerateNextProcessor @ 0x1400459E0 (KeEnumerateNextProcessor.c)
 *     PpmPerfMinimumPerfReached @ 0x140088A50 (PpmPerfMinimumPerfReached.c)
 *     KeGetPrcb @ 0x140089100 (KeGetPrcb.c)
 *     PpmEventTraceMakeupPerfCheck @ 0x140236840 (PpmEventTraceMakeupPerfCheck.c)
 */

char PpmCheckMakeupSkippedChecks()
{
  _QWORD *v1; // rcx
  unsigned int v2; // r8d
  unsigned __int16 v3; // dx
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int16 *v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v7; // [rsp+30h] [rbp-18h]
  unsigned int v8; // [rsp+50h] [rbp+8h] BYREF

  if ( PpmCheckMakeupCount )
  {
    if ( PpmParkMaximumCoresParked() && (unsigned __int8)PpmPerfMinimumPerfReached() )
    {
      v6[1] = (unsigned __int16 *)qword_140340128;
      v6[0] = (unsigned __int16 *)&PpmCheckRegistered;
      v7 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v6) )
      {
        v1 = *(_QWORD **)(KeGetPrcb(v8) + 24296);
        if ( v1 )
        {
          v1[1] = v1[3];
          *v1 = v1[4];
        }
      }
      v2 = PpmParkNumNodes;
      v3 = 0;
      if ( PpmParkNumNodes )
      {
        v4 = PpmParkNodes;
        do
        {
          v5 = v3++;
          *(_QWORD *)(248 * v5 + v4 + 88) = *(_QWORD *)(248 * v5 + v4 + 80);
        }
        while ( v3 < v2 );
      }
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
