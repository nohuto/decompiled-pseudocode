/*
 * XREFs of CcCopyReadExceptionFilter @ 0x1401DD8D4
 * Callers:
 *     CcCompleteAsyncRead @ 0x14002887C (CcCompleteAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x14009EF20 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x140514500 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCopyReadExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
