/*
 * XREFs of ??_EBamoInputSystemProxy@@MEAAPEAXI@Z @ 0x18001DE50
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ @ 0x18001DE88 (--1BamoInputSystemProxyImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoInputSystemProxy *__fastcall BamoInputSystemProxy::`vector deleting destructor'(
        BamoInputSystemProxy *this,
        char a2)
{
  BamoImpl::BamoInputSystemProxyImpl::~BamoInputSystemProxyImpl((BamoInputSystemProxy *)((char *)this + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
