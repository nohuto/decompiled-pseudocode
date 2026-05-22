/*
 * XREFs of ?MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18008EB34
 * Callers:
 *     ?Thunk_MaterializeBamoDataSourceProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18008F8B0 (-Thunk_MaterializeBamoDataSourceProxy_5@-$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerIm.c)
 * Callees:
 *     ?GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ @ 0x18000AD90 (-GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ.c)
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x18008D784 (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPE.c)
 */

void __fastcall __noreturn BamoImpl::dataproviderBamoPeerImpl::MaterializeBamoDataSourceProxy(
        BamoImpl::dataproviderBamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  char v4; // [rsp+40h] [rbp+18h] BYREF

  Connection = Microsoft::BamoImpl::BamoPeerImpl::GetConnection(this);
  BamoImpl::CreateDataSourceProxy(Connection, v2, (struct Microsoft::Bamo::BamoPeer *)&v4, v3);
}
