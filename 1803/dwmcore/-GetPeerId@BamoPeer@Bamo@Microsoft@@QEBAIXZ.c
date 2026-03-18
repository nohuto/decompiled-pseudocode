/*
 * XREFs of ?GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180153918
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801544F4 (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180154628 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 *     ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x180169498 (--$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18016B810 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BamoPeer::GetPeerId(Microsoft::Bamo::BamoPeer *this)
{
  return *(unsigned int *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BamoPeer *))(*(_QWORD *)this + 8LL))(this) + 36);
}
