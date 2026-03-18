/*
 * XREFs of PopDiagTracePassiveCooling @ 0x14070420C
 * Callers:
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400B05A0 (IoGetDeviceAttachmentBaseRef.c)
 *     ExSystemTimeToLocalTime @ 0x140131D60 (ExSystemTimeToLocalTime.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopDiagTracePassiveCooling(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, int a4, unsigned int a5)
{
  bool v8; // cc
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v10; // rbx
  _WORD *DeviceNode; // rax
  unsigned int v12; // kr00_4
  unsigned int v13; // kr04_4
  const EVENT_DESCRIPTOR *v14; // rdx
  __int16 v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v16; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v17; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-C4h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h]
  int v23; // [rsp+68h] [rbp-98h]
  int v24; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER *p_LocalTime; // [rsp+70h] [rbp-90h]
  __int64 v26; // [rsp+78h] [rbp-88h]
  __int16 *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  unsigned int *v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  unsigned int *v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  __int64 v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  __int64 v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  int *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  int v43; // [rsp+158h] [rbp+58h] BYREF

  v43 = a4;
  v15 = 0;
  if ( PopDiagHandleRegistered && (a5 || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC)) )
  {
    v8 = a5 <= 1;
    if ( a5 == 1 )
    {
      if ( !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL) )
        return;
      v8 = a5 <= 1;
    }
    if ( v8 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a2);
      v10 = DeviceAttachmentBaseRef;
      if ( DeviceAttachmentBaseRef )
        DeviceNode = DeviceAttachmentBaseRef->DeviceObjectExtension->DeviceNode;
      else
        DeviceNode = 0LL;
      if ( DeviceNode )
      {
        v16 = DeviceNode[140] >> 1;
        UserData.Ptr = (ULONGLONG)&v16;
        *(_QWORD *)&UserData.Size = 2LL;
        v22 = *((_QWORD *)DeviceNode + 36);
        v24 = 0;
        v23 = 2 * v16;
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        v26 = 8LL;
        p_LocalTime = &LocalTime;
        v15 = a3 != 0;
        v28 = 2LL;
        v27 = &v15;
        v29 = &v17;
        v12 = *(_DWORD *)(a1 + 20);
        v30 = 4LL;
        v17 = v12 / 0xA;
        v13 = *(_DWORD *)(a1 + 16);
        v32 = 4LL;
        v31 = &v18;
        v33 = a1 + 4;
        v35 = a1 + 8;
        v37 = a1 + 12;
        v39 = &v43;
        v41 = a1 + 80;
        v18 = v13 / 0xA;
        v14 = &POP_ETW_EVENT_PASSIVE_COOLING_DIAGNOSTIC;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        if ( a5 )
          v14 = &POP_ETW_EVENT_PASSIVE_COOLING_OPERATIONAL;
        EtwWrite(PopDiagHandle, v14, 0LL, 0xBu, &UserData);
      }
      if ( v10 )
        ObfDereferenceObject(v10);
    }
  }
}
