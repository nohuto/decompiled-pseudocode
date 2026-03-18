/*
 * XREFs of ??_G?$LocalMILObject@VCMILBrushSolid@@@@UEAAPEAXI@Z @ 0x18016E160
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

dataproviderBamoConnection *__fastcall LocalMILObject<CMILBrushSolid>::`scalar deleting destructor'(
        dataproviderBamoConnection *a1,
        char a2)
{
  *((_QWORD *)a1 + 3) = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  *((_QWORD *)a1 + 6) = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *(_QWORD *)a1 = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(a1);
    else
      operator delete(a1);
  }
  return a1;
}
