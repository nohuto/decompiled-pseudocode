/*
 * XREFs of ?Thunk_AckProxyReference_8@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154B20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_AckProxyReference_8(
        struct Microsoft::BamoImpl::BamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BamoConnectionImpl::AckProxyReference(
           *(Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 24LL),
           a1,
           **a2,
           *(_BYTE *)a2[1]);
}
