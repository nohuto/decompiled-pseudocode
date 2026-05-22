/*
 * XREFs of ??_EBamoInputSystemPrincipalImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180021DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ @ 0x180021304 (--1BamoInputSystemPrincipalImpl@BamoImpl@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

BamoImpl::BamoInputSystemPrincipalImpl *__fastcall BamoImpl::BamoInputSystemPrincipalImpl::`vector deleting destructor'(
        BamoImpl::BamoInputSystemPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  BamoImpl::BamoInputSystemPrincipalImpl::~BamoInputSystemPrincipalImpl(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this);
  return this;
}
