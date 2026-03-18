/*
 * XREFs of IopShutdownBaseFileSystems @ 0x1404159A4
 * Callers:
 *     IoShutdownSystem @ 0x140415678 (IoShutdownSystem.c)
 * Callees:
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404DDD40 (IoBuildSynchronousFsdRequest.c)
 */

LONG_PTR __fastcall IopShutdownBaseFileSystems(LONG_PTR *a1)
{
  LONG_PTR *v2; // rbx
  LONG_PTR result; // rax
  PDEVICE_OBJECT v4; // rsi
  PDEVICE_OBJECT AttachedDevice; // rbx
  IRP *v6; // rax
  LONG_PTR v7; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = (LONG_PTR *)*a1;
  result = *(_QWORD *)*a1;
  if ( *(LONG_PTR **)(*a1 + 8) != a1 || *(LONG_PTR **)(result + 8) != v2 )
    __fastfail(3u);
  *a1 = result;
  *(_QWORD *)(result + 8) = a1;
  while ( v2 != a1 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    ObfReferenceObject(v2 - 10);
    IopIncrementDeviceObjectRefCount((ULONG_PTR)(v2 - 10), 1);
    AttachedDevice = (PDEVICE_OBJECT)(v2 - 10);
    v4 = AttachedDevice;
    if ( AttachedDevice->AttachedDevice )
      AttachedDevice = IoGetAttachedDevice(AttachedDevice);
    v6 = IoBuildSynchronousFsdRequest(0x10u, AttachedDevice, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    if ( v6 && IofCallDriver(AttachedDevice, v6) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v2 = (LONG_PTR *)*a1;
    v7 = *(_QWORD *)*a1;
    if ( *(LONG_PTR **)(*a1 + 8) != a1 || *(LONG_PTR **)(v7 + 8) != v2 )
      __fastfail(3u);
    *a1 = v7;
    *(_QWORD *)(v7 + 8) = a1;
    KeResetEvent(&Event);
    IopDecrementDeviceObjectRef((ULONG_PTR)v4, 0, 1u);
    result = ObfDereferenceObject(v4);
  }
  return result;
}
