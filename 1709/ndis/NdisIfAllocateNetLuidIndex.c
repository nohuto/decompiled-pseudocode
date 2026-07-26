/*
 * XREFs of NdisIfAllocateNetLuidIndex @ 0x1C00DB780
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00B4408 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

NDIS_STATUS __stdcall NdisIfAllocateNetLuidIndex(NET_IFTYPE ifType, PUINT32 pNetLuidIndex)
{
  return ndisIfAllocateAndVerifyNetLuidIndex(ifType, pNetLuidIndex, 1u, 1);
}
