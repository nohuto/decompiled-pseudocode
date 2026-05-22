/*
 * XREFs of ??_GAnimationDataProviderConnection@@UEAAPEAXI@Z @ 0x18008F690
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ @ 0x18001A5B4 (--1BamoConnectionImpl@BamoImpl@Microsoft@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

AnimationDataProviderConnection *__fastcall AnimationDataProviderConnection::`scalar deleting destructor'(
        AnimationDataProviderConnection *this,
        char a2)
{
  Microsoft::BamoImpl::BamoConnectionImpl::~BamoConnectionImpl((AnimationDataProviderConnection *)((char *)this + 8));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
