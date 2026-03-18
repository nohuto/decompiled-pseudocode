/*
 * XREFs of ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18007E380
 * Callers:
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x18007E920 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18007E97C (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801AEAA8 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801AF270 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18007E6CC (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CHwBitmapCache::FormatCacheEntry *__fastcall CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(
        CHwBitmapCache::FormatCacheEntry *this)
{
  char *v2; // rcx
  CInputSinkStruct::InputQueueInfo *v3; // rbx
  CHwBitmapCache::FormatCacheEntry *result; // rax

  v2 = (char *)this + 16;
  v3 = (CInputSinkStruct::InputQueueInfo *)(v2 + 32);
  DynArrayImpl<1>::DynArrayImpl<1>(v2, v2 + 32, 4LL);
  `vector constructor iterator'(v3, 72LL, 4LL, CHwBitmapCache::CacheEntry::CacheEntry);
  *(_DWORD *)this = 0;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
