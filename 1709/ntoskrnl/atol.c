/*
 * XREFs of atol @ 0x14015E1C0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14015D5D8 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x14015E1A0 (atoi.c)
 *     KdInitSystem @ 0x140796140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x14082FD94 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140830A1C (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x14086E0DC (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x140160DAC (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
