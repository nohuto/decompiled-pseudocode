/*
 * XREFs of realloc_0 @ 0x1800D3FD2
 * Callers:
 *     _recalloc @ 0x1800D3F80 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl realloc_0(void *Block, size_t Size)
{
  return realloc(Block, Size);
}
