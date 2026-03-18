/*
 * XREFs of ??_E?$TValueResource@NUMILCMD_DOUBLERESOURCE@@$0CP@@@MEAAPEAXI@Z @ 0x18016E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

dataproviderBamoConnection *__fastcall TValueResource<double,MILCMD_DOUBLERESOURCE,47>::`vector deleting destructor'(
        dataproviderBamoConnection *this,
        char a2)
{
  *(_QWORD *)this = &TValueResource<double,MILCMD_DOUBLERESOURCE,47>::`vftable';
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
