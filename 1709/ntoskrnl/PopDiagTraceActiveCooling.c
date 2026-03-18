/*
 * XREFs of PopDiagTraceActiveCooling @ 0x1407018C0
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

void __fastcall PopDiagTraceActiveCooling(__int64 a1, struct _DEVICE_OBJECT *a2, char a3, unsigned int a4)
{
  bool v8; // cc
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v10; // rbx
  _WORD *DeviceNode; // rax
  char *v12; // r9
  unsigned int v13; // r10d
  __int64 v14; // r11
  __int64 v15; // rcx
  unsigned int v16; // kr00_4
  unsigned int *v17; // r8
  unsigned int v18; // edx
  const EVENT_DESCRIPTOR *v19; // rdx
  __int16 v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v21; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v22; // [rsp+38h] [rbp-C8h] BYREF
  LARGE_INTEGER SystemTime; // [rsp+40h] [rbp-C0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A0h]
  int v27; // [rsp+68h] [rbp-98h]
  int v28; // [rsp+6Ch] [rbp-94h]
  LARGE_INTEGER *p_LocalTime; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  __int16 *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  char v33; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int *v34; // [rsp+130h] [rbp+30h]
  __int64 v35; // [rsp+138h] [rbp+38h]
  _DWORD v36[10]; // [rsp+140h] [rbp+40h] BYREF

  if ( PopDiagHandleRegistered && (a4 || EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC)) )
  {
    v8 = a4 <= 1;
    if ( a4 == 1 )
    {
      if ( !EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL) )
        return;
      v8 = 1;
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
        v21 = DeviceNode[140] >> 1;
        UserData.Ptr = (ULONGLONG)&v21;
        *(_QWORD *)&UserData.Size = 2LL;
        v26 = *((_QWORD *)DeviceNode + 36);
        v28 = 0;
        v27 = 2 * v21;
        SystemTime.QuadPart = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime(&SystemTime, &LocalTime);
        v30 = 8LL;
        p_LocalTime = &LocalTime;
        v20 = a3 != 0;
        v32 = 2LL;
        v31 = &v20;
        v12 = &v33;
        v13 = 0;
        v14 = 10LL;
        do
        {
          v15 = v13;
          *(_QWORD *)(v12 - 4) = 4LL;
          ++v13;
          v12 += 16;
          v16 = *(_DWORD *)(a1 + 4 * v15 + 36);
          v17 = &v36[v15];
          *(_QWORD *)(v12 - 28) = v17;
          *v17 = v16 / 0xA;
          --v14;
        }
        while ( v14 );
        v35 = 4LL;
        v18 = *(_DWORD *)(a1 + 16) / 0xAu;
        v34 = &v22;
        v22 = v18;
        v19 = &POP_ETW_EVENT_ACTIVE_COOLING_DIAGNOSTIC;
        if ( a4 )
          v19 = &POP_ETW_EVENT_ACTIVE_COOLING_OPERATIONAL;
        EtwWrite(PopDiagHandle, v19, 0LL, 0xFu, &UserData);
      }
      if ( v10 )
        ObfDereferenceObject(v10);
    }
  }
}
