/*
 * XREFs of NdisClGetProtocolVcContextFromTapiCallId @ 0x1C010F290
 * Callers:
 *     <none>
 * Callees:
 *     ndisUnicodeStringToPointer @ 0x1C0112958 (ndisUnicodeStringToPointer.c)
 */

NDIS_STATUS __stdcall NdisClGetProtocolVcContextFromTapiCallId(
        UNICODE_STRING *TapiCallId,
        PNDIS_HANDLE ProtocolVcContext)
{
  int v2; // eax
  NDIS_STATUS v3; // ecx

  v2 = ndisUnicodeStringToPointer(TapiCallId, ProtocolVcContext);
  v3 = -1073741823;
  if ( v2 >= 0 )
    return 0;
  return v3;
}
