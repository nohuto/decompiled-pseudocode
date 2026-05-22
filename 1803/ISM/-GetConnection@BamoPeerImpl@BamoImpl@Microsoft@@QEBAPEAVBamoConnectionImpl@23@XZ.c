/*
 * XREFs of ?GetConnection@BamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAVBamoConnectionImpl@23@XZ @ 0x18000AD90
 * Callers:
 *     ?MaterializeBamoDragNDropContextualProcessorProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18001E25C (-MaterializeBamoDragNDropContextualProcessorProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?MaterializeBamoHeatGripServiceProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18001E47C (-MaterializeBamoHeatGripServiceProxy@ISMBamosBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18008EB1C (-MaterializeBamoDataProviderProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z @ 0x18008EB34 (-MaterializeBamoDataSourceProxy@dataproviderBamoPeerImpl@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct Microsoft::BamoImpl::BamoConnectionImpl *__fastcall Microsoft::BamoImpl::BamoPeerImpl::GetConnection(
        Microsoft::BamoImpl::BamoPeerImpl *this)
{
  return *(struct Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)this + 3) + 24LL);
}
