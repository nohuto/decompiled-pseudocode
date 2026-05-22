/*
 * XREFs of ??_GBamoInputSystemProxyImpl@BamoImpl@@UEAAPEAXI@Z @ 0x18001DF60
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x18001DE88 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputSystemProxyImpl *__fastcall BamoImpl::BamoInputSystemProxyImpl::`scalar deleting destructor'(
        BamoImpl::BamoInputSystemProxyImpl *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
