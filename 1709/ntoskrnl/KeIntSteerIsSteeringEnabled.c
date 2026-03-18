/*
 * XREFs of KeIntSteerIsSteeringEnabled @ 0x14013263C
 * Callers:
 *     ExpQueryInterruptSteeringInformation @ 0x1405ED194 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

char KeIntSteerIsSteeringEnabled()
{
  return KiIntSteerEnabled;
}
