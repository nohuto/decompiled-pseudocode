/*
 * XREFs of PopGetLegacyPowerRequestFlags @ 0x1400B4CA0
 * Callers:
 *     PoRegisterSystemState @ 0x1402411B0 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x1404F19F4 (NtSetThreadExecutionState.c)
 * Callees:
 *     <none>
 */

int __fastcall PopGetLegacyPowerRequestFlags(_DWORD *a1, int a2, int *a3)
{
  int result; // eax
  int v5; // r10d
  unsigned int v6; // r9d
  int v7; // eax
  int v8; // ecx

  result = 0;
  v5 = 0x80000000;
  if ( a1 )
  {
    v6 = -2147483646;
    v7 = a1[9];
    if ( !a1[8] )
      v6 = 0x80000000;
    v8 = v6 | 1;
    if ( !v7 )
      v8 = v6;
    v5 = v8 | 0x40;
    if ( !a1[10] )
      v5 = v8;
    result = (a2 ^ v5) & 0x7FFFFFFF;
  }
  if ( a3 )
    *a3 = v5;
  return result;
}
