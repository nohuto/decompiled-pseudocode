/*
 * XREFs of ?Thunk_AckProxyReference_8@?$IBamoPeer_dataprovider_Receive@VdataproviderBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180020060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_dataprovider_Receive<BamoImpl::dataproviderBamoPeerImpl>::Thunk_AckProxyReference_8(
        Microsoft::BamoImpl::BamoPeerImpl *a1,
        __int64 a2)
{
  return Microsoft::BamoImpl::BamoPeerImpl::AckProxyReference(a1, **(_DWORD **)a2, **(_BYTE **)(a2 + 8));
}
