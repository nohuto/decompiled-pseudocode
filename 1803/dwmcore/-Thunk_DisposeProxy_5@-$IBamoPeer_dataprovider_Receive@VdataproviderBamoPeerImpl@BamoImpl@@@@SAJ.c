/*
 * XREFs of ?Thunk_DisposeProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_DisposeProxy_5(
        struct Microsoft::BamoImpl::BamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BamoConnectionImpl::DisposeProxy(
           *(Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 24LL),
           a1,
           **a2);
}
