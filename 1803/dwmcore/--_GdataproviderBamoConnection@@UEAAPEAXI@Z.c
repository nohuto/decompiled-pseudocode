/*
 * XREFs of ??_GdataproviderBamoConnection@@UEAAPEAXI@Z @ 0x180153140
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180152E80 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
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
