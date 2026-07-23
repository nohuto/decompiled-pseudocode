/*
 * XREFs of RtlValidProcessProtection @ 0x1800DD590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlValidProcessProtection(PS_PROTECTION ProcessProtection)
{
  if ( ProcessProtection.Level > 0x41u )
  {
    if ( ProcessProtection.Level < 0x51u
      || ProcessProtection.Level > 0x52u
      && (ProcessProtection.Level <= 0x60u
       || ProcessProtection.Level > 0x62u && ProcessProtection.Level != 114 && ProcessProtection.Level != 129) )
    {
      return 0;
    }
  }
  else if ( ProcessProtection.Level != 65
         && ProcessProtection.Level
         && ProcessProtection.Level != 8
         && ProcessProtection.Level != 18
         && ProcessProtection.Level != 33
         && ProcessProtection.Level != 49 )
  {
    return 0;
  }
  return 1;
}
