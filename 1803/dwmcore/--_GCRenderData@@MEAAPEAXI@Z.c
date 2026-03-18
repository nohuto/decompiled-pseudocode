/*
 * XREFs of ??_GCRenderData@@MEAAPEAXI@Z @ 0x1800559D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRenderData@@MEAA@XZ @ 0x1800572D0 (--1CRenderData@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CRenderData *__fastcall CRenderData::`scalar deleting destructor'(CRenderData *this, char a2)
{
  CRenderData::~CRenderData(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
