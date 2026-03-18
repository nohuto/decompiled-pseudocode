/*
 * XREFs of ?TryForDeviceBitmapOrLastUsedBitmapColorSource@CHwBitmapCache@@QEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x18007EBA8
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180086734 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@@Z @ 0x18007EA84 (-TryForDeviceBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSou.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801AF410 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 */

char __fastcall CHwBitmapCache::TryForDeviceBitmapOrLastUsedBitmapColorSource(
        CHwBitmapCache *this,
        _DWORD *a2,
        struct MilRectF *a3,
        __int64 a4,
        _QWORD *a5,
        struct CHwBitmapColorSource **a6)
{
  _UNKNOWN **v6; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v6 = &retaddr;
  *a5 = 0LL;
  if ( *((_QWORD *)this + 61) )
    LOBYTE(v6) = CHwBitmapCache::TryForDeviceBitmapColorSource((__int64)this, a2, a3, a4, a5);
  if ( !*a5 )
    LOBYTE(v6) = CHwBitmapCache::TryForLastUsedBitmapColorSource(this, (__int64)a5, a6);
  return (char)v6;
}
