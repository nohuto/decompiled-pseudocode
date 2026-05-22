/*
 * XREFs of ?PopulateAugmentedInput@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@KIGGGPEAUInputInfo@@@Z @ 0x18005EE60
 * Callers:
 *     ?OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z @ 0x18006CF30 (-OnDeviceRemoval@AugmentedInputDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z @ 0x18006D070 (-OnInputReport@AugmentedInputDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x18005F0B0 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
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

  v9 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a1, 0LL, 1024LL, a2, a7);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a7 + 1156) = a3;
    *(_BYTE *)(a7 + 1224) = 0;
    memset_0((void *)(a7 + 1160), 0, 0x40uLL);
    v10 = *(_BYTE *)(a7 + 1144);
    *(_DWORD *)(a7 + 1164) = 8;
    *(_BYTE *)(a7 + 1211) = 1;
    *(_DWORD *)(a7 + 1168) = v10 != 0 ? 8 : 0;
    if ( v10 )
      v11 = FLOAT_1_0;
    else
      v11 = 0.0;
    *(_WORD *)(a7 + 1206) = a5;
    *(_WORD *)(a7 + 1208) = a6;
    *(float *)(a7 + 1200) = v11;
    *(_WORD *)(a7 + 1204) = a4;
    memset_0((void *)(a7 + 1228), 0, 0xA0uLL);
  }
  return (unsigned int)v9;
}
