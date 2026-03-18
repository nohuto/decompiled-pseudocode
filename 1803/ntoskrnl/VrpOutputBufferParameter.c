/*
 * XREFs of VrpOutputBufferParameter @ 0x140708278
 * Callers:
 *     VrpPostEnumerateKey @ 0x14070A514 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x14070B0E8 (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
