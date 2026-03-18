/*
 * XREFs of ACPIQueryPhysicalDeviceLocation @ 0x1C0071008
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0076550 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C008B350 (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPIProcessPhysicalDeviceLocation @ 0x1C008B638 (ACPIProcessPhysicalDeviceLocation.c)
 */

__int64 __fastcall ACPIQueryPhysicalDeviceLocation(__int64 a1)
{
  NTSTATUS v2; // esi
  __int64 v3; // rbx
  struct _DEVICE_OBJECT *v4; // rcx
  _BYTE *Data; // rbx
  const GUID *i; // rbx
  _QWORD *v7; // rbx
  struct _DEVICE_OBJECT *v8; // rcx
  struct _DEVICE_OBJECT *v9; // rcx
  PVOID v10; // rcx
  __int64 v11; // rax
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+48h] [rbp-39h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v15; // [rsp+68h] [rbp-19h]
  _QWORD *v16; // [rsp+70h] [rbp-11h] BYREF
  const GUID *v17; // [rsp+80h] [rbp-1h] BYREF
  DEVPROPKEY v18; // [rsp+90h] [rbp+Fh] BYREF
  DEVPROPKEY PropertyKey; // [rsp+A8h] [rbp+27h] BYREF

  v2 = ACPIProcessPhysicalDeviceLocation(a1, 0LL, P);
  if ( v2 >= 0 )
  {
    v3 = v15;
    if ( v15 )
    {
      v2 = IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 736),
             &DEVPKEY_Device_PhysicalDeviceLocation,
             0,
             0,
             0x1003u,
             0x14u,
             (PVOID)(v15 + 16));
      if ( v2 >= 0 )
      {
        v4 = *(struct _DEVICE_OBJECT **)(a1 + 736);
        Data = (_BYTE *)(v3 + 52);
        if ( (*Data & 0x1F) != 0 )
          IoSetDevicePropertyData(v4, &DEVPKEY_Device_PhysicalDeviceLocationSpatial, 0, 0, 0x1003u, 0x10u, Data);
        else
          IoSetDevicePropertyData(v4, &DEVPKEY_Device_PhysicalDeviceLocationSpatial, 0, 0, 0, 0, 0LL);
      }
    }
    for ( i = v17; i != (const GUID *)&v17; i = *(const GUID **)&i->Data1 )
    {
      v2 = IoRegisterDeviceInterface(
             *(PDEVICE_OBJECT *)(a1 + 736),
             i + 1,
             (PUNICODE_STRING)((unsigned __int64)&i[2] & -(__int64)(*(_QWORD *)i[2].Data4 != 0LL)),
             &SymbolicLinkName);
      if ( v2 >= 0 )
      {
        v2 = IoSetDeviceInterfacePropertyData(
               &SymbolicLinkName,
               &DEVPKEY_Device_PhysicalDeviceLocation,
               0LL,
               0LL,
               4099,
               20,
               i[-5].Data4);
        if ( v2 >= 0 )
        {
          if ( (i[-3].Data4[4] & 0x1F) != 0 )
            IoSetDeviceInterfacePropertyData(
              &SymbolicLinkName,
              &DEVPKEY_Device_PhysicalDeviceLocationSpatial,
              0LL,
              0LL,
              4099,
              16,
              &i[-3].Data4[4]);
          else
            IoSetDeviceInterfacePropertyData(
              &SymbolicLinkName,
              &DEVPKEY_Device_PhysicalDeviceLocationSpatial,
              0LL,
              0LL,
              0,
              0,
              0LL);
        }
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
    }
    v7 = v16;
    PropertyKey.fmtid = (DEVPROPGUID)DEVPKEY_Device_PhysicalDeviceLocationPanel;
    PropertyKey.pid = 2;
    v18.pid = 2;
    v18.fmtid = (DEVPROPGUID)DEVPKEY_Device_PhysicalDeviceLocationJoint;
    while ( 1 )
    {
      v9 = *(struct _DEVICE_OBJECT **)(a1 + 736);
      if ( v7 == &v16 )
        break;
      v2 = IoSetDevicePropertyData(v9, &PropertyKey, 0, 0, 0x1003u, 0x14u, v7 - 7);
      if ( v2 >= 0 )
      {
        v8 = *(struct _DEVICE_OBJECT **)(a1 + 736);
        if ( (*((_BYTE *)v7 - 36) & 0x1F) != 0 )
          IoSetDevicePropertyData(v8, &v18, 0, 0, 0x1003u, 0x10u, (char *)v7 - 36);
        else
          IoSetDevicePropertyData(v8, &v18, 0, 0, 0, 0, 0LL);
      }
      ++PropertyKey.pid;
      ++v18.pid;
      v7 = (_QWORD *)*v7;
    }
    while ( !IoSetDevicePropertyData(v9, &PropertyKey, 0, 0, 0, 0, 0LL) )
    {
      IoSetDevicePropertyData(*(PDEVICE_OBJECT *)(a1 + 736), &v18, 0, 0, 0, 0, 0LL);
      ++PropertyKey.pid;
      ++v18.pid;
      v9 = *(struct _DEVICE_OBJECT **)(a1 + 736);
    }
    while ( 1 )
    {
      v10 = P[0];
      if ( P[0] == P )
        break;
      if ( *((PVOID **)P[0] + 1) != P || (v11 = *(_QWORD *)P[0], *(PVOID *)(*(_QWORD *)P[0] + 8LL) != P[0]) )
        __fastfail(3u);
      P[0] = *(PVOID *)P[0];
      *(_QWORD *)(v11 + 8) = P;
      ACPIFreePhysicalDeviceLocationDescriptor(v10);
    }
  }
  return (unsigned int)v2;
}
