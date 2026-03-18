/*
 * XREFs of ?FindCacheEntry@QDC_CACHE@@AEAAPEAUQDC_CACHE_ENTRY@1@_NI@Z @ 0x1C00D2D78
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00D2C20 (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 * Callees:
 *     <none>
 */

struct QDC_CACHE::QDC_CACHE_ENTRY *__fastcall QDC_CACHE::FindCacheEntry(QDC_CACHE *this, char a2, int a3)
{
  struct QDC_CACHE::QDC_CACHE_ENTRY *result; // rax
  unsigned int i; // ecx
  bool v5; // zf

  result = (QDC_CACHE *)((char *)this + 16);
  for ( i = 0; i < 0x12; ++i )
  {
    if ( a2 )
    {
      if ( !*(_BYTE *)result )
        goto LABEL_4;
      v5 = *((_DWORD *)result + 1) == a3;
    }
    else
    {
      v5 = *(_BYTE *)result == 0;
    }
    if ( v5 )
      return result;
LABEL_4:
    result = (struct QDC_CACHE::QDC_CACHE_ENTRY *)((char *)result + 32);
  }
  return 0LL;
}
