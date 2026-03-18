/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14016D680
 * Callers:
 *     SepValidateReferencedCachedHandles @ 0x14053FA28 (SepValidateReferencedCachedHandles.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140785D38 (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1400E1718 (PsGetThreadServerSilo.c)
 */

__int64 RtlGetCurrentServiceSessionId()
{
  __int64 ThreadServerSilo; // rax
  unsigned int **v1; // rax

  ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread());
  if ( ThreadServerSilo )
    v1 = *(unsigned int ***)(ThreadServerSilo + 1256);
  else
    v1 = (unsigned int **)&PspHostSiloGlobals;
  return *v1[138];
}
