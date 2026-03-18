/*
 * XREFs of ??_GCAtlasImageSource@@MEAAPEAXI@Z @ 0x180013080
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasEntry@@QEAA@XZ @ 0x180013224 (--1CAtlasEntry@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CAtlasImageSource *__fastcall CAtlasImageSource::`scalar deleting destructor'(CAtlasImageSource *this)
{
  char v2; // r8

  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &CAtlasImageSource::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CAtlasImageSource::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 3) = &CAtlasImageSource::`vftable'{for `IBitmapRealization'};
  CAtlasEntry::~CAtlasEntry((CAtlasImageSource *)((char *)this + 32));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (v2 & 1) != 0 )
  {
    if ( (v2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
