/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140160340
 * Callers:
 *     PpmCheckReInit @ 0x1405C02B8 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

__int64 PopInterruptSteeringEnabled()
{
  __int64 result; // rax

  result = 0LL;
  if ( KiIntSteerEnabled )
  {
    if ( !PpmIntSteerDisabled )
      return 1LL;
  }
  return result;
}
