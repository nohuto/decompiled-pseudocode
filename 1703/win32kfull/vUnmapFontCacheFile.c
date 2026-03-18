/*
 * XREFs of vUnmapFontCacheFile @ 0x1C000928C
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0009204 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bReAllocCacheFile @ 0x1C013BB7C (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0x1C013BE68 (bInitCacheTable.c)
 * Callees:
 *     vUnmapFile @ 0x1C00092F8 (vUnmapFile.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C032C4C8;
  if ( *(_QWORD *)(qword_1C032C4C8 + 136) )
  {
    if ( *(_QWORD *)qword_1C032C4C8 )
    {
      v1 = *(_QWORD *)(qword_1C032C4C8 + 152);
      *(_QWORD *)(qword_1C032C4C8 + 152) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 104));
      v2 = (_QWORD *)qword_1C032C4C8;
      result = memset((void *)(qword_1C032C4C8 + 104), 0, 0x50uLL);
      *v2 = 0LL;
      v2[19] = v1;
    }
  }
  return result;
}
