/*
 * XREFs of PopDiagTraceThermalStateChange @ 0x14024712C
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1402436CC (PopCheckAndHandleThermalConditions.c)
 *     PopDiagTraceThermalOverthrottleState @ 0x1402470F4 (PopDiagTraceThermalOverthrottleState.c)
 *     PopDiagTraceThermalStandbyState @ 0x140247110 (PopDiagTraceThermalStandbyState.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     EtwWriteEx @ 0x140087CE0 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400B05BC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall PopDiagTraceThermalStateChange(__int64 a1, int a2, const EVENT_DESCRIPTOR *a3)
{
  unsigned __int16 *DeviceAttachmentBaseRefWithTag; // rax
  unsigned __int16 *v6; // rbx
  unsigned __int16 v7; // cx
  __int64 v8; // rax
  __int16 v9; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  int *v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]
  int v17; // [rsp+A8h] [rbp+28h] BYREF

  v17 = a2;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, a3) )
  {
    DeviceAttachmentBaseRefWithTag = (unsigned __int16 *)IoGetDeviceAttachmentBaseRefWithTag(a1, 0x746C6644u);
    v6 = DeviceAttachmentBaseRefWithTag;
    if ( DeviceAttachmentBaseRefWithTag )
      DeviceAttachmentBaseRefWithTag = *(unsigned __int16 **)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    if ( DeviceAttachmentBaseRefWithTag )
    {
      v7 = DeviceAttachmentBaseRefWithTag[140];
      UserData.Reserved = 0;
      v9 = v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v9;
      UserData.Size = 2;
      v8 = *((_QWORD *)DeviceAttachmentBaseRefWithTag + 36);
      v13 = 0;
      v16 = 0;
      v11 = v8;
      v12 = 2 * (v7 >> 1);
      v14 = &v17;
      v15 = 4;
      EtwWriteEx(PopDiagHandle, a3, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
    if ( v6 )
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
}
