/*
 * XREFs of PopResetActionDefaults @ 0x1406143CC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 *     PopExecutePowerAction @ 0x1405EB7B4 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x1408A80C0 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_1403AA08C = 1;
  dword_1403AA080 = 0;
  dword_1403AA088 = 0;
  byte_1403AA07D = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_1403AA062 = 0;
    qword_1403AA064 = 0LL;
    dword_1403AA070 = 0;
    byte_1403AA07C = 0;
    dword_1403AA074 = 16;
    dword_1403AA06C = 268435459;
  }
}
