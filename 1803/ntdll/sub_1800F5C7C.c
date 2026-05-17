/*
 * XREFs of sub_1800F5C7C @ 0x1800F5C7C
 * Callers:
 *     sub_180001F34 @ 0x180001F34 (sub_180001F34.c)
 * Callees:
 *     sub_1800F5AD0 @ 0x1800F5AD0 (sub_1800F5AD0.c)
 *     sub_1800F5D00 @ 0x1800F5D00 (sub_1800F5D00.c)
 *     sub_1800F5F08 @ 0x1800F5F08 (sub_1800F5F08.c)
 */

__int64 __fastcall sub_1800F5C7C(__int64 a1, int *a2, int *a3, unsigned int a4, int a5)
{
  int v5; // eax
  int v10; // ebx
  int v11; // eax

  v5 = *a2;
  if ( !*a2 )
  {
    v10 = *a3;
    if ( !*a3 )
    {
      v10 = sub_1800F5D00(a1, a4);
      *a3 = v10;
    }
    v11 = sub_1800F5F08(a1, a4);
    v5 = sub_1800F5AD0(a1, v10, v11);
    *a2 = v5;
  }
  return sub_1800F5AD0(a1, v5, a5);
}
