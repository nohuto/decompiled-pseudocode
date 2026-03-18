/*
 * XREFs of ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C011F930
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C004EE50 (ReadPointerDeviceSettings.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     GetPenHoldTime @ 0x1C01F3430 (GetPenHoldTime.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C004FACC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 LoadPointerDevicePenSettings(void)
{
  PCWSTR *v0; // rbx
  __int64 result; // rax
  HANDLE v2; // rbp
  __int64 v3; // rsi
  _DWORD *v4; // rdi
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  v0 = (PCWSTR *)off_1C0320040;
  if ( (int)OpenDeviceCfgKey(0x60u, L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters", 0x20019u, &Handle, 0) < 0 )
    return 0LL;
  v2 = Handle;
  v3 = 8LL;
  v4 = (_DWORD *)v0 + 3;
  do
  {
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v2, v0) < 0 )
      *v4 = -1;
    v0 += 2;
    v4 += 4;
    --v3;
  }
  while ( v3 );
  ZwClose(v2);
  result = 1LL;
  gPenMonitor = 1;
  return result;
}
