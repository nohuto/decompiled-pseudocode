/*
 * XREFs of PopThermalTraceRundownEvents @ 0x1400D20A8
 * Callers:
 *     PopDiagTraceControlCallback @ 0x1405254B0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1400384BC (PopReleaseRwLock.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140064E8C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWriteEx @ 0x1400EF860 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void PopThermalTraceRundownEvents()
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  char v4; // r14
  int v5; // esi
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v7; // rdi
  __int64 v8; // rdx
  int v9; // ecx
  unsigned __int16 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v11; // [rsp+4Ch] [rbp-BCh] BYREF
  int v12; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v13; // [rsp+54h] [rbp-B4h] BYREF
  int v14; // [rsp+58h] [rbp-B0h] BYREF
  int v15; // [rsp+60h] [rbp-A8h] BYREF
  int v16; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+94h] [rbp-74h]
  __int16 *v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  int *v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  int *v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  __int64 *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  __int16 *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  PVOID v36; // [rsp+108h] [rbp+0h]
  int v37; // [rsp+110h] [rbp+8h]
  int v38; // [rsp+114h] [rbp+Ch]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  v1 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      v2 = *((_BYTE *)v1 + 65);
      if ( (v2 & 2) != 0 )
      {
        v3 = (__int64)v1[6];
        v4 = *((_BYTE *)v1 + 65) & 1;
        LODWORD(v17) = *((unsigned __int8 *)v1 + 73);
        v16 = *((unsigned __int8 *)v1 + 72);
        v15 = *((_DWORD *)v1 + 20);
        v5 = (v2 >> 2) & 1;
        v14 = *((unsigned __int8 *)v1 + 69);
        if ( PopDiagHandleRegistered )
        {
          if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN) )
          {
            DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(v3, 0x67446F50u);
            v7 = DeviceAttachmentBaseRefWithTag;
            if ( DeviceAttachmentBaseRefWithTag )
              v8 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
            else
              v8 = 0LL;
            if ( v8 )
            {
              v10 = *(_WORD *)(v8 + 280) >> 1;
              UserData.Ptr = (ULONGLONG)&v10;
              *(_QWORD *)&UserData.Size = 2LL;
              v19 = *(_QWORD *)(v8 + 288);
              v20 = 2 * v10;
              v21 = 0;
              v11 = (_BYTE)v5 != 0;
              v22 = &v11;
              v24 = &v14;
              v23 = 2LL;
              v25 = 4LL;
              v9 = *((unsigned __int16 *)v1 + 428);
              LOWORD(v12) = v4 != 0;
              v37 = v9;
              v26 = &v12;
              v27 = 2LL;
              v28 = &v15;
              v30 = &v16;
              v32 = &v17;
              v13 = (unsigned __int16)v9 >> 1;
              v34 = &v13;
              v36 = v1[108];
              v29 = 4LL;
              v31 = 4LL;
              v33 = 4LL;
              v35 = 2LL;
              v38 = 0;
              EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_THERMAL_ZONE_RUNDOWN, 0LL, 0, 0LL, 0LL, 0xAu, &UserData);
            }
            if ( v7 )
              ObfDereferenceObjectWithTag(v7, 0x67446F50u);
          }
        }
      }
      v1 = (PVOID *)*v1;
    }
    while ( v1 != &PopThermal );
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
