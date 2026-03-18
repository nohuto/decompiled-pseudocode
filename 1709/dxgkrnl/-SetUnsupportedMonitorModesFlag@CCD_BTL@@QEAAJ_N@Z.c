/*
 * XREFs of ?SetUnsupportedMonitorModesFlag@CCD_BTL@@QEAAJ_N@Z @ 0x1C01F9B3C
 * Callers:
 *     DxgkSetGlobalRawmodeFlag @ 0x1C01C53B0 (DxgkSetGlobalRawmodeFlag.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 */

__int64 __fastcall CCD_BTL::SetUnsupportedMonitorModesFlag(CCD_BTL *this, unsigned __int8 a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
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
  v6 = v4;
  if ( v4 < 0
    || (Data = a2 != 0,
        RtlInitUnicodeString(&DestinationString, L"UnsupportedMonitorModesAllowed"),
        v6 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u),
        ZwClose(KeyHandle),
        (int)v6 < 0) )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdError(v7);
  }
  return (unsigned int)v6;
}
