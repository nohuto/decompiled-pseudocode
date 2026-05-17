/*
 * XREFs of sub_1800FDD7C @ 0x1800FDD7C
 * Callers:
 *     sub_18000A268 @ 0x18000A268 (sub_18000A268.c)
 *     RtlCreateHeap @ 0x18000CA40 (RtlCreateHeap.c)
 *     sub_1800F0CC0 @ 0x1800F0CC0 (sub_1800F0CC0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FDD7C(__int64 (__fastcall *a1)())
{
  int v1; // edx

  v1 = 0;
  while ( funcs_180095A64[(unsigned __int16)v1] != a1 )
  {
    LOWORD(v1) = v1 + 1;
    if ( (unsigned __int16)v1 >= 2u )
      return 0LL;
  }
  return (unsigned int)(v1 + 1);
}
