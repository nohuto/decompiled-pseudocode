/*
 * XREFs of ?InternalFinalConstructRelease@CSpatialCrossProcessClientOutputEndpoint@@QEAAXXZ @ 0x140058E54
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058B30 (-CreateInstance@-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@AT.c)
 * Callees:
 *     <none>
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::InternalFinalConstructRelease(
        CSpatialCrossProcessClientOutputEndpoint *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 248);
}
