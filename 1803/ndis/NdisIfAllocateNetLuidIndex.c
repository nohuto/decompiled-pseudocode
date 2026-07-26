/*
 * XREFs of NdisIfAllocateNetLuidIndex @ 0x1C00DD340
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00C0D64 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 */

NDIS_STATUS __stdcall NdisIfAllocateNetLuidIndex(NET_IFTYPE ifType, PUINT32 pNetLuidIndex)
{
  return ndisIfAllocateAndVerifyNetLuidIndex(ifType, pNetLuidIndex, 1u, 1);
}
