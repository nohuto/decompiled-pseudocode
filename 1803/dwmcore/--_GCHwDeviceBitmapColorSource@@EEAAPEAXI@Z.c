/*
 * XREFs of ??_GCHwDeviceBitmapColorSource@@EEAAPEAXI@Z @ 0x1800CDC60
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??1CHwBitmapColorSource@@MEAA@XZ @ 0x1800CDE4C (--1CHwBitmapColorSource@@MEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CHwDeviceBitmapColorSource *__fastcall CHwDeviceBitmapColorSource::`scalar deleting destructor'(
        CHwDeviceBitmapColorSource *this,
        char a2)
{
  CMILRefCountBase *v4; // rcx

  *(_QWORD *)this = &CHwDeviceBitmapColorSource::`vftable'{for `CHwTexturedColorSource'};
  *((_QWORD *)this + 14) = &CHwDeviceBitmapColorSource::`vftable'{for `IDeviceResource'};
  v4 = (CMILRefCountBase *)*((_QWORD *)this + 43);
  if ( v4 )
    CMILRefCountBase::Release(v4);
  CHwBitmapColorSource::~CHwBitmapColorSource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
