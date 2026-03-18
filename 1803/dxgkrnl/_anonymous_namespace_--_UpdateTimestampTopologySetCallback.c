/*
 * XREFs of _anonymous_namespace_::_UpdateTimestampTopologySetCallback @ 0x1C0111800
 * Callers:
 *     <none>
 * Callees:
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1C00B1870 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 */

__int64 __fastcall anonymous_namespace_::_UpdateTimestampTopologySetCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *a1,
        void *a2)
{
  return CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(a1);
}
