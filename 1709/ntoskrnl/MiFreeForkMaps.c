/*
 * XREFs of MiFreeForkMaps @ 0x1400D0710
 * Callers:
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 * Callees:
 *     MiUnmapSinglePage @ 0x1400CD154 (MiUnmapSinglePage.c)
 *     MiFinishLastForkPageTable @ 0x1400CED2C (MiFinishLastForkPageTable.c)
 */

__int64 __fastcall MiFreeForkMaps(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v5; // rcx
  __int64 result; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdi

  v5 = *(_QWORD *)(a1 + 56);
  if ( v5 )
    result = MiUnmapSinglePage(v5, a2, a3, a4);
  v7 = (__int64 *)(a1 + 8);
  v8 = 3LL;
  do
  {
    if ( *v7 != -1 )
      result = MiFinishLastForkPageTable(v5, *v7);
    ++v7;
    --v8;
  }
  while ( v8 );
  return result;
}
