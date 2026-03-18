/*
 * XREFs of MX6SetBaud @ 0x1402CD590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall MX6SetBaud(__int64 a1, int a2)
{
  if ( a1 && *(_QWORD *)a1 )
    *(_DWORD *)(a1 + 8) = a2;
  return 0;
}
