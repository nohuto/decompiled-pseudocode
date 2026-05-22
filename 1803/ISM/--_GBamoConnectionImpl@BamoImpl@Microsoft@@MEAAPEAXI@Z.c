/*
 * XREFs of ??_GBamoConnectionImpl@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x18001A580
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18001A5B4 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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
