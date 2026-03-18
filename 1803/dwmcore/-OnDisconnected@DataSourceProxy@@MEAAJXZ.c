/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x18016B650
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169E24 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataProviderProxy **this)
{
  if ( this[23] )
    DataProviderProxy::RemoveSourceEntry(this[23], (struct BamoDataSourceProxy *)this);
  return 0LL;
}
