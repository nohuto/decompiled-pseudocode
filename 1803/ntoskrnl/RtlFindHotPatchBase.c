/*
 * XREFs of RtlFindHotPatchBase @ 0x14078B108
 * Callers:
 *     MiPrepareHotPatchBaseImageList @ 0x14074CABC (MiPrepareHotPatchBaseImageList.c)
 *     RtlFindHotPatchInformation @ 0x14078B13C (RtlFindHotPatchInformation.c)
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
