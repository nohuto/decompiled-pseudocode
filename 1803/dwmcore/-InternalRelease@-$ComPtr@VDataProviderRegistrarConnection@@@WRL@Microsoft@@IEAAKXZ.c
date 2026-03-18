/*
 * XREFs of ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180153A54
 * Callers:
 *     ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014A4C0 (-OnShutdown@CComposition@@QEAAXXZ.c)
 *     ??1DataProviderManager@@EEAA@XZ @ 0x180152F04 (--1DataProviderManager@@EEAA@XZ.c)
 * Callees:
 *     ?Release@BamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18015459C (-Release@BamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(
        Microsoft::Bamo::BamoConnection **a1)
{
  Microsoft::Bamo::BamoConnection *v1; // rdx
  unsigned int result; // eax

  v1 = *a1;
  result = 0;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::Bamo::BamoConnection::Release(v1);
  }
  return result;
}
