/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x1405CC244
 * Callers:
 *     PipProcessStartPhase3 @ 0x1405CACE8 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405D9834 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x14073B304 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1408A3B0C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     PpIrpQueryCapabilities @ 0x1405CC1BC (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x1405CF414 (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  result = PpIrpQueryCapabilities(*(struct _DEVICE_OBJECT **)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
