/*
 * XREFs of PopFindNextSystemPowerState @ 0x1406C5420
 * Callers:
 *     NtSetSystemPowerState @ 0x140408DF4 (NtSetSystemPowerState.c)
 * Callees:
 *     <none>
 */

char __fastcall PopFindNextSystemPowerState(int a1, char a2, _BYTE *a3)
{
  char v3; // r9
  int v4; // eax

  v3 = 1;
  dword_14034B1A0 = dword_14034B1A4;
  if ( dword_14034B1A4 == 1 )
  {
    v4 = dword_14034B18C;
    if ( dword_14034B18C < 0 && *a3 )
    {
      *a3 = 0;
      dword_14034B18C = v4 & 0xEFFFFFFF;
      dword_14034B1A0 = a1;
    }
    else if ( a2 && a1 == 5 )
    {
      dword_14034B1A0 = 5;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
