/*
 * XREFs of ?Thunk_DisposeProxy_0@?$IBamoPeer_ISMBamos_Receive@VISMBamosBamoPeerImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180020090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IBamoPeer_ISMBamos_Receive<BamoImpl::ISMBamosBamoPeerImpl>::Thunk_DisposeProxy_0(
        Microsoft::BamoImpl::BamoPeerImpl *a1,
        unsigned int **a2)
{
  return Microsoft::BamoImpl::BamoPeerImpl::DisposeProxy(a1, **a2);
}
