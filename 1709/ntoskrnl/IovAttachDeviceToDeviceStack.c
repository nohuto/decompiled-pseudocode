/*
 * XREFs of IovAttachDeviceToDeviceStack @ 0x1407A48BC
 * Callers:
 *     IopAttachDeviceToDeviceStackSafe @ 0x140127C98 (IopAttachDeviceToDeviceStackSafe.c)
 * Callees:
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407A21FC (VfXdvDriverCaptureIoCallbacks.c)
 *     IovUtilFlushStackCache @ 0x1407B4A44 (IovUtilFlushStackCache.c)
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
