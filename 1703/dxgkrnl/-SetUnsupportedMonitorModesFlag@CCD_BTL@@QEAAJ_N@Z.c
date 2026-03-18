/*
 * XREFs of ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C01DFFFC
 * Callers:
 *     DxgkSetGlobalRawmodeFlag @ 0x1C01AB9C0 (DxgkSetGlobalRawmodeFlag.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 */

__int64 __fastcall CCD_BTL::SetUnsupportedMonitorModesFlag(CCD_BTL *this, unsigned __int8 a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  void *KeyHandle; // [rsp+80h] [rbp+10h] BYREF
  BOOL Data; // [rsp+88h] [rbp+18h] BYREF

  KeyHandle = 0LL;
  DxgkLogCodePointPacket(0x29u, *((_BYTE *)this + 136) != 0, a2, 0, 0LL);
  *((_BYTE *)this + 136) = a2;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x40000000u, &ObjectAttributes);
  v7 = v4;
  if ( v4 < 0
    || (Data = a2 != 0,
        RtlInitUnicodeString(&DestinationString, L"UnsupportedMonitorModesAllowed"),
        v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u),
        ZwClose(KeyHandle),
        (int)v7 < 0) )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v7;
}
