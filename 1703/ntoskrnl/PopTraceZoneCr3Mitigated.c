/*
 * XREFs of PopTraceZoneCr3Mitigated @ 0x140232E78
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140168960 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     _TlgWrite @ 0x14007FE94 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x140081B24 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x140082CE0 (_TlgKeywordOn.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopTraceZoneCr3Mitigated(int a1, __int64 a2)
{
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v5; // rbx
  __int64 v6; // r9
  __int64 v7; // r9
  int v8; // eax
  const WCHAR *v9; // rdx
  int v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp+37h] BYREF

  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x746C6644u);
  v5 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
    v6 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
  else
    v6 = 0LL;
  if ( v6 )
  {
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
      {
        v8 = *(_DWORD *)(a2 + 128);
        v16 = 0;
        v19 = 0;
        v12 = v8;
        v14 = &v11;
        v15 = 4;
        v18 = 4;
        v9 = *(const WCHAR **)(v7 + 288);
        v17 = &v12;
        v11 = a1;
        TlgCreateWsz(&pDesc, v9);
        LOBYTE(DeviceAttachmentBaseRefWithTag) = TlgWrite(&hProvider, &unk_1402AD658, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  if ( v5 )
    LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  return (char)DeviceAttachmentBaseRefWithTag;
}
