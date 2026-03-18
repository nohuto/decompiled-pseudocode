/*
 * XREFs of PpmParkDistributeAllUtility @ 0x140047270
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140047310 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  char v0; // di
  unsigned int i; // ebx

  v0 = LOBYTE(PpmCurrentProfile[175 * dword_14034BB2C + 15]) != 0;
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
