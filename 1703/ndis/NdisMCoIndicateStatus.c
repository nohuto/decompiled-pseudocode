/*
 * XREFs of NdisMCoIndicateStatus @ 0x1C0108F50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     ndisCoIndicateStatusInternal @ 0x1C01091F4 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatus(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        ULONG StatusBufferSize)
{
  _QWORD v8[14]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_(0x33u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
  memset(v8, 0, sizeof(v8));
  LODWORD(v8[7]) = StatusBufferSize;
  LODWORD(v8[0]) = 7340440;
  v8[1] = MiniportAdapterHandle;
  HIDWORD(v8[2]) = GeneralStatus;
  v8[6] = StatusBuffer;
  ndisCoIndicateStatusInternal((int)MiniportAdapterHandle);
  if ( (unsigned __int8)byte_1C009261A >= 4u )
    WPP_SF_(0x34u, &WPP_a122a54394bd3dbe970a397dccec41bf_Traceguids);
}
