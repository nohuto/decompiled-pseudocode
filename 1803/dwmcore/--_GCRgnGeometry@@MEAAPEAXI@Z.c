/*
 * XREFs of ??_GCRgnGeometry@@MEAAPEAXI@Z @ 0x18002AB80
 * Callers:
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ??1CRgnGeometry@@MEAA@XZ @ 0x18002ADC0 (--1CRgnGeometry@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CRgnGeometry *__fastcall CRgnGeometry::`scalar deleting destructor'(CRgnGeometry *this, char a2)
{
  CRgnGeometry::~CRgnGeometry(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
