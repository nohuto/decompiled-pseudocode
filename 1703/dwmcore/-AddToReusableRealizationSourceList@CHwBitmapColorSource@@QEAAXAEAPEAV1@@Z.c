/*
 * XREFs of ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x18019ECFC
 * Callers:
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1800B2E98 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x18019C6F0 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CHwBitmapColorSource::AddToReusableRealizationSourceList(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource **a2)
{
  CMILRefCountBase *v4; // rcx

  v4 = (CMILRefCountBase *)*((_QWORD *)this + 33);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  *((_QWORD *)this + 33) = *a2;
  *a2 = this;
  (**(void (__fastcall ***)(CHwBitmapColorSource *))this)(this);
}
