/*
 * XREFs of ??_ECSnapshot@@MEAAPEAXI@Z @ 0x1801A3C50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CSnapshot@@MEAA@XZ @ 0x1801A3BAC (--1CSnapshot@@MEAA@XZ.c)
 */

CSnapshot *__fastcall CSnapshot::`vector deleting destructor'(CSnapshot *this, char a2)
{
  CSnapshot::~CSnapshot(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
