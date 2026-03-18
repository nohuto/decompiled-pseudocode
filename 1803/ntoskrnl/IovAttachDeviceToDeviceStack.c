/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x14081189C
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400C8670 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     VfXdvDriverCaptureIoCallbacks @ 0x14080EE78 (VfXdvDriverCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x14082272C (IovUtilFlushStackCache.c)
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
