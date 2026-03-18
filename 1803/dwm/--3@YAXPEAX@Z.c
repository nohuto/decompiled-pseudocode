/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140003D64
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x1400043E4 (--3@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
