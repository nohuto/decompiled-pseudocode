/*
 * XREFs of ?PayloadSize@UmfdFontCacheEntry@@QEBAIXZ @ 0x1C00BACC4
 * Callers:
 *     ?CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C00BAAF0 (-CreateUsermodeParameters@LoadFontFileRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdFontCacheEntry::PayloadSize(UmfdFontCacheEntry *this)
{
  __int64 v1; // rax

  v1 = *((unsigned int *)this + 2);
  if ( (unsigned int)v1 > 0x10 )
    return v1 - 16;
  else
    return 0LL;
}
