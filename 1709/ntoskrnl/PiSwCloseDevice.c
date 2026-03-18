/*
 * XREFs of PiSwCloseDevice @ 0x1406CDA04
 * Callers:
 *     PiSwStopDestroy @ 0x14055E5A8 (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x14055E718 (PiSwCloseDescendants.c)
 *     PiSwIrpCleanup @ 0x1405BBE50 (PiSwIrpCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     IoInvalidateDeviceRelations @ 0x1400FF390 (IoInvalidateDeviceRelations.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140526314 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwDeviceDereference @ 0x1405F2D74 (PiSwDeviceDereference.c)
 *     PiSwBusRelationRemove @ 0x1406CD984 (PiSwBusRelationRemove.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406CE694 (PiSwQueuedCreateInfoFree.c)
 */

void __fastcall PiSwCloseDevice(PVOID a1)
{
  struct _DEVICE_OBJECT *v1; // rax
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
    v1 = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(Buffer[14], 0x746C6644u);
    v2 = v1;
    if ( v1 )
    {
      IoInvalidateDeviceRelations(v1, SingleBusRelations);
      ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( *((_QWORD *)a1 + 14) )
      PiSwBusRelationRemove((char *)a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    PiSwDeviceDereference(Buffer);
  }
}
