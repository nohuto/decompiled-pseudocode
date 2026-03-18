/*
 * XREFs of ??_G?$TValueResource@U_D3DCOLORVALUE@@UMILCMD_COLORRESOURCE@@$0BF@@@MEAAPEAXI@Z @ 0x18016E2F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

dataproviderBamoConnection *__fastcall TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,21>::`scalar deleting destructor'(
        dataproviderBamoConnection *this,
        char a2)
{
  *(_QWORD *)this = &TValueResource<_D3DCOLORVALUE,MILCMD_COLORRESOURCE,21>::`vftable';
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
