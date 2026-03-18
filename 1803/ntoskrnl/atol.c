/*
 * XREFs of atol @ 0x140187EC0
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140187348 (HvlDebuggerSupportInitialize.c)
 *     atoi @ 0x140187EA0 (atoi.c)
 *     KdInitSystem @ 0x140803140 (KdInitSystem.c)
 *     InitBootProcessor @ 0x1408A6138 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1408A6E00 (Phase1InitializationDiscard.c)
 *     RamdiskStart @ 0x1408E2E3C (RamdiskStart.c)
 * Callees:
 *     strtolX @ 0x14018AF50 (strtolX.c)
 */

int __cdecl atol(const char *Str)
{
  if ( Str )
    return strtolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
