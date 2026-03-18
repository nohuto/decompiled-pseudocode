/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0116470
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C00C0570 (ReadPointerDeviceSettings.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetPenHoldTime @ 0x1C01E7430 (GetPenHoldTime.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00C0A48 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C00C11E8 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  PCWSTR *v0; // rbx
  __int64 result; // rax
  _DWORD *v2; // rdi
  __int64 v3; // rsi
  HANDLE v4; // rbp
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v0 = (PCWSTR *)off_1C0324040;
  if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20019u, &Handle, 0) < 0 )
    return 0LL;
  v4 = Handle;
  v3 = 8LL;
  v2 = (_DWORD *)v0 + 3;
  do
  {
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v4, v0) < 0 )
      *v2 = -1;
    v0 += 2;
    v2 += 4;
    --v3;
  }
  while ( v3 );
  ZwClose(v4);
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
