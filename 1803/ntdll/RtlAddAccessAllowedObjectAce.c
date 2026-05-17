/*
 * XREFs of RtlAddAccessAllowedObjectAce @ 0x1800E2350
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E2E1C @ 0x1800E2E1C (sub_1800E2E1C.c)
 */

__int64 __fastcall RtlAddAccessAllowedObjectAce(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        void *Src,
        __int64 a6,
        unsigned __int8 *a7)
{
  if ( Src || a6 )
    return sub_1800E2E1C((_DWORD)a1, a2, a3, a4, (__int64)Src, a6, (__int64)a7, 5);
  else
    return sub_180037408(a1, a2, a3, a4, a7, 0);
}
