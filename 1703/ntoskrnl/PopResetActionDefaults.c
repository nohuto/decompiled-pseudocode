/*
 * XREFs of PopResetActionDefaults @ 0x140586418
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 *     PopExecutePowerAction @ 0x140577024 (PopExecutePowerAction.c)
 *     PoInitSystem @ 0x14080B764 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

void PopResetActionDefaults()
{
  dword_14034B1AC = 1;
  dword_14034B1A0 = 0;
  dword_14034B1A8 = 0;
  byte_14034B19D = 0;
  if ( (PopAction & 2) == 0 )
  {
    PopAction = 0;
    byte_14034B182 = 0;
    qword_14034B184 = 0LL;
    dword_14034B190 = 0;
    byte_14034B19C = 0;
    dword_14034B194 = 15;
    dword_14034B18C = 268435459;
  }
}
