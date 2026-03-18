/*
 * XREFs of ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x1801EE294
 * Callers:
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1801E7A04 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801E80F8 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CHwBitmapColorSource::AddToReusableRealizationSourceList(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource **a2)
{
  CMILRefCountBase *v4; // rcx

  v4 = (CMILRefCountBase *)*((_QWORD *)this + 34);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  *((_QWORD *)this + 34) = *a2;
  *a2 = this;
  (**(void (__fastcall ***)(CHwBitmapColorSource *))this)(this);
}
