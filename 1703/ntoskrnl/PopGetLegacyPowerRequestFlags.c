/*
 * XREFs of PopGetLegacyPowerRequestFlags @ 0x140039288
 * Callers:
 *     PoRegisterSystemState @ 0x14022DBD0 (PoRegisterSystemState.c)
 *     NtSetThreadExecutionState @ 0x140459BC0 (NtSetThreadExecutionState.c)
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
