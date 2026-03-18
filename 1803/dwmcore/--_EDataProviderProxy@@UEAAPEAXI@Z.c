/*
 * XREFs of ??_EDataProviderProxy@@UEAAPEAXI@Z @ 0x1801696C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ??1DataProviderProxy@@UEAA@XZ @ 0x1801695EC (--1DataProviderProxy@@UEAA@XZ.c)
 */

DataProviderProxy *__fastcall DataProviderProxy::`vector deleting destructor'(DataProviderProxy *this, char a2)
{
  DataProviderProxy::~DataProviderProxy(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
