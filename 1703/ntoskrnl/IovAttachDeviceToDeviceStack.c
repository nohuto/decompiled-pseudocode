/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x140762C2C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140071B54 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     VfXdvDriverCaptureIoCallbacks @ 0x140761D60 (VfXdvDriverCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x140772C84 (IovUtilFlushStackCache.c)
 */

__int64 __fastcall IovAttachDeviceToDeviceStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    VfXdvDriverCaptureIoCallbacks(*(struct _DRIVER_OBJECT **)(a1 + 8));
    return IovUtilFlushStackCache(a2);
  }
  return result;
}
