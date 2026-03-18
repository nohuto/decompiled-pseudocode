/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x140587E04
 * Callers:
 *     IoConnectInterruptEx @ 0x140588090 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1405883B0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14058887C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140588E44 (IopGetInterruptConnectionData.c)
 */

__int64 __fastcall IopConnectLineBasedInterrupt(struct _DEVICE_OBJECT *a1, _QWORD *a2, __int64 a3)
{
  _DWORD *DeviceNode; // rdx

  *a2 = 0LL;
  if ( a1 && (DeviceNode = a1->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a3 )
    return IopGetInterruptConnectionData(a1);
  else
    return 3221225485LL;
}
