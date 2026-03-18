/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x1404A6FC0
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404A7014 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x140559998 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1406A8758 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x1407FAEC0 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PpIrpQueryCapabilities @ 0x1404DBEEC (PpIrpQueryCapabilities.c)
 *     PnpSaveDeviceCapabilities @ 0x1404DE1F4 (PnpSaveDeviceCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _BYTE v3[64]; // [rsp+20h] [rbp-58h] BYREF

  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0LL);
  return result;
}
