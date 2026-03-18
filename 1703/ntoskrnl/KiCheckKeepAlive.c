/*
 * XREFs of KiCheckKeepAlive @ 0x140027E18
 * Callers:
 *     KeAccumulateTicks @ 0x1400F6700 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140047790 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400D9440 (KeRemoveProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(unsigned int a1)
{
  char v2; // di
  unsigned __int64 v3; // r8
  char v4; // dl
  unsigned __int64 v5; // r8

  v2 = 0;
  v3 = (unsigned int)KiProcessorIndexToNumberMappingTable[a1];
  v4 = v3 & 0x3F;
  v5 = v3 >> 6;
  if ( ((*(_QWORD *)&KiClockCheckPending[4 * v5 + 4] >> v4) & 1) != 0 )
  {
    if ( ((KiClockCheckReady[v5 + 1] >> v4) & 1) != 0 )
    {
      KeRemoveProcessorAffinityEx(KiClockCheckReady, a1);
      KeRemoveProcessorAffinityEx(KiClockCheckPending, a1);
      return 1;
    }
    else
    {
      KeAddProcessorAffinityEx(KiClockCheckReady, a1);
    }
  }
  return v2;
}
