/*
 * XREFs of PopFindNextSystemPowerState @ 0x14075D2EC
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x1404714E0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9

  v3 = 1;
  dword_1403AA080 = dword_1403AA084;
  if ( dword_1403AA084 == 1 )
  {
    if ( dword_1403AA06C < 0 && *a3 )
    {
      *a3 = 0;
      dword_1403AA06C &= ~0x10000000u;
      dword_1403AA080 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_1403AA080 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
