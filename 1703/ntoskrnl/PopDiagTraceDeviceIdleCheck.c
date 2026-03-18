/*
 * XREFs of PopDiagTraceDeviceIdleCheck @ 0x140230CA4
 * Callers:
 *     PopScanIdleList @ 0x140070F24 (PopScanIdleList.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **DeviceAttachmentBaseRefWithTag; // rax
  __int64 v5; // rdx
  char v6; // al
  char v7; // al
  int v8; // ecx
  char v10; // [rsp+48h] [rbp-C0h] BYREF
  char v11; // [rsp+49h] [rbp-BFh] BYREF
  __int16 v12; // [rsp+4Ch] [rbp-BCh] BYREF
  _UNKNOWN **v13; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD *v15; // [rsp+68h] [rbp-A0h]
  __int64 v16; // [rsp+70h] [rbp-98h]
  __int16 *v17; // [rsp+78h] [rbp-90h]
  __int64 v18; // [rsp+80h] [rbp-88h]
  __int64 v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+94h] [rbp-74h]
  __int64 v22; // [rsp+98h] [rbp-70h]
  __int64 v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  __int64 v25; // [rsp+B0h] [rbp-58h]
  int *v26; // [rsp+B8h] [rbp-50h]
  __int64 v27; // [rsp+C0h] [rbp-48h]
  int *v28; // [rsp+C8h] [rbp-40h]
  __int64 v29; // [rsp+D0h] [rbp-38h]
  __int64 v30; // [rsp+D8h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-28h]
  char *v32; // [rsp+E8h] [rbp-20h]
  __int64 v33; // [rsp+F0h] [rbp-18h]
  char *v34; // [rsp+F8h] [rbp-10h]
  __int64 v35; // [rsp+100h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+140h] [rbp+38h] BYREF
  int v37; // [rsp+150h] [rbp+48h] BYREF
  int v38; // [rsp+158h] [rbp+50h] BYREF

  DeviceAttachmentBaseRefWithTag = &retaddr;
  v38 = a3;
  v37 = a2;
  v13 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(DeviceAttachmentBaseRefWithTag) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK);
    if ( (_BYTE)DeviceAttachmentBaseRefWithTag )
    {
      DeviceAttachmentBaseRefWithTag = (_UNKNOWN **)IoGetDeviceAttachmentBaseRefWithTag(
                                                      *(_QWORD *)(a1 + 24),
                                                      0x746C6644u);
      v13 = DeviceAttachmentBaseRefWithTag;
      if ( DeviceAttachmentBaseRefWithTag )
      {
        v5 = *((_QWORD *)DeviceAttachmentBaseRefWithTag[39] + 5);
        if ( v5 )
        {
          v12 = *(_WORD *)(v5 + 40) >> 1;
          v6 = *(_BYTE *)(a1 + 52) - 1;
          UserData.Ptr = a1 + 24;
          v10 = v6;
          v7 = *(_BYTE *)(a1 + 56) - 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v11 = v7;
          v15 = &v13;
          v17 = &v12;
          v16 = 8LL;
          v18 = 2LL;
          v8 = *(unsigned __int16 *)(v5 + 40);
          v19 = *(_QWORD *)(v5 + 48);
          v22 = a1 + 16;
          v24 = a1 + 20;
          v26 = &v37;
          v28 = &v38;
          v30 = a1 + 12;
          v32 = &v10;
          v34 = &v11;
          v20 = v8;
          v33 = 1LL;
          v35 = 1LL;
          v21 = 0;
          v23 = 4LL;
          v25 = 4LL;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DEVICE_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 0xBu, &UserData);
          DeviceAttachmentBaseRefWithTag = v13;
        }
        if ( DeviceAttachmentBaseRefWithTag )
          LOBYTE(DeviceAttachmentBaseRefWithTag) = ObfDereferenceObjectWithTag(
                                                     DeviceAttachmentBaseRefWithTag,
                                                     0x746C6644u);
      }
    }
  }
  return (char)DeviceAttachmentBaseRefWithTag;
}
