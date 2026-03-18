/*
 * XREFs of PpmParkDistributeAllUtility @ 0x140035CE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140035950 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  char v0; // di
  unsigned int i; // ebx

  v0 = LOBYTE(PpmCurrentProfile[336 * dword_1403AAA2C + 15]) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 248LL * i + 8),
      *(_QWORD *)(PpmParkNodes + 248LL * i + 32),
      *(_WORD *)(PpmParkNodes + 248LL * i + 4),
      *(_BYTE *)(PpmParkNodes + 248LL * i + 118),
      v0,
      0,
      0LL);
  return 1;
}
