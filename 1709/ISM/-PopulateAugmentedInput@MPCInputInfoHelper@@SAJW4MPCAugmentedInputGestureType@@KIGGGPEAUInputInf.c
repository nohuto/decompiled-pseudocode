/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x180067A9C
 * Callers:
 *     ?SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180054E40 (-SendInputDetectedIfController@MPCClickerProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18008C0A0 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18008C1B0 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEAUInputInfo@@_N@Z @ 0x180067D8C (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset @ 0x1800CAA5E (memset.c)
 */

__int64 __fastcall MPCInputInfoHelper::PopulateAugmentedInput(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int16 a4,
        __int16 a5,
        __int16 a6,
        __int64 a7)
{
  int v9; // edi
  char v10; // dl
  float v11; // xmm0_4

  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, a2, a7, 0);
  if ( v9 >= 0 )
  {
    *(_DWORD *)a7 = 1024;
    *(_DWORD *)(a7 + 1332) = a3;
    *(_BYTE *)(a7 + 1392) = 0;
    memset((void *)(a7 + 1336), 0, 0x38uLL);
    v10 = *(_BYTE *)(a7 + 1320);
    *(_DWORD *)(a7 + 1340) = 8;
    *(_BYTE *)(a7 + 1379) = 1;
    *(_DWORD *)(a7 + 1344) = v10 != 0 ? 8 : 0;
    if ( v10 )
      v11 = FLOAT_1_0;
    else
      v11 = 0.0;
    *(_WORD *)(a7 + 1374) = a5;
    *(_WORD *)(a7 + 1376) = a6;
    *(float *)(a7 + 1368) = v11;
    *(_WORD *)(a7 + 1372) = a4;
    memset((void *)(a7 + 1396), 0, 0xA0uLL);
  }
  return (unsigned int)v9;
}
