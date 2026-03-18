/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14003CC8C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1405D2458 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
