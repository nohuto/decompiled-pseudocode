/*
 * XREFs of PopTraceThermalZonePassiveHistogram @ 0x14013C76C
 * Callers:
 *     PopThermalSxEntry @ 0x14013C6B4 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x14022F650 (PopThermalTelemetryWorker.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x140081B24 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     PopDiagSnapPassiveHistogram @ 0x14013C834 (PopDiagSnapPassiveHistogram.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopTraceThermalZonePassiveHistogram(__int64 a1)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v3; // rbx
  __int64 v4; // rdi
  const WCHAR *v5; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-D0h] BYREF
  _DWORD *v8; // [rsp+58h] [rbp-B0h]
  __int64 v9; // [rsp+60h] [rbp-A8h]
  __int64 v10; // [rsp+68h] [rbp-A0h]
  _DWORD v11[2]; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v13; // [rsp+88h] [rbp-80h]
  int v14; // [rsp+90h] [rbp-78h]
  int v15; // [rsp+94h] [rbp-74h]
  void *v16; // [rsp+98h] [rbp-70h]
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  _BYTE v19[96]; // [rsp+B8h] [rbp-50h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a1 + 48), 0x746C6644u);
  v3 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v4 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v4 = 0LL;
  if ( v4 )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = PopDiagSnapPassiveHistogram(a1 + 504, v19);
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
      {
        v11[1] = 0;
        v8 = v11;
        v10 = *(_QWORD *)(v4 + 288);
        v11[0] = *(unsigned __int16 *)(v4 + 280);
        v9 = 2LL;
        TlgCreateWsz(&pDesc, v5);
        v15 = 0;
        v18 = 0;
        v16 = &PopThermalTrackingThresholds;
        v13 = v19;
        v14 = 84;
        v17 = 21;
        LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgWrite(&hProvider, &unk_1402AD546, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  if ( v3 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
