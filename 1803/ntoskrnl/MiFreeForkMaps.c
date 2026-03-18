/*
 * XREFs of MiFreeForkMaps @ 0x140140BF4
 * Callers:
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 * Callees:
 *     MiUnmapSinglePage @ 0x140138538 (MiUnmapSinglePage.c)
 *     MiFinishLastForkPageTable @ 0x140142578 (MiFinishLastForkPageTable.c)
 */

char __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v2; // rcx
  char result; // al
  _QWORD *v4; // rbx
  __int64 v5; // rdi

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    result = MiUnmapSinglePage(v2);
  v4 = (_QWORD *)(a1 + 8);
  v5 = 3LL;
  do
  {
    if ( *v4 != -1LL )
      result = MiFinishLastForkPageTable();
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
