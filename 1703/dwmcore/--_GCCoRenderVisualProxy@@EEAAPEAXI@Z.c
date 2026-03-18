/*
 * XREFs of ??_GCCoRenderVisualProxy@@EEAAPEAXI@Z @ 0x18013FE94
 * Callers:
 *     ??_ECCoRenderVisualProxy@@G7EAAPEAXI@Z @ 0x1800D5510 (--_ECCoRenderVisualProxy@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
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
