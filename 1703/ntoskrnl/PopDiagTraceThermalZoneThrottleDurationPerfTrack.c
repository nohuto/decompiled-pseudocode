/*
 * XREFs of PopDiagTraceThermalZoneThrottleDurationPerfTrack @ 0x140232414
 * Callers:
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalZoneThrottleDurationPerfTrack(int a1, __int64 a2)
{
  unsigned __int16 *DeviceAttachmentBaseRefWithTag; // rax
  unsigned __int16 *v4; // rbx
  unsigned __int16 v5; // cx
  __int64 v6; // rax
  __int16 v7; // [rsp+40h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp+Fh] BYREF
  __int16 *v9; // [rsp+58h] [rbp+1Fh]
  int v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+64h] [rbp+2Bh]
  __int64 v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+74h] [rbp+3Bh]
  int v15; // [rsp+A0h] [rbp+67h] BYREF

  v15 = a1;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK) )
  {
    DeviceAttachmentBaseRefWithTag = (unsigned __int16 *)IoGetDeviceAttachmentBaseRefWithTag(a2, 0x746C6644u);
    v4 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      DeviceAttachmentBaseRefWithTag = *(unsigned __int16 **)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( DeviceAttachmentBaseRefWithTag )
    {
      v5 = DeviceAttachmentBaseRefWithTag[140];
      UserData.Reserved = 0;
      v11 = 0;
      UserData.Ptr = (ULONGLONG)&v15;
      v9 = &v7;
      v7 = v5 >> 1;
      UserData.Size = 4;
      v10 = 2;
      v6 = *((_QWORD *)DeviceAttachmentBaseRefWithTag + 36);
      v14 = 0;
      v12 = v6;
      v13 = 2 * (v5 >> 1);
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_DURATION_PERFTRACK, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
    if ( v4 )
      ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  }
}
