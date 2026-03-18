/*
 * XREFs of MiFlushCacheForAttributeChange @ 0x1400CF57C
 * Callers:
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiFlushCacheRange @ 0x140267828 (MiFlushCacheRange.c)
 *     MiInitializeCacheFlushing @ 0x14089D23C (MiInitializeCacheFlushing.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14002E300 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140032530 (MiMapPageInHyperSpaceWorker.c)
 *     KeInvalidateRangeAllCachesNoIpi @ 0x140051C70 (KeInvalidateRangeAllCachesNoIpi.c)
 *     MiFlushHyperSpace @ 0x1400B9164 (MiFlushHyperSpace.c)
 */

_UNKNOWN **__fastcall MiFlushCacheForAttributeChange(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 v6; // rbp
  int v8; // esi
  unsigned __int64 v9; // rbx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a2;
  if ( a2 )
  {
    v8 = -805306366;
    if ( a3 != 2 )
      v8 = -1073741824;
    do
    {
      v9 = MiMapPageInHyperSpaceWorker(a1, 0LL, v8, a4);
      KeInvalidateRangeAllCachesNoIpi(v9, 0x1000u);
      result = (_UNKNOWN **)MiUnmapPageInHyperSpaceWorker(v9, 0x11u, 0x80000000);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 == 3 )
    return (_UNKNOWN **)MiFlushHyperSpace();
  return result;
}
