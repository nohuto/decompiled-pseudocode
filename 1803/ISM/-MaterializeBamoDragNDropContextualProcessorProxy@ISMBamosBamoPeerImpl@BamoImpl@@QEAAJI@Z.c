/*
 * XREFs of ?MaterializeBamoDragNDropContextualProcessorProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18001E25C
 * Callers:
 *     ?Thunk_MaterializeBamoDragNDropContextualProcessorProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18001F3A0 (-Thunk_MaterializeBamoDragNDropContextualProcessorProxy_0@-$IBamoPeer_ISMBamos_Receive@VISMBamos.c)
 * Callees:
 *     ?GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ @ 0x18000AD90 (-GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ.c)
 *     ?CreateDragNDropContextualProcessorProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x18001DCC4 (-CreateDragNDropContextualProcessorProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBam.c)
 */

void __fastcall __noreturn BamoImpl::ISMBamosBamoPeerImpl::MaterializeBamoDragNDropContextualProcessorProxy(
        BamoImpl::ISMBamosBamoPeerImpl *this)
{
  BamoImpl *Connection; // rax
  struct Microsoft::BamoImpl::BamoConnectionImpl *v2; // rdx
  struct Microsoft::Bamo::BamoProxy **v3; // r9
  char v4; // [rsp+40h] [rbp+18h] BYREF

  Connection = Microsoft::BamoImpl::BamoPeerImpl::GetConnection(this);
  BamoImpl::CreateDragNDropContextualProcessorProxy(Connection, v2, (struct Microsoft::Bamo::BamoPeer *)&v4, v3);
}
