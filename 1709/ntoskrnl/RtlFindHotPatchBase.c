/*
 * XREFs of RtlFindHotPatchBase @ 0x1407274FC
 * Callers:
 *     MiPrepareHotPatchBaseImageList @ 0x1406E1D14 (MiPrepareHotPatchBaseImageList.c)
 *     RtlFindHotPatchInformation @ 0x140727530 (RtlFindHotPatchInformation.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlFindHotPatchBase(unsigned int *a1, unsigned int a2)
{
  unsigned __int64 v2; // rdx

  if ( a2 >= a1[4] )
    return 0LL;
  v2 = *(unsigned int *)((char *)&a1[a2] + a1[3]);
  if ( v2 >= 0xFFFFFFFFFFFFFFE0uLL || v2 == 0 || v2 + 32 > a1[1] )
    return 0LL;
  else
    return (char *)a1 + v2;
}
