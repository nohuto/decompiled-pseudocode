/*
 * XREFs of UpdatePTPConfigFromRegistry @ 0x1C0118360
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C004F328 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C004FACC (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 UpdatePTPConfigFromRegistry()
{
  PCWSTR *v1; // rbx
  struct tagDEVICECONFIG_SETTING near **v2; // rbx
  unsigned int v3; // ecx
  _DWORD *v4; // rsi
  __int64 v5; // rbp
  void *v6; // rdi
  void *v7; // [rsp+50h] [rbp+8h] BYREF

  if ( gTouchPadMonitor )
    return 1LL;
  v1 = (PCWSTR *)off_1C0320010;
  if ( (int)OpenDeviceCfgKey(
              0x7Au,
              L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad",
              0x20019u,
              &v7,
              0) < 0 )
    return 0LL;
  v5 = 13LL;
  v4 = (_DWORD *)v1 + 3;
  v6 = v7;
  do
  {
    if ( (int)ReadPointerDeviceCfgDWORDSetting(v6, v1) < 0 )
      *v4 = *(v4 - 1);
    v1 += 2;
    v4 += 4;
    --v5;
  }
  while ( v5 );
  ZwClose(v6);
  v2 = off_1C0320010;
  if ( *((_DWORD *)off_1C0320010 + 7) )
    gTouchPadParameters[3] |= 4u;
  if ( *((_DWORD *)v2 + 11) )
    gTouchPadParameters[3] |= 8u;
  v3 = *((_DWORD *)v2 + 3);
  if ( v3 <= 4 )
    gTouchPadParameters[2] = v3;
  if ( (unsigned __int8)IsValidMouseSensitivity(*((unsigned int *)v2 + 31)) )
    gTouchPadParameters[4] = *((_DWORD *)v2 + 31);
  if ( *((_DWORD *)v2 + 15) )
    gTouchPadParameters[3] |= 0x80u;
  if ( *((_DWORD *)v2 + 19) )
    gTouchPadParameters[3] |= 0x100u;
  if ( *((_DWORD *)v2 + 51) )
    gTouchPadParameters[5] |= 0x80u;
  if ( !*((_DWORD *)v2 + 35) )
    gTouchPadParameters[5] &= ~1u;
  if ( !*((_DWORD *)v2 + 39) )
    gTouchPadParameters[5] &= ~2u;
  if ( !*((_DWORD *)v2 + 43) )
    gTouchPadParameters[5] &= ~4u;
  if ( !*((_DWORD *)v2 + 23) )
    gTouchPadParameters[3] &= ~0x200u;
  if ( !*((_DWORD *)v2 + 27) )
    gTouchPadParameters[3] &= ~0x400u;
  if ( !*((_DWORD *)v2 + 47) )
    gTouchPadParameters[5] &= ~0x40u;
  gTouchPadMonitor = 1;
  gTouchPadParameters[0] = 0;
  return 1LL;
}
