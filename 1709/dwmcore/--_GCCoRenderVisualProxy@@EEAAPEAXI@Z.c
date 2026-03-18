/*
 * XREFs of ??_GCCoRenderVisualProxy@@EEAAPEAXI@Z @ 0x1801292F8
 * Callers:
 *     ??_ECCoRenderVisualProxy@@G7EAAPEAXI@Z @ 0x1800C5E40 (--_ECCoRenderVisualProxy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CCoRenderVisualProxy *__fastcall CCoRenderVisualProxy::`scalar deleting destructor'(
        CCoRenderVisualProxy *this,
        char a2)
{
  *(_QWORD *)this = &CCoRenderVisualProxy::`vftable'{for `IDWMCoRenderVisualProxy'};
  *((_QWORD *)this + 1) = &CCoRenderVisualProxy::`vftable'{for `CMILCOMBase'};
  ReleaseInterface<IBitmapLock>((__int64 *)this + 3);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 4);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
