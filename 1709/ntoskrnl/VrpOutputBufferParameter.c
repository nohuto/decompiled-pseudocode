/*
 * XREFs of VrpOutputBufferParameter @ 0x1406A3C08
 * Callers:
 *     VrpPostEnumerateKey @ 0x1406A5E80 (VrpPostEnumerateKey.c)
 *     VrpPostQueryKey @ 0x1406A6A5C (VrpPostQueryKey.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 */

__int64 __fastcall VrpOutputBufferParameter(char a1, void *a2, unsigned int a3, const void **a4)
{
  if ( a1 == 1 )
    memmove(a2, *a4, a3);
  return 0LL;
}
