/*
 * XREFs of ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x1801F0148
 * Callers:
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800CC4DC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1801E7A04 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801E80F8 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE550 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwBitmapColorSource::IsValid(CHwBitmapColorSource *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 21);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 69) != 0;
  return result;
}
