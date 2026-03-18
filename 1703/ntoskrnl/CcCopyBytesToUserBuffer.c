/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x140514500
 * Callers:
 *     CcMapAndCopyFromCache @ 0x1405141C0 (CcMapAndCopyFromCache.c)
 * Callees:
 *     FsRtlNormalizeNtstatus @ 0x140131DD0 (FsRtlNormalizeNtstatus.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401DD8D4 (CcCopyReadExceptionFilter.c)
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
