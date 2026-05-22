/*
 * XREFs of ??_GdataproviderBamoConnection@@UEAAPEAXI@Z @ 0x18001BE60
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18001A5B4 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

dataproviderBamoConnection *__fastcall dataproviderBamoConnection::`scalar deleting destructor'(
        dataproviderBamoConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl((dataproviderBamoConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
