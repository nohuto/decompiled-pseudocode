/*
 * XREFs of XilUsbDevice_FreeResources @ 0x1C0030F28
 * Callers:
 *     XilUsbDevice_Create @ 0x1C0030C50 (XilUsbDevice_Create.c)
 *     UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C00323E0 (UsbDevice_EvtUsbDeviceCleanupCallback.c)
 * Callees:
 *     XilCoreUsbDevice_FreeResources @ 0x1C003FBD0 (XilCoreUsbDevice_FreeResources.c)
 */

__int64 __fastcall XilUsbDevice_FreeResources(__int64 a1)
{
  __int64 v2; // rcx

  v2 = a1 + 8;
  if ( !*(_BYTE *)(a1 + 49) )
    v2 = a1;
  return XilCoreUsbDevice_FreeResources(v2);
}
