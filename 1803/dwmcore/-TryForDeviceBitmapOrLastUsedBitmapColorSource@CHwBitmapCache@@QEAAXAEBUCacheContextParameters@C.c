/*
 * XREFs of ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801E88D4
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x1801E875C (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801E8948 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 */

_DWORD *__fastcall CHwBitmapCache::TryForDeviceBitmapOrLastUsedBitmapColorSource(
        CHwBitmapCache *this,
        _DWORD *a2,
        struct MilRectF *a3,
        __int64 a4,
        _QWORD *a5,
        struct CHwBitmapColorSource **a6)
{
  _DWORD *result; // rax

  *a5 = 0LL;
  if ( !*((_QWORD *)this + 61) )
    return (_DWORD *)CHwBitmapCache::TryForLastUsedBitmapColorSource(this, (__int64)a5, a6);
  result = CHwBitmapCache::TryForDeviceBitmapColorSource((__int64)this, a2, a3, a4, a5);
  if ( !*a5 )
    return (_DWORD *)CHwBitmapCache::TryForLastUsedBitmapColorSource(this, (__int64)a5, a6);
  return result;
}
