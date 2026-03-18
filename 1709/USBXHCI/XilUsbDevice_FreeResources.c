/*
 * XREFs of XilUsbDevice_FreeResources @ 0x1C00333B0
 * Callers:
 *     XilUsbDevice_Create @ 0x1C0033180 (XilUsbDevice_Create.c)
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0034900 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     XilCoreUsbDevice_FreeResources @ 0x1C0041428 (XilCoreUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilUsbDevice_FreeResources(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 48) )
    a1 += 8LL;
  return XilCoreUsbDevice_FreeResources(a1);
}
