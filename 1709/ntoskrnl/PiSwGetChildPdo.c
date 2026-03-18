/*
 * XREFs of PiSwGetChildPdo @ 0x1405E3DF8
 * Callers:
 *     PipEnumerateCompleted @ 0x140553474 (PipEnumerateCompleted.c)
 * Callees:
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400FAC00 (IoDeleteDevice.c)
 *     ObSetSecurityObjectByPointer @ 0x140486290 (ObSetSecurityObjectByPointer.c)
 *     IoCreateDevice @ 0x140549C50 (IoCreateDevice.c)
 *     PiSwFindPdoAssociation @ 0x1405E3F10 (PiSwFindPdoAssociation.c)
 *     PiSwAddPdoAssociation @ 0x1405E3F58 (PiSwAddPdoAssociation.c)
 *     PiSwMakePdoInactive @ 0x1406CE20C (PiSwMakePdoInactive.c)
 */

PDEVICE_OBJECT __fastcall PiSwGetChildPdo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PDEVICE_OBJECT v5; // rbx
  __int64 PdoAssociation; // rcx
  NTSTATUS v7; // eax
  _QWORD *DeviceExtension; // rsi
  __int64 v9; // r8
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2 - 96;
  v5 = 0LL;
  DeviceObject = 0LL;
  LOBYTE(a3) = 1;
  PdoAssociation = PiSwFindPdoAssociation(a2 - 96, a1, a3);
  if ( (*(_DWORD *)(v3 + 4) & 2) != 0 )
  {
    if ( !PdoAssociation )
      return v5;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PdoAssociation + 24) + 64LL) + 8LL) &= ~8u;
  }
  else if ( PdoAssociation )
  {
    v5 = *(PDEVICE_OBJECT *)(PdoAssociation + 24);
    *((_DWORD *)v5->DeviceExtension + 2) |= 8u;
  }
  else
  {
    if ( *(_QWORD *)(v3 + 120) )
      PiSwMakePdoInactive();
    v7 = IoCreateDevice(PiSwDeviceDriverObject, 0x10u, 0LL, 0x22u, 0x80u, 0, &DeviceObject);
    v5 = DeviceObject;
    if ( v7 >= 0 )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      *DeviceExtension = 0LL;
      DeviceExtension[1] = 0LL;
      v9 = *(_QWORD *)(v3 + 152);
      if ( v9 && (int)ObSetSecurityObjectByPointer((__int64)v5, 28, v9) < 0 )
      {
        IoDeleteDevice(v5);
        return 0LL;
      }
      *DeviceExtension = v3;
      _InterlockedIncrement((volatile signed __int32 *)v3);
      v5 = DeviceObject;
      *(_QWORD *)(v3 + 120) = DeviceObject;
      *((_DWORD *)DeviceExtension + 2) |= 8u;
      v5->Flags &= ~0x80u;
      PiSwAddPdoAssociation(v3, a1, v5);
    }
  }
  if ( v5 )
    ObfReferenceObject(v5);
  return v5;
}
