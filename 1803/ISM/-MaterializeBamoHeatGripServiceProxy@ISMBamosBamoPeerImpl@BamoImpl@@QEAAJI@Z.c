/*
 * XREFs of ?MaterializeBamoHeatGripServiceProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18001E47C
 * Callers:
 *     ?Thunk_MaterializeBamoHeatGripServiceProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001F5C0 (-Thunk_MaterializeBamoHeatGripServiceProxy_0@-$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@.c)
 * Callees:
 *     ?GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ @ 0x18000AD90 (-GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ.c)
 *     ?CreateHeatGripServiceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x18001DDE4 (-CreateHeatGripServiceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@.c)
 */

void __fastcall __noreturn BamoImpl::ISMBamosBamoPeerImpl::MaterializeBamoHeatGripServiceProxy(
        BamoImpl::ISMBamosBamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  char v4; // [rsp+40h] [rbp+18h] BYREF

  Connection = Microsoft::BamoImpl::BamoPeerImpl::GetConnection(this);
  BamoImpl::CreateHeatGripServiceProxy(Connection, v2, (struct Microsoft::Bamo::BamoPeer *)&v4, v3);
}
