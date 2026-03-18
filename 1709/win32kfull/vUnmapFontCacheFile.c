/*
 * XREFs of vUnmapFontCacheFile @ 0x1C00C1B34
 * Callers:
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00C1AB0 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bReAllocCacheFile @ 0x1C0142978 (bReAllocCacheFile.c)
 *     bInitCacheTable @ 0x1C0142C64 (bInitCacheTable.c)
 * Callees:
 *     vUnmapFile @ 0x1C00C1B94 (vUnmapFile.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void *vUnmapFontCacheFile()
{
  __int64 v0; // rcx
  __int64 v1; // rdi
  _QWORD *v2; // rbx
  void *result; // rax

  v0 = qword_1C0327748;
  if ( *(_QWORD *)(qword_1C0327748 + 88) )
  {
    if ( *(_QWORD *)qword_1C0327748 )
    {
      v1 = *(_QWORD *)(qword_1C0327748 + 104);
      *(_QWORD *)(qword_1C0327748 + 104) = 0LL;
      vUnmapFile((struct _FILEVIEW *)(v0 + 56));
      v2 = (_QWORD *)qword_1C0327748;
      result = memset((void *)(qword_1C0327748 + 56), 0, 0x50uLL);
      *v2 = 0LL;
      v2[13] = v1;
    }
  }
  return result;
}
