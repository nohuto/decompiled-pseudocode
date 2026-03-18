/*
 * XREFs of PopDiagTraceThermalZoneThrottlePerfTrack @ 0x1402476C4
 * Callers:
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceThermalZoneThrottlePerfTrack(int a1, int a2, __int64 a3)
{
  unsigned __int16 *DeviceAttachmentBaseRefWithTag; // rax
  unsigned __int16 *v5; // rbx
  unsigned __int16 v6; // cx
  void *v7; // rax
  __int16 v9; // [rsp+48h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp+7h] BYREF
  int *v11; // [rsp+68h] [rbp+17h]
  int v12; // [rsp+70h] [rbp+1Fh]
  int v13; // [rsp+74h] [rbp+23h]
  __int16 *v14; // [rsp+78h] [rbp+27h]
  int v15; // [rsp+80h] [rbp+2Fh]
  int v16; // [rsp+84h] [rbp+33h]
  void *v17; // [rsp+88h] [rbp+37h]
  int v18; // [rsp+90h] [rbp+3Fh]
  int v19; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF
  int v21; // [rsp+B8h] [rbp+67h] BYREF
  int v22; // [rsp+C0h] [rbp+6Fh] BYREF

  DeviceAttachmentBaseRefWithTag = (unsigned __int16 *)&retaddr;
  v22 = a2;
  v21 = a1;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_PERFTRACK);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (unsigned __int16 *)IoGetDeviceAttachmentBaseRefWithTag(a3, 0x746C6644u);
      v5 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
        DeviceAttachmentBaseRefWithTag = *(unsigned __int16 **)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v6 = DeviceAttachmentBaseRefWithTag[140];
        UserData.Reserved = 0;
        v13 = 0;
        v16 = 0;
        UserData.Ptr = (ULONGLONG)&v22;
        v11 = &v21;
        v14 = &v9;
        v9 = v6 >> 1;
        UserData.Size = 4;
        v12 = 4;
        v15 = 2;
        v7 = (void *)*((_QWORD *)DeviceAttachmentBaseRefWithTag + 36);
        v19 = 0;
        v17 = v7;
        v18 = 2 * (v6 >> 1);
        LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwWriteEx(
                                                   PopDiagHandle,
                                                   &POP_ETW_EVENT_THERMAL_PERFTRACK,
                                                   0LL,
                                                   0,
                                                   0LL,
                                                   0LL,
                                                   4u,
                                                   &UserData);
      }
      if ( v5 )
        LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(v5, 0x746C6644u);
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
