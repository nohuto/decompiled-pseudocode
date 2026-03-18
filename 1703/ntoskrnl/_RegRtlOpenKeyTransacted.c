/*
 * XREFs of _RegRtlOpenKeyTransacted @ 0x1404840A0
 * Callers:
 *     _SysCtxRegOpenKey @ 0x140484048 (_SysCtxRegOpenKey.c)
 *     PpDevCfgProcessDeviceOperations @ 0x140559390 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PipHardwareConfigActivateService @ 0x140592A80 (PipHardwareConfigActivateService.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405AA1FC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x1405AA36C (_RegRtlDeleteKeyTransacted.c)
 *     _SysCtxOpenMachine @ 0x1405CD2E8 (_SysCtxOpenMachine.c)
 *     _SysCtxOpenControlSet @ 0x1405CD4A0 (_SysCtxOpenControlSet.c)
 *     _RegRtlOpenPredefinedKey @ 0x1405D1300 (_RegRtlOpenPredefinedKey.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     _RegRtlCopyTreeInternal @ 0x140741D70 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1407422EC (_RegRtlDeletePathInternal.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     ZwOpenKey @ 0x14017E180 (ZwOpenKey.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     _RegRtlOpenPredefinedKey @ 0x1405D1300 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlOpenKeyTransacted(
        char *a1,
        const WCHAR *a2,
        char a3,
        ACCESS_MASK a4,
        PHANDLE KeyHandle,
        __int64 a6)
{
  void *v6; // rdi
  void *v8; // rsi
  NTSTATUS inited; // ebx
  ULONG v12; // eax
  NTSTATUS (__stdcall *v14)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE); // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-48h] BYREF
  void *v17; // [rsp+90h] [rbp+8h] BYREF

  v6 = 0LL;
  v8 = a1;
  v17 = 0LL;
  if ( (unsigned __int64)(a1 + 0x80000000) <= 7 )
  {
    inited = RegRtlOpenPredefinedKey(a1, &v17);
    if ( inited < 0 )
      goto LABEL_9;
    v6 = v17;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited < 0 )
    goto LABEL_10;
  v12 = 832;
  ObjectAttributes.Length = 48;
  if ( v6 )
    v8 = v6;
  ObjectAttributes.RootDirectory = v8;
  if ( (a3 & 8) == 0 )
    v12 = 576;
  ObjectAttributes.Attributes = v12;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( !a6 )
  {
    inited = ZwOpenKey(KeyHandle, a4, &ObjectAttributes);
LABEL_9:
    v6 = v17;
    goto LABEL_10;
  }
  if ( byte_14038C510 )
  {
    v14 = (NTSTATUS (__stdcall *)(PHANDLE, ACCESS_MASK, POBJECT_ATTRIBUTES, HANDLE))qword_14038C518;
  }
  else
  {
    v14 = ZwOpenKeyTransacted;
    byte_14038C510 = 1;
    qword_14038C518 = (__int64)ZwOpenKeyTransacted;
  }
  if ( v14 )
  {
    inited = ((__int64 (__fastcall *)(PHANDLE, _QWORD, OBJECT_ATTRIBUTES *, __int64))v14)(
               KeyHandle,
               a4,
               &ObjectAttributes,
               a6);
    if ( inited != -1073741702 )
      goto LABEL_9;
    v6 = v17;
  }
  inited = -1072103420;
LABEL_10:
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)inited;
}
