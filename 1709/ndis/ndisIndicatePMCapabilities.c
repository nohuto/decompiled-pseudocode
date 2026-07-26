/*
 * XREFs of ndisIndicatePMCapabilities @ 0x1C00DF3F0
 * Callers:
 *     ndisQueuedUpdatePMCapabilities @ 0x1C00E0CF0 (ndisQueuedUpdatePMCapabilities.c)
 * Callees:
 *     NdisMIndicateStatusEx @ 0x1C0011180 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     ndisRejectUnsupportedPMOffloads @ 0x1C00E0E74 (ndisRejectUnsupportedPMOffloads.c)
 *     ndisRejectUnsupportedWoLPatterns @ 0x1C00E1068 (ndisRejectUnsupportedWoLPatterns.c)
 */

__int64 __fastcall ndisIndicatePMCapabilities(_BYTE *MiniportAdapterHandle)
{
  char *v1; // rbx
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+20h] [rbp-88h] BYREF

  v1 = MiniportAdapterHandle + 1060;
  MiniportAdapterHandle[1061] = 2;
  MiniportAdapterHandle[1060] = 0x80;
  *((_WORD *)MiniportAdapterHandle + 531) = 60;
  memset(&StatusIndication, 0, sizeof(StatusIndication));
  StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
  StatusIndication.SourceHandle = MiniportAdapterHandle;
  StatusIndication.StatusCode = 1073938515;
  StatusIndication.StatusBuffer = v1;
  StatusIndication.StatusBufferSize = 60;
  NdisMIndicateStatusEx(MiniportAdapterHandle, &StatusIndication);
  ndisRejectUnsupportedPMOffloads(MiniportAdapterHandle);
  return ndisRejectUnsupportedWoLPatterns(MiniportAdapterHandle);
}
