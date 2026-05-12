/*
 * XREFs of RaidUnitRegisterInterfaces @ 0x1C001689C
 * Callers:
 *     RaUnitStartDeviceIrp @ 0x1C006013C (RaUnitStartDeviceIrp.c)
 * Callees:
 *     PortMapBuildLunEntry @ 0x1C0016C4C (PortMapBuildLunEntry.c)
 *     PortRegistryCreateKeyEx @ 0x1C0016F18 (PortRegistryCreateKeyEx.c)
 *     PortGetDeviceType @ 0x1C005F364 (PortGetDeviceType.c)
 *     RaidUnitAddAclToVmDevices @ 0x1C0067014 (RaidUnitAddAclToVmDevices.c)
 */

__int64 __fastcall RaidUnitRegisterInterfaces(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rdx
  unsigned int v4; // r8d
  unsigned int v5; // esi
  __int64 result; // rax
  NTSTATUS v7; // ebx
  __int64 v8; // rcx
  ULONG v9; // r8d
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // rax
  int v13; // [rsp+20h] [rbp-38h]
  void *v14; // [rsp+40h] [rbp-18h]
  HANDLE Handle; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 88);
  v2 = (unsigned __int8)v1;
  v4 = v1 >> 8;
  v5 = HIWORD(v1);
  v13 = (unsigned __int8)v4;
  result = PortRegistryCreateKeyEx(
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v2 + 2160),
             1LL,
             &Handle,
             L"Target Id %d",
             v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F) + 16);
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(v8 + 2 * v12) );
    PortMapBuildLunEntry((int)Handle, (unsigned __int8)v5, v11, a1 + 104, v10, v9, v8, v12, v14);
    ZwClose(Handle);
    if ( (*(_DWORD *)(a1 + 1568) & 1) != 0 )
    {
      v7 = RaidUnitAddAclToVmDevices(a1);
      if ( v7 >= 0 )
        v7 = IoRegisterDeviceInterface(
               *(PDEVICE_OBJECT *)(a1 + 8),
               &GUID_DEVINTERFACE_VMLUN,
               0LL,
               (PUNICODE_STRING)(a1 + 1576));
    }
    if ( (**(_BYTE **)(a1 + 96) & 0x1F) == 0xD )
    {
      v7 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 8),
             &GUID_DEVINTERFACE_SES,
             0LL,
             (PUNICODE_STRING)(a1 + 1696));
      if ( v7 >= 0 )
      {
        v7 = IoSetDeviceInterfaceState((PUNICODE_STRING)(a1 + 1696), 1u);
        if ( v7 < 0 )
          RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1696));
      }
    }
    return (unsigned int)v7;
  }
  return result;
}
