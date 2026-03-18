/*
 * XREFs of PspQueryProcessTimerCounters @ 0x1406E0590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspQueryProcessTimerCounters(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  *a2 = a1[494];
  a2[1] = a1[495];
  result = (unsigned int)a1[496];
  a2[2] = result;
  return result;
}
