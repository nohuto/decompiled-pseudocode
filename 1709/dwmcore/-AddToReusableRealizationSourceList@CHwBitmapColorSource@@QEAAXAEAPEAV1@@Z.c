/*
 * XREFs of ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x1801B44E0
 * Callers:
 *     ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1801AE968 (-AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x1801AEFC8 (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
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
