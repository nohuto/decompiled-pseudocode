/*
 * XREFs of PiSwCloseDevice @ 0x1405C4518
 * Callers:
 *     PiSwIrpCleanup @ 0x1405C529C (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x1405C8DA8 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x1405C8F18 (PiSwCloseDescendants.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IoInvalidateDeviceRelations @ 0x140145A30 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x14050BF34 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x1405C3DC8 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1405C53A0 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x140735684 (PiSwQueuedCreateInfoFree.c)
 */

struct _DEVICE_OBJECT *__fastcall PiSwCloseDevice(PVOID a1)
{
  struct _DEVICE_OBJECT *result; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  _QWORD *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a1;
  if ( *((_QWORD *)a1 + 11) )
  {
    PiSwQueuedCreateInfoFree(*((PVOID *)a1 + 11));
    Buffer[11] = 0LL;
    a1 = Buffer;
  }
  if ( *((_QWORD *)a1 + 15) )
  {
    *((_DWORD *)a1 + 1) |= 2u;
    result = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v2 = result;
    if ( result )
    {
      IoInvalidateDeviceRelations(result, SingleBusRelations);
      return (struct _DEVICE_OBJECT *)ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( *((_QWORD *)a1 + 14) )
      PiSwBusRelationRemove((char *)a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    return (struct _DEVICE_OBJECT *)PiSwDeviceDereference(Buffer);
  }
  return result;
}
