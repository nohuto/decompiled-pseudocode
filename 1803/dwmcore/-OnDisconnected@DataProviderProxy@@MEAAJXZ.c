/*
 * XREFs of ?OnDisconnected@DataProviderProxy@@MEAAJXZ @ 0x180169A50
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z @ 0x180154628 (-RemoveDataProvider@DataProviderManager@@QEAAJPEAVDataProviderProxy@@@Z.c)
 */

__int64 __fastcall DataProviderProxy::OnDisconnected(DataProviderManager **this)
{
  if ( this[8] )
    DataProviderManager::RemoveDataProvider(this[8], (struct DataProviderProxy *)this);
  return 0LL;
}
