/*
 * XREFs of RtlFindAceByType @ 0x18004A2D0
 * Callers:
 *     sub_180047D44 @ 0x180047D44 (sub_180047D44.c)
 *     sub_18004970C @ 0x18004970C (sub_18004970C.c)
 *     sub_18004AC04 @ 0x18004AC04 (sub_18004AC04.c)
 *     sub_18004B070 @ 0x18004B070 (sub_18004B070.c)
 *     sub_18004FBBC @ 0x18004FBBC (sub_18004FBBC.c)
 *     RtlIsUntrustedObject @ 0x1800E5310 (RtlIsUntrustedObject.c)
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v4; // r9
  unsigned int v5; // r10d

  if ( !a1 )
    return 0LL;
  v4 = (unsigned __int8 *)(a1 + 8);
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  while ( !a3 )
  {
    if ( *v4 == a2 )
      return v4;
LABEL_9:
    ++v5;
    v4 += *((unsigned __int16 *)v4 + 1);
    if ( v5 >= *(unsigned __int16 *)(a1 + 4) )
      return 0LL;
  }
  if ( v5 < *a3 || *v4 != a2 )
    goto LABEL_9;
  *a3 = v5;
  return v4;
}
