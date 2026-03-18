/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x140250D60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall RtlWriteNonVolatileMemory(char a1, void *a2, const void *a3, size_t a4)
{
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  memmove(a2, a3, a4);
  return 0LL;
}
