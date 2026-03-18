/*
 * XREFs of ??_ECShapeTree@@UEAAPEAXI@Z @ 0x1801A38D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1CContainerVectorShape@@MEAA@XZ @ 0x1801882D4 (--1CContainerVectorShape@@MEAA@XZ.c)
 */

CShapeTree *__fastcall CShapeTree::`vector deleting destructor'(CShapeTree *this, char a2)
{
  CContainerVectorShape::~CContainerVectorShape(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
