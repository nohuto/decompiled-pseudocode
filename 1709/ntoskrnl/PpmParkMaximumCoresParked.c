/*
 * XREFs of PpmParkMaximumCoresParked @ 0x140127524
 * Callers:
 *     PpmCheckMakeupSkippedChecks @ 0x140090AF0 (PpmCheckMakeupSkippedChecks.c)
 * Callees:
 *     <none>
 */

char PpmParkMaximumCoresParked()
{
  unsigned __int16 v0; // dx
  char i; // r9
  unsigned int v2; // r8d
  _BYTE *v3; // rcx

  v0 = 0;
  for ( i = 1; v0 < (unsigned int)PpmParkNumNodes; ++v0 )
  {
    v2 = 0;
    v3 = (_BYTE *)(PpmParkNodes + 248LL * v0 + 106);
    while ( v3[13] <= *v3 )
    {
      ++v2;
      ++v3;
      if ( v2 >= 2 )
        goto LABEL_5;
    }
    i = 0;
LABEL_5:
    ;
  }
  return i;
}
