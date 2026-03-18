/*
 * XREFs of ?Thunk_SetBootstrapProxy_5@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180154D50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z @ 0x180154A28 (-SetBootstrapProxy@BamoConnectionImpl@BamoImpl@Microsoft@@QEAAXPEAVBamoPeerImpl@23@I@Z.c)
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_SetBootstrapProxy_5(
        struct Microsoft::BamoImpl::BamoPeerImpl *a1,
        unsigned int **a2)
{
  Microsoft::BamoImpl::BamoConnectionImpl::SetBootstrapProxy(
    *(Microsoft::BamoImpl::BamoConnectionImpl **)(*((_QWORD *)a1 + 3) + 24LL),
    a1,
    **a2);
  return 0LL;
}
