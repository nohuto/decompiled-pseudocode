/*
 * XREFs of ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0119BB0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01E6F24 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C00C11E8 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 LoadPointerDeviceTouchSettings(void)
{
  PCWSTR *v0; // rbx
  __int64 result; // rax
  struct tagDEVICECONFIG_SETTING *v2; // rbx
  HANDLE v3; // rdi
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  HANDLE v6; // rbp
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  if ( !gTouchMonitor )
  {
    v0 = (PCWSTR *)off_1C0324060;
    if ( (int)OpenDeviceCfgKey(0x3Eu, L"\\Software\\Microsoft\\Wisp\\Touch", 0x20019u, &Handle, 0) < 0 )
      return 0LL;
    v4 = (_DWORD *)v0 + 3;
    v6 = Handle;
    v5 = 13LL;
    do
    {
      if ( (int)ReadPointerDeviceCfgDWORDSetting(v6, v0) < 0 )
        *v4 = -1;
      v0 += 2;
      v4 += 4;
      --v5;
    }
    while ( v5 );
    ZwClose(v6);
  }
  if ( !gMultiTouchMonitor )
  {
    v2 = off_1C0324050;
    if ( (int)OpenDeviceCfgKey(0x48u, L"\\Software\\Microsoft\\Wisp\\MultiTouch", 0x20019u, &Handle, 0) < 0 )
      return 0LL;
    v3 = Handle;
    if ( (int)ReadPointerDeviceCfgDWORDSetting(Handle, (PCWSTR *)v2) < 0 )
      *((_DWORD *)v2 + 3) = -1;
    ZwClose(v3);
  }
  gTouchMonitor = 1;
  result = 1LL;
  gMultiTouchMonitor = 1;
  return result;
}
