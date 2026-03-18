/*
 * XREFs of ?Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801690B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801544F4 (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 */

__int64 __fastcall DataProviderRegistrarPrincipal::Register(
        DataProviderManager **this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  int v4; // r8d

  v4 = DataProviderManager::RegisterDataProvider(this[7], a2, a3);
  if ( v4 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)a2 + 1) + 24LL))((char *)a2 + 8, (unsigned int)v4);
  return 0LL;
}
