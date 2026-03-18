/*
 * XREFs of PopResetActionDefaults @ 0x1405F24AC
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x1406FCCB4 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x140831CA8 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_14036580C = 1;
  dword_140365800 = 0;
  dword_140365808 = 0;
  byte_1403657FD = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_1403657E2 = 0;
    qword_1403657E4 = 0LL;
    dword_1403657F0 = 0;
    byte_1403657FC = 0;
    dword_1403657F4 = 15;
    dword_1403657EC = 268435459;
  }
}
