/*
 * XREFs of PopThermalTraceRundownEvents @ 0x14000EDE8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1404F1610 (PopDiagTraceControlCallback.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

__int64 PopThermalTraceRundownEvents()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 i; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  char v4; // r14
  int v5; // esi
  __int64 DeviceAttachmentBaseRefWithTag; // rax
  void *v8; // rdi
  __int64 v9; // rax
  int v10; // ecx
  __int16 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-BCh] BYREF
  int v13; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v14; // [rsp+54h] [rbp-B4h] BYREF
  int v15; // [rsp+58h] [rbp-B0h] BYREF
  int v16; // [rsp+60h] [rbp-A8h] BYREF
  int v17; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  int v22; // [rsp+94h] [rbp-74h]
  __int16 *v23; // [rsp+98h] [rbp-70h]
  __int64 v24; // [rsp+A0h] [rbp-68h]
  int *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  __int16 *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  __int64 *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  __int16 *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  __int64 v37; // [rsp+108h] [rbp+0h]
  int v38; // [rsp+110h] [rbp+8h]
  int v39; // [rsp+114h] [rbp+Ch]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = PopThermal; (__int64 *)i != &PopThermal; i = *(_QWORD *)i )
  {
    v2 = *(_BYTE *)(i + 65);
    if ( (v2 & 2) != 0 )
    {
      v3 = *(_QWORD *)(i + 48);
      v4 = *(_BYTE *)(i + 65) & 1;
      LODWORD(v18) = *(unsigned __int8 *)(i + 73);
      v17 = *(unsigned __int8 *)(i + 72);
      v16 = *(_DWORD *)(i + 80);
      v5 = (v2 >> 2) & 1;
      v15 = *(unsigned __int8 *)(i + 69);
      if ( PopDiagHandleRegistered )
      {
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
        {
          DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v3, 1953261124LL);
          v8 = (void *)DeviceAttachmentBaseRefWithTag;
          if ( DeviceAttachmentBaseRefWithTag )
            v9 = *(_QWORD *)(*(_QWORD *)(DeviceAttachmentBaseRefWithTag + 312) + 40LL);
          else
            v9 = 0LL;
          if ( v9 )
          {
            LOWORD(v13) = *(_WORD *)(v9 + 280) >> 1;
            UserData.Ptr = (ULONGLONG)&v13;
            *(_QWORD *)&UserData.Size = 2LL;
            v20 = *(_QWORD *)(v9 + 288);
            v22 = 0;
            v21 = 2 * (unsigned __int16)v13;
            v11 = (_BYTE)v5 != 0;
            v24 = 2LL;
            v23 = &v11;
            v25 = &v15;
            v26 = 4LL;
            v12 = v4 != 0;
            v10 = *(unsigned __int16 *)(i + 856);
            v27 = &v12;
            v38 = v10;
            v29 = &v16;
            v28 = 2LL;
            v31 = &v17;
            v30 = 4LL;
            v33 = &v18;
            v14 = (unsigned __int16)v10 >> 1;
            v35 = &v14;
            v37 = *(_QWORD *)(i + 864);
            v32 = 4LL;
            v34 = 4LL;
            v36 = 2LL;
            v39 = 0;
            EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 0, 0LL, 0LL, 0xAu, &UserData);
          }
          if ( v8 )
            ObfDereferenceObjectWithTag(v8, 0x746C6644u);
        }
      }
    }
  }
  return PopReleaseRwLock(&PopPolicyDeviceLock);
}
