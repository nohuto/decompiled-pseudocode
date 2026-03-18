/*
 * XREFs of NtSetTimer2 @ 0x1400E2514
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1400E2540 (ExpSetTimer2.c)
 */

__int64 __fastcall NtSetTimer2(void *a1, __int64 a2, __int64 a3)
{
  if ( a3 )
    return 3221225474LL;
  else
    return ExpSetTimer2(a1);
}
