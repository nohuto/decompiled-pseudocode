/*
 * XREFs of ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800C4E00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x180045120 (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

CHwDeviceBitmapColorSource *__fastcall CHwDeviceBitmapColorSource::`scalar deleting destructor'(
        CHwDeviceBitmapColorSource *this,
        char a2)
{
  CMILRefCountBase *v4; // rcx

  *(_QWORD *)this = &CHwDeviceBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 13) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 42);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
