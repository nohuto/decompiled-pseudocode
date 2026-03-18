/*
 * XREFs of PiSwCloseDescendants @ 0x1405C8F18
 * Callers:
 *     PiSwIrpCleanup @ 0x1405C529C (PiSwIrpCleanup.c)
 *     PiSwProcessParentRemoveIrp @ 0x1405C8E48 (PiSwProcessParentRemoveIrp.c)
 *     PiSwCloseDescendants @ 0x1405C8F18 (PiSwCloseDescendants.c)
 * Callees:
 *     PiSwCloseDevice @ 0x1405C4518 (PiSwCloseDevice.c)
 *     PiSwCloseDescendants @ 0x1405C8F18 (PiSwCloseDescendants.c)
 *     PiSwFindBusRelations @ 0x1405CDC48 (PiSwFindBusRelations.c)
 */

struct _DEVICE_OBJECT *PiSwCloseDescendants()
{
  struct _DEVICE_OBJECT *result; // rax
  struct _DEVICE_OBJECT **p_NextDevice; // rdi
  struct _DEVICE_OBJECT *NextDevice; // rbx
  unsigned int *p_SystemArgument1; // rsi

  result = (struct _DEVICE_OBJECT *)PiSwFindBusRelations();
  if ( result )
  {
    p_NextDevice = &result->NextDevice;
    NextDevice = result->NextDevice;
    while ( NextDevice != (struct _DEVICE_OBJECT *)p_NextDevice )
    {
      p_SystemArgument1 = (unsigned int *)&NextDevice[-1].Dpc.SystemArgument1;
      NextDevice = *(struct _DEVICE_OBJECT **)&NextDevice->Type;
      result = (struct _DEVICE_OBJECT *)p_SystemArgument1[1];
      if ( ((unsigned __int8)result & 1) == 0 )
      {
        PiSwCloseDescendants(p_SystemArgument1 + 18);
        result = PiSwCloseDevice(p_SystemArgument1);
      }
    }
  }
  return result;
}
