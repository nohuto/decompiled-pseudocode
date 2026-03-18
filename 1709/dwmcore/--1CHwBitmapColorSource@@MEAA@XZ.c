/*
 * XREFs of ??1CHwBitmapColorSource@@MEAA@XZ @ 0x180085390
 * Callers:
 *     ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x180085690 (--_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z.c)
 *     ??_GCHwBitmapColorSource@@MEAAPEAXI@Z @ 0x1801B44B0 (--_GCHwBitmapColorSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180081030 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwBitmapColorSource::~CHwBitmapColorSource(CHwBitmapColorSource *this)
{
  CMILPoolResource *v2; // rcx
  CMILRefCountBase *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &CHwBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 14) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  v2 = (CMILPoolResource *)*((_QWORD *)this + 21);
  if ( v2 )
    CMILPoolResource::Release(v2);
  v3 = (CMILRefCountBase *)*((_QWORD *)this + 34);
  if ( v3 )
    CMILRefCountBase::Release(v3);
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
