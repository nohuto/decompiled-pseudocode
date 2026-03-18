/*
 * XREFs of PopFindNextSystemPowerState @ 0x1406F50E8
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9
  int v4; // eax

  v3 = 1;
  dword_140365800 = dword_140365804;
  if ( dword_140365804 == 1 )
  {
    v4 = dword_1403657EC;
    if ( dword_1403657EC < 0 && *a3 )
    {
      *a3 = 0;
      dword_1403657EC = v4 & 0xEFFFFFFF;
      dword_140365800 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_140365800 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
