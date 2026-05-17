/*
 * XREFs of RtlAddAccessDeniedObjectAce @ 0x18008E350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddKnownObjectAce @ 0x18008E444 (RtlpAddKnownObjectAce.c)
 */

__int64 __fastcall RtlAddAccessDeniedObjectAce(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        void *Src,
        __int64 a6,
        unsigned __int8 *a7)
{
  if ( Src || a6 )
    return RtlpAddKnownObjectAce(a1, a2, a3, a4, (__int64)Src, a6, (__int64)a7, 6);
  else
    return RtlpAddKnownAce(a1, a2, a3, a4, a7, 1);
}
