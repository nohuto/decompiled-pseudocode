/*
 * XREFs of PiDevCfgConfigureDeviceDriverConfiguration @ 0x1405A4760
 * Callers:
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceDriver @ 0x1405A46D8 (PiDevCfgConfigureDeviceDriver.c)
 * Callees:
 *     PiDevCfgConfigureDeviceKeys @ 0x140589470 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405A47EC (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriverConfiguration(
        __int64 a1,
        __int64 a2,
        void *a3,
        int a4,
        _DWORD *P,
        _DWORD *a6)
{
  __int64 result; // rax

  if ( (a4 & 1) == 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, P, a6);
  result = PiDevCfgCopyObjectProperties(a1, a2, (_DWORD)a3, (_DWORD)a3, *(_QWORD *)(a1 + 48), 1, *(_QWORD *)(a2 + 16));
  if ( (int)result >= 0 )
    return PiDevCfgConfigureDeviceKeys(a1, a2, a3, a4, P, a6);
  return result;
}
