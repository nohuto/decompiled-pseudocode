/*
 * XREFs of ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x1801887E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResource@@MEAA@XZ @ 0x180051198 (--1CResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180154D74 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 */

CDataSourceReader *__fastcall CDataSourceReader::`vector deleting destructor'(CDataSourceReader *this, char a2)
{
  bool v2; // zf

  v2 = (*((_BYTE *)this + 72) & 1) == 0;
  *(_QWORD *)this = &CDataSourceReader::`vftable';
  if ( !v2 )
  {
    DataProviderManager::UnregisterReaderForDataSource(
      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1320LL),
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 8),
      this);
    *((_BYTE *)this + 72) &= ~1u;
  }
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
