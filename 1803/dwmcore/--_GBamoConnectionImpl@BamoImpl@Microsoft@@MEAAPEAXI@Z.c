/*
 * XREFs of ??_GBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180153180
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x180152E80 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 */

Microsoft::BamoImpl::BamoConnectionImpl *__fastcall Microsoft::BamoImpl::BamoConnectionImpl::`scalar deleting destructor'(
        Microsoft::BamoImpl::BamoConnectionImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
