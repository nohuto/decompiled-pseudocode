/*
 * XREFs of RaGetBusInterface @ 0x1C001C880
 * Callers:
 *     RaidInitializeAdapter @ 0x1C0061E4C (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 *     memcmp @ 0x1C001F220 (memcmp.c)
 */

__int64 __fastcall RaGetBusInterface(struct _DEVICE_OBJECT *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v4; // rcx
  __int64 v5; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-28h] BYREF
  __int64 PropertyBuffer; // [rsp+38h] [rbp-20h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  if ( IoGetDeviceProperty(a1, DevicePropertyBusTypeGuid, 0x10u, &PropertyBuffer, &ResultLength) < 0 )
    return 0xFFFFFFFFLL;
  v1 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCMCIA.Data1 )
    v1 = v8 - *(_QWORD *)GUID_BUS_TYPE_PCMCIA.Data4;
  if ( !v1 )
    return 1LL;
  v2 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_PCI.Data1 )
    v2 = v8 - *(_QWORD *)GUID_BUS_TYPE_PCI.Data4;
  if ( !v2 )
    return 5LL;
  v4 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_ISAPNP.Data1 )
    v4 = v8 - *(_QWORD *)GUID_BUS_TYPE_ISAPNP.Data4;
  if ( !v4 )
    return 1LL;
  v5 = PropertyBuffer - *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1;
  if ( PropertyBuffer == *(_QWORD *)&GUID_BUS_TYPE_EISA.Data1 )
    v5 = v8 - *(_QWORD *)GUID_BUS_TYPE_EISA.Data4;
  if ( v5 )
    return memcmp(&PropertyBuffer, &GUID_BUS_TYPE_ACPI, 0x10uLL) != 0 ? -1 : 17;
  else
    return 2LL;
}
