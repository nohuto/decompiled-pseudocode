/*
 * XREFs of ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x180153090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180152F04 (--1DataProviderManager@@EEAA@XZ.c)
 */

DataProviderManager *__fastcall DataProviderManager::`scalar deleting destructor'(DataProviderManager *this, char a2)
{
  DataProviderManager::~DataProviderManager(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
