/*
 * XREFs of ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18016EA5C
 * Callers:
 *     ??_ECPrimitiveColor@@O7EAAPEAXI@Z @ 0x1800DD5F0 (--_ECPrimitiveColor@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CPrimitiveColor@@MEAA@XZ @ 0x18019E04C (--1CPrimitiveColor@@MEAA@XZ.c)
 */

CPrimitiveColor *__fastcall CPrimitiveColor::`scalar deleting destructor'(CPrimitiveColor *this, char a2)
{
  CPrimitiveColor::~CPrimitiveColor(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
