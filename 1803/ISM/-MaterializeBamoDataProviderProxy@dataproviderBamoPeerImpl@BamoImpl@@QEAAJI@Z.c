/*
 * XREFs of ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18008EB1C
 * Callers:
 *     ?Thunk_MaterializeBamoDataProviderProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008F730 (-Thunk_MaterializeBamoDataProviderProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeer.c)
 * Callees:
 *     ?GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ @ 0x18000AD90 (-GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ.c)
 *     ?CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x18008D718 (-CreateDataProviderProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEA.c)
 */

void __fastcall __noreturn BamoImpl::dataproviderBamoPeerImpl::MaterializeBamoDataProviderProxy(
        BamoImpl::dataproviderBamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  char v4; // [rsp+40h] [rbp+18h] BYREF

  Connection = Microsoft::BamoImpl::BamoPeerImpl::GetConnection(this);
  BamoImpl::CreateDataProviderProxy(Connection, v2, (struct Microsoft::Bamo::BamoPeer *)&v4, v3);
}
