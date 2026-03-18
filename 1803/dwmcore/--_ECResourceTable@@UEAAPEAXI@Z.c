/*
 * XREFs of ??_ECResourceTable@@UEAAPEAXI@Z @ 0x18002D030
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceTable@@UEAA@XZ @ 0x18002D134 (--1CResourceTable@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CResourceTable *__fastcall CResourceTable::`vector deleting destructor'(CResourceTable *this, char a2)
{
  CResourceTable::~CResourceTable(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
