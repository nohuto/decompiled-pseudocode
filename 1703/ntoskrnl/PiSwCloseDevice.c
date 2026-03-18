/*
 * XREFs of PiSwCloseDevice @ 0x14056E1C4
 * Callers:
 *     PiSwIrpCleanup @ 0x140570744 (PiSwIrpCleanup.c)
 *     PiSwStopDestroy @ 0x140570B8C (PiSwStopDestroy.c)
 *     PiSwCloseDescendants @ 0x140570CFC (PiSwCloseDescendants.c)
 * Callees:
 *     IoInvalidateDeviceRelations @ 0x14003CEF0 (IoInvalidateDeviceRelations.c)
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x140488390 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiSwBusRelationRemove @ 0x14056D5EC (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140576020 (PiSwDeviceDereference.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406A3448 (PiSwQueuedCreateInfoFree.c)
 */

struct _DEVICE_OBJECT *__fastcall PiSwCloseDevice(__int64 a1)
{
  struct _DEVICE_OBJECT *result; // rax
  struct _DEVICE_OBJECT *v2; // rbx
  __int64 Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = a1;
  if ( *(_QWORD *)(a1 + 88) )
  {
    PiSwQueuedCreateInfoFree(*(_QWORD *)(a1 + 88));
    *(_QWORD *)(Buffer + 88) = 0LL;
    a1 = Buffer;
  }
  if ( *(_QWORD *)(a1 + 120) )
  {
    *(_DWORD *)(a1 + 4) |= 2u;
    result = (struct _DEVICE_OBJECT *)PnpDeviceObjectFromDeviceInstanceWithTag(*(_QWORD *)(Buffer + 112), 0x746C6644u);
    v2 = result;
    if ( result )
    {
      IoInvalidateDeviceRelations(result, SingleBusRelations);
      return (struct _DEVICE_OBJECT *)ObfDereferenceObject(v2);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 112) )
      PiSwBusRelationRemove((_QWORD *)a1);
    RtlDeleteElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
    return (struct _DEVICE_OBJECT *)PiSwDeviceDereference(Buffer);
  }
  return result;
}
