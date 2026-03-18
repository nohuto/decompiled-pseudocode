/*
 * XREFs of ??_E?$LocalMILObject@VCMILBrushBitmap@@@@UEAAPEAXI@Z @ 0x1801A61E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x18001DA7C (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

dataproviderBamoConnection *__fastcall LocalMILObject<CMILBrushBitmap>::`vector deleting destructor'(
        dataproviderBamoConnection *this,
        char a2)
{
  CMILBrushBitmap::~CMILBrushBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
