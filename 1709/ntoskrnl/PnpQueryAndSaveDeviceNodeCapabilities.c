/*
 * XREFs of PnpQueryAndSaveDeviceNodeCapabilities @ 0x14055226C
 * Callers:
 *     PipProcessStartPhase3 @ 0x140552400 (PipProcessStartPhase3.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405BA584 (IopInitializeDeviceInstanceKey.c)
 *     PiInitializeDevice @ 0x1406D3418 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x14083F81C (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PnpSaveDeviceCapabilities @ 0x140551090 (PnpSaveDeviceCapabilities.c)
 *     PpIrpQueryCapabilities @ 0x1405522C0 (PpIrpQueryCapabilities.c)
 */

__int64 __fastcall PnpQueryAndSaveDeviceNodeCapabilities(__int64 a1)
{
  __int64 result; // rax
  _DWORD v3[16]; // [rsp+20h] [rbp-58h] BYREF

  result = PpIrpQueryCapabilities(*(_QWORD *)(a1 + 32), v3);
  if ( (int)result >= 0 )
    return PnpSaveDeviceCapabilities(a1, v3, 0);
  return result;
}
