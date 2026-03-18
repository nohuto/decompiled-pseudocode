/*
 * XREFs of ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C00C09E0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00C0B9C (GetLocalMachineRegistryDWORDValues.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C00C11E8 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 __fastcall IsFlicksDisabledByGroupPolicy(__int64 a1)
{
  unsigned int v1; // ebx
  int LocalMachineRegistryDWORDValues; // eax
  int PointerDeviceCfgDWORDSetting; // eax
  int v5; // edi
  const wchar_t *v6; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+38h] [rbp-10h]
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0;
  v6 = L"PreventFlicks";
  v7 = 0LL;
  LocalMachineRegistryDWORDValues = GetLocalMachineRegistryDWORDValues(
                                      a1,
                                      L"\\Software\\Policies\\Microsoft\\TabletPC",
                                      &v6);
  if ( HIDWORD(v7) )
    return LocalMachineRegistryDWORDValues >= 0;
  if ( OpenDeviceCfgKey(0x4Cu, L"\\Software\\Policies\\Microsoft\\TabletPC", 0x20019u, &Handle, 0) < 0 )
    return v1;
  PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(Handle, (struct tagDEVICECONFIG_SETTING *)&v6);
  v5 = HIDWORD(v7);
  if ( PointerDeviceCfgDWORDSetting < 0 )
    v5 = -1;
  ZwClose(Handle);
  if ( v5 != 1 )
    return v1;
  return 1LL;
}
