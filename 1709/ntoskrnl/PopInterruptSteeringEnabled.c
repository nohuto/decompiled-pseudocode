/*
 * XREFs of PopInterruptSteeringEnabled @ 0x140138500
 * Callers:
 *     PpmCheckReInit @ 0x1405B5FE0 (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

char PopInterruptSteeringEnabled()
{
  char result; // al

  result = 0;
  if ( KiIntSteerEnabled )
  {
    if ( !PpmIntSteerDisabled )
      return 1;
  }
  return result;
}
