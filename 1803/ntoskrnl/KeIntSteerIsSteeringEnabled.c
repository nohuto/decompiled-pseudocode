/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x1400D2ED8
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x14065179C (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
