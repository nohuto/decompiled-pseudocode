/*
 * XREFs of PopInterruptSteeringEnabled @ 0x14017FB5C
 * Callers:
 *     PpmCheckReInit @ 0x14063F71C (PpmCheckReInit.c)
 * Callees:
 *     <none>
 */

bool PopInterruptSteeringEnabled()
{
  bool result; // al

  result = 0;
  if ( !PpmIntSteerDisabled )
    return KiIntSteerEnabled != 0;
  return result;
}
