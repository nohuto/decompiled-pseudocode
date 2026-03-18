/*
 * XREFs of ?VmBusAdapterStop@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C000E1D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VmBusAdapterStop(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  *(_BYTE *)(*((_QWORD *)a1 + 5) + 160LL) = 1;
  return 0;
}
