/*
 * XREFs of ??_ECD3DLockableTexture@@MEAAPEAXI@Z @ 0x1801EB240
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD3DTexture@@MEAA@XZ @ 0x1800216A8 (--1CD3DTexture@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CD3DLockableTexture *__fastcall CD3DLockableTexture::`vector deleting destructor'(CD3DLockableTexture *this, char a2)
{
  *(_QWORD *)this = &CD3DLockableTexture::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  CD3DTexture::~CD3DTexture(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
