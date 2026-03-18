/*
 * XREFs of MiInitializeCacheSizes @ 0x14082CB68
 * Callers:
 *     MiInitializeColors @ 0x14082CAE0 (MiInitializeColors.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeCacheSizes()
{
  unsigned int SecondLevelCacheSize; // r8d
  unsigned __int8 SecondLevelCacheAssociativity; // al
  unsigned int v2; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140388528 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  if ( SecondLevelCacheSize )
  {
    _BitScanReverse(&v2, SecondLevelCacheSize);
    SecondLevelCacheSize = 1 << v2;
  }
  if ( SecondLevelCacheSize - 8 > 0xF8 )
  {
    if ( qword_14038B750 < 0x80000 )
      SecondLevelCacheSize = qword_14038B750 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140388544 = SecondLevelCacheSize;
  dword_140388540 = SecondLevelCacheSize - 1;
  dword_140388550 = SecondLevelCacheSize >> 4;
  if ( (SecondLevelCacheSize & 0xF) != 0 )
    dword_140388550 = (SecondLevelCacheSize >> 4) + 1;
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_14038852C = Cache->Size;
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_14038852C < 0x4000 )
    dword_14038852C = 0x4000;
  dword_140388560 = 256;
  return result;
}
