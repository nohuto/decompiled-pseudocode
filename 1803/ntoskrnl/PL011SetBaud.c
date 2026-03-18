/*
 * XREFs of PL011SetBaud @ 0x1402CE4C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PL011SetBaud(__int64 a1, int a2)
{
  if ( !a1 || !*(_QWORD *)a1 )
    return 0;
  *(_DWORD *)(a1 + 8) = a2;
  return 1;
}
