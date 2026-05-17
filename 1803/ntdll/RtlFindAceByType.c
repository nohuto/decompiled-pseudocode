/*
 * XREFs of RtlFindAceByType @ 0x1800306C0
 * Callers:
 *     sub_18002EC40 @ 0x18002EC40 (sub_18002EC40.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_180036F7C @ 0x180036F7C (sub_180036F7C.c)
 *     sub_180071344 @ 0x180071344 (sub_180071344.c)
 *     sub_1800785AC @ 0x1800785AC (sub_1800785AC.c)
 *     RtlIsUntrustedObject @ 0x1800DFDC0 (RtlIsUntrustedObject.c)
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
