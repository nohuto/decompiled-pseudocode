/*
 * XREFs of UsbhPdoRegisterWmi @ 0x1C002776C
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0019BB0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

NTSTATUS __fastcall UsbhPdoRegisterWmi(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  NTSTATUS result; // eax

  v2 = PdoExt((__int64)DeviceObject);
  v3 = v2;
  v2[332] = 3;
  if ( (v2[353] & 0x24) != 0 )
    v2[332] = 2;
  *((_QWORD *)v2 + 167) = &USB_PortWmiGuidList;
  *((_QWORD *)v2 + 168) = UsbhPdoQueryWmiRegInfo;
  *((_QWORD *)v2 + 169) = UsbhPdoQueryWmiDataBlock;
  *((_QWORD *)v2 + 170) = 0LL;
  *((_QWORD *)v2 + 171) = 0LL;
  *((_QWORD *)v2 + 172) = 0LL;
  *((_QWORD *)v2 + 173) = 0LL;
  result = IoWMIRegistrationControl(DeviceObject, 1u);
  v3[353] |= 0x80u;
  return result;
}
