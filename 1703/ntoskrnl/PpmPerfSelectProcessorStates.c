/*
 * XREFs of PpmPerfSelectProcessorStates @ 0x1400460D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSelectProcessorState @ 0x1400461B0 (PpmPerfSelectProcessorState.c)
 */

char PpmPerfSelectProcessorStates()
{
  __int64 i; // rcx
  int v1; // eax
  unsigned __int64 v2; // rbx
  unsigned __int16 v3; // di
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 480);
    if ( v1 != -1 )
      *(_DWORD *)(i + 480) = v1 + 1;
  }
  v2 = qword_140340078[0];
  v3 = 0;
  while ( v2 )
  {
LABEL_7:
    _BitScanForward64(&v4, v2);
    v2 &= ~(1LL << v4);
    v5 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v3 + (unsigned __int8)v4];
    if ( (unsigned int)v5 >= (unsigned int)KeNumberProcessors_0 )
      v6 = 0LL;
    else
      v6 = KiProcessorBlock[v5];
    PpmPerfSelectProcessorState(v6);
  }
  while ( ++v3 < (unsigned int)(unsigned __int16)PpmPerfStatesRegistered )
  {
    v2 = qword_140340078[v3];
    if ( v2 )
      goto LABEL_7;
  }
  return 1;
}
