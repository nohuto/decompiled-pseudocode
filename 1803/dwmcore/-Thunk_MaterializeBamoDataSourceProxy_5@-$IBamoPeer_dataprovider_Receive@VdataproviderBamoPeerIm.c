/*
 * XREFs of ?Thunk_MaterializeBamoDataSourceProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_MaterializeBamoDataSourceProxy_5(
        BamoImpl::dataproviderBamoPeerImpl *a1,
        unsigned int **a2,
        __int64 a3,
        struct Microsoft::Bamo::BamoProxy **a4)
{
  return BamoImpl::dataproviderBamoPeerImpl::MaterializeBamoDataSourceProxy(
           a1,
           (struct Microsoft::BamoImpl::BamoConnectionImpl *)**a2,
           a3,
           a4);
}
