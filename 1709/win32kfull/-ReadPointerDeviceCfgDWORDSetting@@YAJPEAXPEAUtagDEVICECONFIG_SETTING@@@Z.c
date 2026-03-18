/*
 * XREFs of ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C004FACC
 * Callers:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C004C9E8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C004F2C0 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C004F47C (GetLocalMachineRegistryDWORDValues.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C01182D0 (_GetPrecisionTouchPadThresholds.c)
 *     UpdatePTPConfigFromRegistry @ 0x1C0118360 (UpdatePTPConfigFromRegistry.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011F930 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C01226D8 (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0125090 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01F2D60 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, PCWSTR *a2)
{
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // r8
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  RtlInitUnicodeString(&ValueName, *a2);
  v4 = (_DWORD *)Win32AllocPool(Length, 2020635477LL);
  if ( v4 )
  {
    v6 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v4, Length, &Length);
    if ( v6 >= 0 && v4[1] == 4 )
      *((_DWORD *)a2 + 3) = v4[3];
    Win32FreePool(v4, v5, v7);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v6;
}
