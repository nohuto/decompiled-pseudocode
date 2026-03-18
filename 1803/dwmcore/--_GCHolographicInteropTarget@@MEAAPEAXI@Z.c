/*
 * XREFs of ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x1801FDA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CHolographicInteropTarget@@MEAA@XZ @ 0x1801FD9AC (--1CHolographicInteropTarget@@MEAA@XZ.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::`scalar deleting destructor'(
        CHolographicInteropTarget *this,
        char a2)
{
  CHolographicInteropTarget::~CHolographicInteropTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
