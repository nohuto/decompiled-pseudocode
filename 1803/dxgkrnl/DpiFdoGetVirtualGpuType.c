/*
 * XREFs of DpiFdoGetVirtualGpuType @ 0x1C01F4D24
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C003ACC4 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiFdoDispatchIoctl @ 0x1C01F2FD0 (DpiFdoDispatchIoctl.c)
 *     DpiSriovAttach @ 0x1C01FBBAC (DpiSriovAttach.c)
 *     DpiSriovMitigationUpdate @ 0x1C01FBF88 (DpiSriovMitigationUpdate.c)
 *     DpiSriovNotification @ 0x1C01FC134 (DpiSriovNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  unsigned int v3; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v2 = *(_QWORD *)(v1 + 48);
  v3 = 0;
  if ( !v2 )
    return 0LL;
  LOBYTE(v3) = RtlCompareUnicodeString((PCUNICODE_STRING)(v2 + 88), &DestinationString, 0) == 0;
  return v3;
}
