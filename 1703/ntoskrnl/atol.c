/*
 * XREFs of atol @ 0x140169880
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x1401685F0 (HvlDebuggerSupportInitialize.c)
 *     KdInitSystem @ 0x140789150 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140809FC8 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x14080AC64 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x140836EAC (RamdiskStart.c)
 * Callees:
 *     <none>
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
