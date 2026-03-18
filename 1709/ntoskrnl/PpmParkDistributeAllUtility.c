/*
 * XREFs of PpmParkDistributeAllUtility @ 0x14008F950
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x14008F9F0 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  char v0; // di
  unsigned int i; // ebx

  v0 = *(_BYTE *)(2688LL * dword_1403661AC + PpmCurrentProfile + 120) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 248LL * i + 8),
      *(_QWORD *)(PpmParkNodes + 248LL * i + 32),
      *(unsigned __int16 *)(PpmParkNodes + 248LL * i + 4),
      *(unsigned __int8 *)(PpmParkNodes + 248LL * i + 118),
      v0,
      0,
      0LL);
  return 1;
}
