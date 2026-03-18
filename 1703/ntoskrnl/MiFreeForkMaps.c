/*
 * XREFs of MiFreeForkMaps @ 0x140001868
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 * Callees:
 *     MiFinishLastForkPageTable @ 0x140002EB4 (MiFinishLastForkPageTable.c)
 *     MiUnmapSinglePage @ 0x1400254D0 (MiUnmapSinglePage.c)
 */

__int64 __fastcall MiFreeForkMaps(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rdi

  if ( *(_QWORD *)(a1 + 56) )
    result = MiUnmapSinglePage();
  v3 = (_QWORD *)(a1 + 8);
  v4 = 3LL;
  do
  {
    if ( *v3 != -1LL )
      result = MiFinishLastForkPageTable();
    ++v3;
    --v4;
  }
  while ( v4 );
  return result;
}
