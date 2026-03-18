/*
 * XREFs of _GetPrecisionTouchPadThresholds @ 0x1C01182D0
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0043BB4 (CheckPointerDeviceConfiguration.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C004FACC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 GetPrecisionTouchPadThresholds()
{
  __int64 result; // rax
  HANDLE v1; // rbx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  result = OpenDeviceCfgKey(
             0x7Au,
             L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
             0x20019u,
             &Handle,
             0);
  if ( (int)result >= 0 )
  {
    v1 = Handle;
    if ( (int)ReadPointerDeviceCfgDWORDSetting(Handle, (PCWSTR *)&gTouchPadThresholdSettings) < 0 )
      dword_1C032070C = -1;
    ZwClose(v1);
    if ( (unsigned int)(dword_1C032070C - 50) <= 0x60E )
      gTPThresholds[20] = dword_1C032070C;
    return CPTPProcessor::EnvironmentChanged();
  }
  return result;
}
