/*
 * XREFs of ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x180169498
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169710 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169E24 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180153918 (-GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

unsigned __int64 __fastcall DataProviderHelper::GetUniqueId<BamoDataSourceProxy>(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = *(_DWORD *)(a1 + 40);
  return __PAIR64__(
           Microsoft::Bamo::BamoPeer::GetPeerId(*(Microsoft::Bamo::BamoPeer **)(*(_QWORD *)(a1 + 32) + 16LL)),
           v1);
}
