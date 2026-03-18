/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x1404A6C50
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1404A68D0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401E0844 (CcCopyReadExceptionFilter.c)
 *     FsRtlNormalizeNtstatus @ 0x1401E79E0 (FsRtlNormalizeNtstatus.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *Src, size_t Size)
{
  unsigned int v3; // ebx
  unsigned int v6; // r15d

  v3 = Size;
  while ( v3 )
  {
    if ( v3 >= 0x10000 )
      v6 = 0x10000;
    else
      v6 = v3;
    memmove(a1, Src, v6);
    v3 -= v6;
    Src += v6;
    a1 += v6;
  }
  return 0LL;
}
