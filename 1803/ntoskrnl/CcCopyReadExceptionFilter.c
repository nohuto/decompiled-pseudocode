/*
 * XREFs of CcCopyReadExceptionFilter @ 0x14021FE44
 * Callers:
 *     CcCompleteAsyncRead @ 0x1400C1278 (CcCompleteAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x140112290 (CcMapAndCopyInToCache.c)
 *     CcCopyBytesToUserBuffer @ 0x14011FF30 (CcCopyBytesToUserBuffer.c)
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
