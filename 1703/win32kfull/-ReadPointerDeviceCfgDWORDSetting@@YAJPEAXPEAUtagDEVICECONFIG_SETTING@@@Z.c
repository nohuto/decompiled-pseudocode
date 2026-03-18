/*
 * XREFs of ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C00C11E8
 * Callers:
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C00BE8E4 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C00C09E0 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00C0B9C (GetLocalMachineRegistryDWORDValues.c)
 *     _GetPrecisionTouchPadThresholds @ 0x1C01053C0 (_GetPrecisionTouchPadThresholds.c)
 *     UpdatePTPConfigFromRegistry @ 0x1C0105450 (UpdatePTPConfigFromRegistry.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0116470 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0118C8C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0119BB0 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C01E6D68 (-GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadPointerDeviceCfgDWORDSetting(HANDLE KeyHandle, PCWSTR *a2)
{
  _DWORD *v4; // rbx
  NTSTATUS v5; // edi
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG Length; // [rsp+58h] [rbp+10h] BYREF

  Length = 16;
  RtlInitUnicodeString(&ValueName, *a2);
  v4 = (_DWORD *)Win32AllocPool(Length, 2020635477LL);
  if ( v4 )
  {
    v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v4, Length, &Length);
    if ( v5 >= 0 && v4[1] == 4 )
      *((_DWORD *)a2 + 3) = v4[3];
    Win32FreePool(v4);
  }
  else
  {
    return (unsigned int)-1073741595;
  }
  return (unsigned int)v5;
}
