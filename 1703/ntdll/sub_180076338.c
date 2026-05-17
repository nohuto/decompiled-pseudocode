/*
 * XREFs of sub_180076338 @ 0x180076338
 * Callers:
 *     sub_180076258 @ 0x180076258 (sub_180076258.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180076338(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax

  v2 = *(_QWORD *)(a2 - 152);
  if ( a1 < v2 )
    return 0xFFFFFFFFLL;
  else
    return a1 >= v2 + *(unsigned int *)(a2 - 136);
}
